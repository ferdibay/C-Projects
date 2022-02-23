#include <stdio.h>

//Basic Mth. menu with switch case

int main() {
    
    int number1=15,number2=3,result;

    char process;

    printf("Choose a Mathematics process:");
    scanf("%s",&process);

    switch (process) {
        case '+':result=(number1+number2);
            printf("Sum of numbers is: %d",result);break;

        case '-':result=(number1-number2);
            printf("Difference of numbers is: %d",result);break;

        case '*':result=(number1*number2);
            printf("Multiple of numbers is: %d",result);break;

        case '/':result=(number1/number2);
            printf("Division of numbers is: %d",result);break;

        default:
            printf("Put a Mathmetics Process!");break;
        
    }
    
    
    return 0;
}
