#include <stdio.h>

int main() {
    int appointment;
    int doctoravailable;
    int registrationcompleted;

    printf("Do you have an appointment? (1 = Yes, 0 = No): ");
    scanf("%d", &appointment);

    printf("Is the doctor available? (1 = Yes, 0 = No): ");
    scanf("%d", &doctoravailable);

    printf("Is registration completed? (1 = Yes, 0 = No): ");
    scanf("%d", &registrationcompleted);

    if (appointment == 1)
	{
        if (doctoravailable == 1) 
		{
            if (registrationcompleted == 1) 
			{
                printf("You can meet the doctor.\n");
            }
            else
			{
                printf("Registration is not completed.\n");
            }
        }
        else 
		{
            printf("Doctor is not available.\n");
        }
    }
    else 
	{
        printf("You do not have an appointment.\n");
    }

    return 0;
}
