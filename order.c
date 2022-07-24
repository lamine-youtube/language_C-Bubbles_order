#include <stdio.h>

void bubbles_order(int *table, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
            if (table[j] > table[j + 1])
            {
                int temp = table[j];
                table[j] = table[j + 1];
                table[j + 1] = temp;
            }
    }
}

int main(int argc, char const *argv[])
{
    printf("\n\n");
    // --------------------------------------------- //

    printf("Enter table length: ");
    int length;
    scanf("%d", &length);

    int table[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &table[i]);
    }

    // before order //
    printf("\nYour table before ordering: \n");
    printf("[ ");
    for (int i = 0; i < length; i++)
        printf("%d, ", table[i]);
    printf(" ]\n");
    //  //

    // ordering //
    bubbles_order(table, length);
    //  //

    // after order //
    printf("\nYour table after ordering: \n");
    printf("[ ");
    for (int i = 0; i < length; i++)
        printf("%d, ", table[i]);
    printf(" ]\n");
    //  //

    printf("\nMax value: %d", table[length - 1]);
    printf("\nMin value: %d", table[0]);

    // --------------------------------------------- //
    printf("\n\n");
    return 0;
}
