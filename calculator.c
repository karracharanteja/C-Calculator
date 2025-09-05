#include <stdio.h>

int main() {
    int choice, run = 1;
    float num1, num2, result;

    while(run) {
        printf("\n==== I am a simple calculator ====\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n");
        printf("Choose between 1-6: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("The result = %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("The result = %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("The result = %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("The result = %.2f\n", result);
                } else {
                    printf("Error! Cannot divide by 0.\n");
                }
                break;

            case 5: {
                int a, b, modResult;
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                if(b != 0) {
                    modResult = a % b;
                    printf("The result = %d\n", modResult);
                } else {
                    printf("Error! Cannot modulus by 0.\n");
                }
                break;
            }

            case 6:
                printf("Exiting calculator... Goodbye!\n");
                run = 0;
                break;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
