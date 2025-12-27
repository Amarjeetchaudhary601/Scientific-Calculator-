#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1415

int main() {
    int choice;
    double num1, num2, result,     base, exponent;
    double temp_celcius, temp_fahrenheit, angle_deg;

    do {
    
        printf("    *Welcome To Scientific Calculator*\n\n");
        printf("1. Addition(+).\n");
        printf("2. Subtraction(-).\n");
        printf("3. Multiplication(*).\n");
        printf("4. Division(/).\n");
        printf("5. Power (x^y).\n");
        printf("6. Square Root.\n");
        printf("7. Sine (degrees).\n");
        printf("8. Cosine (degrees).\n");
        printf("9. Tangent (degrees).\n");
        printf("10. Absolute Value.\n");
        printf("11. Celcius to Fahrenheit.\n");
        printf("12. Fahrenheit to Celcius.\n");
        printf("13. Exit.\n");
        printf("\nEnter your choice between 1-13:- ");
        scanf("%d", &choice);
        
        switch(choice){
        
            case 1:
            printf("Enter the Number num1 :-");
            scanf("%lf", &num1);
            printf("Enter the Number num2 :-");
            scanf("%lf", &num2);
            result=num1+num2;
           printf("Result :- %.3lf\n\n", result);
            break;
            
            case 2:
            printf("Enter the Number num1 :-");
            scanf("%lf", &num1);
            printf("Enter the Number num2 :-");
            scanf("%lf", &num2);
            result=num1-num2;
           printf("Result :- %.3lf\n\n", result);
            break;
            
            case 3:
            printf("Enter the Number num1 :-");
            scanf("%lf", &num1);
            printf("Enter the Number num2 :-");
            scanf("%lf", &num2);
            result=num1*num2;
            printf("Result :- %.3lf\n\n", result);
            break;
            
            case 4:
            printf("Enter the Number num1 :-");
            scanf("%lf", &num1);
            printf("Enter the Number num2 :-");
            scanf("%lf", &num2);
            
            if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result :- %.3lf\n\n", result);
                } else {
                    printf("Error: Cannot divide by zero.\n\n");
                    continue;
                } 
            break;
            
            case 5:
            printf("Enter the Base :-");
            scanf("%lf", &base);
            printf("Enter the Exponent :-");
            scanf("%lf", &exponent);
            result=pow(base,exponent);
            printf("Result :- %.3lf\n\n", result);
            break;
            
            case 6:
            printf("Enter the Number num1 :-");
            scanf("%lf", &num1);
            
            if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result :- %.3lf\n\n", result);
                } else {
                    printf("Error: Cannot calculate square root of a negative number.\n");
                    break;
                }
            break;
            
            case 7:
            printf("Enter the Degree :-");
            scanf("%lf", &angle_deg);
            result=sin(angle_deg*PI/180);
            printf("Result :- %.3lf\n\n", result);
            break;
            
            case 8:
            printf("Enter the Degree :-");
            scanf("%lf",&angle_deg);
            result=cos((angle_deg)*PI/180);
            printf("Result :- %.3lf\n\n", result);
            break;
            
            case 9:
            printf("Enter the Degree :-");
            scanf("%lf", &angle_deg);
            result=tan((angle_deg)*PI/180);
            printf("Result :- %.3lf\n\n", result);
            break;
            
            case 10:
            printf("Enter the Number num1 :-");
            scanf("%lf", &num1);
            result=fabs(num1);
            printf("Result :- %.3lf\n\n", result);
            break;
            
            case 11:
            printf("Enter the Celcius Temperature :-");
            scanf("%lf", &temp_celcius);
            result= (temp_celcius*1.8)+32;
            printf("Result :- %.3lf°F\n\n", result);           
            break;
            
            case 12:
            printf("Enter the Fahrenheit Temperature :-");
            scanf("%lf", &temp_fahrenheit);
            result= (temp_fahrenheit-32)*5/9;
            printf("Result :- %.3lf°C\n\n", result);           
            break;
            
            case 13:
            printf("\nExiting Calculator. Thank you!");
            exit(0);
            break;
            
            default:
                printf("Error :- Choose between 1-13.\n\n");
                break;
        }
        

    } while (1);
    
    return 0;
} 
