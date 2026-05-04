#include <stdio.h>

int main(){
    int i=0 , len=0;
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of the string is: %d",i);
    while(str[i]!='\0'){
        i++;
    }
    len = i;

    int temp;
    int j = len-1;

    while(i<j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("The reversed string is:- %s\n", str);

    return 0;
}