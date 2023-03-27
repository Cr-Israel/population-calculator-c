#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 0;
    int first_size = 0;
    int end_size = 0;
    int years = 0;

    printf("Start size: ");
    first_size = get_int("");

    while (first_size < 9)
    {
        printf("Positive Integer: ");
        first_size = get_int("");
    }
    
    printf("End size: ");
    end_size = get_int("");

    while (end_size < first_size)
    {
        printf("Positive Integer: ");
        end_size = get_int("");
    }
    
    n = first_size;
    while (n < end_size)
    {
        n = n + (n / 3) - (n / 4);
        years++;
    }
    
    printf("Years: %i\n", years);
}