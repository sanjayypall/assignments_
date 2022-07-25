#include<stdio.h>
int main(){
    int n;
    int a,b;
    sanjay:
    printf("Enter two numbers for calculation\n");
    scanf("%d %d",&a,&b);
    printf("Press 1. for Addition\n");
    printf("Press 2. for Substraction\n");
    printf("Press 3. for multiplication\n");
    printf("Press 4. for reminder\n");
    printf("Press 5. for exit the program\n");
    printf("Choose Your Calculation type\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("The sum of %d and %d is %d\n",a,b,a+b);
        goto sanjay;

    case 2:
        printf("The difference of %d and %d is %d\n",a,b,a-b);
       goto sanjay;

    case 3:
        printf("The product of %d and %d is %d\n",a,b,a*b);
       goto sanjay;

    case 4:
        printf("The reminder of %d/%d is %d\n",a,b,a%b);
       goto sanjay;
    
    case 5:
    printf("Thank You for using the Calculator...\n Have a Nice Day......\n");
    break;
    default:
    printf("You entered a wrong input, please enter a right input from the above option\n");
        goto sanjay;
    }
    return 0;
}