#include <stdio.h>
#include <stdlib.h>
int main()a
{
    int *arr, sz;
    int i, j;
    int c = 0;
    scanf("%d", &sz);
    arr = (int *)malloc(sz * sizeof(int));
    for (i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                c = c + 1;
            }
        }
        if (c == 2)
        {
            printf("%d", arr[i]);
        }
        }
    return 0;
}
