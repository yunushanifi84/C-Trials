#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, balance;
    balance = 5000;
    while(i != 100)
    {
        int operation, amount;

        printf("\nSelect the operation you want to perform:\n1-Withdraw money\n2-Deposit money\n3-Check balance\n4-Return card\n");
        scanf("%d", &operation);

        switch(operation)
        {
        case 1:
            printf("Your balance: %d\nEnter the amount you want to withdraw:\n", balance);
            scanf("%d", &amount);

            if(balance > amount)
            {
                balance -= amount;
                printf("Your balance: %d", balance);
            }
            else
            {
                printf("Insufficient funds");
            }
            break;

        case 2:
            printf("Your balance: %d\nEnter the amount you want to deposit:\n", balance);
            scanf("%d", &amount);

            balance += amount;
            printf("Your balance: %d", balance);
            break;

        case 3:
            printf("Your balance: %d", balance);
            break;

        case 4:
            printf("\nYour card has been returned\n");
            i = 100;
            break;

        default:
            printf("Please select a valid operation");
        }
    }

    return 0;
}
