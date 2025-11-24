#include <stdio.h>

int main()
{
    int choice, money;

    while(1)    // Infinite loop, will break on cancel
    {
        printf("\nWelcome to our vending machine\n");
        printf("1.Chips(50)\n2.Chocolate(70)\n3.Juice(100)\n4.Cancel\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        if(choice == 4)
        {
            printf("Order cancelled. Thanks for visiting!\n");
            break;  // Exit the loop
        }

        switch(choice)
        {
        case 1:
            printf("Insert money: ");
            scanf("%d", &money);
            if(money >= 50)
                printf("Here is your chips!\nYour change: %d\n", money - 50);
            else
                printf("Not enough money!\n");
            break;

        case 2:
            printf("Insert money: ");
            scanf("%d", &money);
            if(money >= 70)
                printf("Here is your chocolate!\nYour change: %d\n", money - 70);
            else
                printf("Not enough money!\n");
            break;

        case 3:
            printf("Insert money: ");
            scanf("%d", &money);
            if(money >= 100)
                printf("Here is your juice!\nYour change: %d\n", money - 100);
            else
                printf("Not enough money!\n");
            break;

        default:
            printf("Invalid option!\n");
            break;
        }
    }

    return 0;
}
