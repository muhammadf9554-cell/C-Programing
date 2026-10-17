// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int num;
    int orignal;
    int digit;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    orignal=num;
    while(num>0){
        digit=num%10;
        sum=digit*digit*digit+sum;
        num=num/10;
    }
    if(sum==orignal)
        printf("This number is armstorm\n");
    else
        printf("This number is not armstorm\n");
    return 0;
}