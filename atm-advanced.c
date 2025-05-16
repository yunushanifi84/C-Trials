#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"English");
    int operation, amount, account_number;
    int balance = 1500;
    printf("Select your operation:\n1. Withdraw Money\n2. Deposit Money\n3. Transfer Money\n4. Check Balance\n5. Return Card\n");
    scanf("%d", &operation);

    switch(operation){
        case 1:
            printf("Your balance: %d\n", balance);
            printf("Enter the amount you want to withdraw: ");
            scanf("%d", &amount);
            if (balance < amount){
                printf("Insufficient funds!");
                break;
            }

            balance -= amount;
            printf("\n\nPlease take your money from the cash dispenser.\n");
            printf("Remaining balance: %d", balance);
            break;
        case 2:
            printf("Your balance: %d\n", balance);
            printf("Enter the amount you want to deposit: ");
            scanf("%d", &amount);
            balance += amount;
            printf("\n\nPlease put the money in the cash slot.\n");
            printf("New balance: %d", balance);
            break;
        case 3:
            printf("Your balance: %d\n", balance);
            printf("Enter the amount you want to transfer: ");
            scanf("%d", &amount);
            printf("Enter the account number you want to transfer to: ");
            scanf("%d", &account_number);
            if (balance < amount){
                printf("Insufficient funds!");
                break;
            }
            balance -= amount;
            printf("Your transaction has been completed!\n");
            printf("Remaining balance: %d", balance);
            break;
        case 4:
            printf("Your balance: %d\n", balance);
            break;
        case 5:
            printf("Your card has been returned.");
            break;
        default:
            printf("Undefined operation");
            break;
    }

    return 0;
}
