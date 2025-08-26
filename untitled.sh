#!/usr/bin/env bash

# Check for version argument
if [ $# -ne 1 ]; then
  echo "Usage: $0 <version>"
  exit 1
fi

VERSION=$1
TARBALL="v${VERSION}.tar.gz"
URL="https://github.com/soycarlo99/dibujo/archive/v${VERSION}.tar.gz"
FORMULA="dibujo.rb"

# Download the tarball
echo "Downloading $URL..."
curl -L -o "$TARBALL" "$URL" || { echo "Download failed"; exit 1; }

# Calculate SHA-256 checksum
echo "Calculating SHA-256 checksum..."
SHA256=$(shasum -a 256 "$TARBALL" | awk '{print $1}')
echo "New SHA256: $SHA256"

# Use nvim to update the formula's url and sha256 fields
echo "Updating $FORMULA with new version and checksum using nvim..."
nvim -es "$FORMULA" \
  +"%s/^\s*url\s\+\".*\"/url \"https:\/\/github.com\/soycarlo99\/dibujo\/archive\/v${VERSION}.tar.gz\"/" \
  +"%s/^\s*sha256\s\+\".*\"/sha256 \"${SHA256}\"/" \
  +wq

# Git commit and push steps
echo "Adding changes to git..."
git add "$FORMULA" || { echo "Git add failed"; exit 1; }

echo "Committing changes..."
git commit -m "Update formula for version $VERSION with new checksum" || { echo "Git commit failed"; exit 1; }

echo "Pushing changes..."
git push || { echo "Git push failed"; exit 1; }

echo "Formula updated and pushed successfully!"
