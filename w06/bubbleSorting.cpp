#include <stdio.h>

void prchar(int b[], int n);
void bubbleSort(int b[], int n);

void prchar(int b[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%3d", b[i]);
    }
    printf("\n");
}


void bubbleSort(int b[], int n)
{
    int i, j;
    int temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int b[] = {34, 78, 12, 9, 87, 66, 88, 99, 56, 11};
    int n = sizeof(b) / sizeof(b[0]);
    printf("original: ");
    prchar(b, n);
    bubbleSort(b, n);
    printf("sorting : ");
    prchar(b, n);
}
