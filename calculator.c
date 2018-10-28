#include <stdio.h>
int main() {

    char operator;
    float firstNumber,secondNumber,answer;

    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f%f",&firstNumber, &secondNumber);

    switch(operator)
    {
        case '+':
            answer = firstNumber + secondNumber ;
            printf ("%f", answer);
            break;

        case '-':
            answer = firstNumber - secondNumber ;
            printf ("%f", answer);
            break;

        case '*':
            answer = firstNumber*secondNumber ;
            printf ("%f", answer);
            break;

        case '/':
            answer = firstNumber/secondNumber ;
            printf ("%f", answer);
            break;

        default:
            printf("wrong input");
    }
    
    return 0;
}