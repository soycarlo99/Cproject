#include <stdio.h>
#include <string.h>

void reverseStr(void);
void bubbleSort(void);

char input[100];
int size;

int main() {
    reverseStr();
    bubbleSort();
    return 0;
}

void reverseStr(void) {
    char input0[50];
    printf("Enter a string to reverse: ");
    scanf("%s", input0);
  
    int N = strlen(input0);
    for (int i = N - 1; i >= 0; i--) {
        printf("%c", input0[i]);
    }
    printf("\n");
}

void bubbleSort(void) {
    printf("Enter a string to sort: ");
    scanf("%s", input);

    size = strlen(input);

    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (input[i] > input[i + 1]) {
                char temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", input);
}
