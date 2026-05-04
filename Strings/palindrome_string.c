#include <stdio.h>

int main(){
    int i = 0, len = 0;
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        i++;
    }
    len = i;

    int j = len - 1;
    i = 0;
    int palindrome = 1;

    while(i < j){
        if(str[i]!=str[j]){
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(palindrome==1){
        printf("Entered string is palindrome\n");
    }
    else{
        printf("Entered string is not a palindrome\n");
    }
    
    return 0;
}