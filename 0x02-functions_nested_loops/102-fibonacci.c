#include <stdio.h>

int main()
{
    for (int i = 0; i < 50; i++)
    {
        printf("(%2i) %d\n", i, i % 5);
    }
}
