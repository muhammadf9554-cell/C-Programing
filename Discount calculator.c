// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    float bill;
    float payable_bill;
    float dis;
    printf("Enter a bill: ");
    scanf("%f",&bill);
    if(bill<2000){
        printf("payable bill:%f Rs\n",bill);
    }
    else if(bill>=2000&&bill<=4000){
        dis=bill*20/100;
        payable_bill=bill-dis;
        printf("Payable bill:%f Rs\n",payable_bill);
    }
    else if(bill>4000&&bill<=6000){
        dis=bill*30/100;
        payable_bill=bill-dis;
        printf("Payable bill:%f Rs\n",payable_bill);
    }
    else if(bill>6000){
        dis=bill*50/100;
        payable_bill=bill-dis;
        printf("Payable bill:%f Rs\n",payable_bill);
    }
    return 0;
}