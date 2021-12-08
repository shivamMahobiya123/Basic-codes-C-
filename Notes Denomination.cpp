
#include <stdio.h>
#define SIZE 6

int main() 
{    
    int amount, notes;   

    // currency denominations
    int denominations[SIZE] = {50, 20, 5, 1};

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("\n");

    for (int i = 0; i < SIZE; i++) 
    {
        notes = amount / denominations[i];

        if (notes)
        {
            amount = amount % denominations[i]; // remaining money

            printf("Number of %dRs notes= %d \n",denominations[i], notes);
        }                
    }

    return 0;
}
