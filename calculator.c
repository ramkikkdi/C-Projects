// Include the pre-processor directives
#include <stdio.h>
#include <math.h>
#include <string.h>

void print_menu();
double division(double, double);
double modulus(int, int);

int main (){
    // We need two numbers here one for random number generation and the other for the user input
    int user_number, user_choice;
    char error;
    double first_number, second_number,result;
    while(1){
        printf("\n");
        print_menu();
        printf("\n");
        printf("\n Please enter your choice: ");
        scanf("%d",&user_choice);
        
        if (user_choice == 7) {
           break;
        }

        if (user_choice <1 || user_choice > 7){
            fprintf(stderr,"\nInvalid menu selection");
            printf("\n Exiting the calculator program");
            break;
        }

        printf("\nPlease enter the first number : ");
        scanf("%lf",&first_number);
        printf("\nPlease enter the second number : ");
        scanf("%lf",&second_number);
    
    switch (user_choice)
    {
    case 1:
        result = first_number + second_number;
        break;
    case 2:
        result = first_number - second_number; 
        break;
    case 3:
        result = first_number * second_number;
        break;
    case 4:
        result = division(first_number,second_number);
        break;
    case 5:
        result =pow(first_number,second_number);
        break;
    case 6:
        result = (int)first_number % (int)second_number;
        break;
    
    default:
        break;
    }

    if (!isnan(result)){
        printf("\nResult of operation is %.2f",result);
        continue;
    }
       
}
return 0;
};
    
void print_menu() {
    printf("\n-----------------------------------------\n");
    printf ("Welcome to Calculator application!!\n");
    printf ("Choose one of the following options to proceed!! \n");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Power");
    printf("\n6. Modulus");
    printf("\n7. Exit");

}

double division (double a , double b) {
   if (b == 0) {
      fprintf(stderr,"Invalid argument for Division");
      return NAN;
   }
   else{
    return a / b;
   }
}

double modulus (int a , int b) {
   if (b == 0) {
      fprintf(stderr,"Invalid argument for Modulus");
      return NAN;
   }
   else{
    return a % b;
   }
}