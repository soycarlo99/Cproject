#include <stdio.h>

int StrCounter(char arr[]);
void StrCat(char result[], char str1[], char str2[]);
void strComp(char str1[], char str2[]);

char result[100]; 
har example[] = "it is what it is!";
char str1[] = "What is your question";
char str2[] = "What is your question";

int main() {
    int resultCount = StrCounter(example); 
    printf("The string length is: %d\n", resultCount);

    StrCat(result, str1, str2);
    printf("Concatenated string: %s\n", result);

    strComp(str1, str2);

    return 0;
}

int StrCounter(char arr[]) {
    int count = 0;
    while (arr[count] != '\0') {
        count++;
    }
    return count;
}

void StrCat(char result[], char str1[], char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}

void strComp(char str1[], char str2[]) {
    char first[100];
    char sec[100];
    int i = 0, j = 0, k = 0;

    while (str1[i] != '\0') {
        first[i] = str1[i];
        i++;
    }
    first[i] = '\0';

    while (str2[j] != '\0') {
        sec[k] = str2[j];
        k++;
        j++;
    }
    sec[k] = '\0';

    int len1 = StrCounter(first);
    int len2 = StrCounter(sec);

    if (len1 != len2) {
        printf("The strings are not the same (different lengths).\n");
        return;
    }

    for (i = 0; i < len1; i++) {
        if (first[i] != sec[i]) {
            printf("The strings are not the same.\n");
            return;
        }
    }

    printf("first and sec are exactly the same.\n");
}


