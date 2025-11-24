#include<stdio.h>
int main()
{
    int choice, money;
    printf("Welcome to our vending machine\n1.Chips(50)\n2.Chocolate(70)\n3.Juice(100)\n4.Cancel\n");

    printf("\nEnter your choice(1-4):");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf ("Insert money:");
        scanf("%d",&money);
        if(money>=50)
        {
            printf("Here is your chips!\n Your change: %d",money-50);
        }
        else
        {
            printf("Not enough money!");
        }
        break;
    case 2:
        printf ("Insert money:");
        scanf("%d",&money);
        if(money>=70)
        {
            printf("Here is your chocolate!\n Your change: %d",money-70);
        }
        else
        {
            printf("Not enough money!");
        }
        break;
    case 3:
        printf ("Insert money:");
        scanf("%d",&money);
        if(money>=100)
        {
            printf("Here is your juice!\n Your change: %d",money-100);
        }
        else
        {
            printf("Not enough money!");
        }
        break;
    case 4:
        printf("Order cancelled");
        break;
    default:
        printf("Invalid option!");

    }
}
