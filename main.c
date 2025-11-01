#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, i;
    int numbers[100];
    int largest;

    printf("Enter how many elements you want to input: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    for(i = 1; i < n; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest element is: %d\n", largest);

    char str[200];
    int vowels = 0;

    getchar(); // clear input buffer

    printf("Enter a sentence or word: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("The total number of vowels is: %d\n", vowels);

    return 0;
}