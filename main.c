#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int palindrome(int num){
    int temp, reverse = 0;
    while(num > 0){
        temp = num % 10;
        reverse = reverse * 10 + temp;
        num /= 10;
        }
    return reverse;
}

int main()
{
    while(true){
    char *s = '\0';
    int original, count = 0;
    bool matchFound = false;
    printf("Enter a number:\n");
    scanf("%d", &original);
    while (!matchFound){
        if(palindrome(original) == original){
            matchFound = true;
        }
        else{
            printf("%d + %d = %d\n", original, palindrome(original), original + palindrome(original));
            original = original + palindrome(original);
            count++;
        }
    }
    if(count != 1){s = 's';}
    printf("Palindrome found in %d step%c!\n%d\n", count, s, original);
    }
    return 0;
}
