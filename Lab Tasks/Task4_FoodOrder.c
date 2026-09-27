#include <stdio.h>

int main() 
{
    int restaurantopen;
    int itemavailable;
    int balancesufficient;

    printf("Is the restaurant open? (1 = Yes, 0 = No): ");
    scanf("%d", &restaurantopen);

    printf("Is the item available? (1 = Yes, 0 = No): ");
    scanf("%d", &itemavailable);

    printf("Is the balance sufficient? (1 = Yes, 0 = No): ");
    scanf("%d", &balancesufficient);

    if (restaurantopen == 1) 
	{
        if (itemavailable == 1) 
		{
            if (balancesufficient == 1) 
			{
                printf("Order placed successfully.\n");
            }
            else 
			{
                printf("Insufficient balance.\n");
            }
        }
        else 
		{
            printf("Selected item is not available.\n");
        }
    }
    else 
	{
        printf("Restaurant is closed.\n");
    }

    return 0;
}
