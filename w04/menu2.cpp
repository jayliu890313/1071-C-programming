#include <stdio.h>
#include <stdlib.h>
void drawRect(int length, int width, int filled);
void drawVerTri(int stair, int choice2, int filled);
void prchar(char c, int n);
void isoTri(int stair, int choice2, int filled);

void prchar(char c, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}
void drawRect(int length, int width, int filled)
{
    int i, j;
    if(filled)
    {
        for(i = 0; i < length; i++)
        {
            for(j = 0; j < width; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }else{
        for(i = 0; i < length; i++)
        {
            for(j = 0; j < width; j++)
            {
                if(i == 0 || i == length - 1 || j == 0 || j == width - 1)
                {
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

}

void drawVerTri(int stair, int choice2, int filled)
{
    int i, j;
    while(1)
    {
        switch(choice2){
            case 1:
                if(filled)
                {
                    for(i = 0; i < stair; i++)
                    {
                        for(j = 0; j < i + 1 ; j++)
                        {
                            printf("*");

                        }
                        printf("\n");
                    }
                }else{
                    for(i = 0; i < stair; i++)
                    {
                        for(j = 0; j < stair ; j++)
                        {
                            if(j == 0 || i == j || i == stair - 1)
                            {
                                printf("*");
                            }else{
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                }
                break;
            case 2:
                if(filled)
                {
                    for(i = 0; i < stair; i++)
                    {

                        for(j = stair; j > i; j--)
                        {
                            printf(" ");
                        }
                        for(j = 0; j <= i; j++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                }else{
                    for(i = 0; i < stair; i++)
                    {
                        for(j = 0; j < stair; j++)
                        {
                            if(i == stair - 1 || j == stair - 1 || i + j == stair - 1)
                            {
                                printf("*");
                            }else{
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                }
                break;
            case 3:
                if(filled)
                {
                    for(i = stair; i > 0; i--)
                    {
                        prchar('*', i);
                        printf("\n");
                    }
                }else{
                    for(i = 0; i < stair; i++)
                    {
                        for(j = 0; j < stair - i; j++)
                        {
                            if(i == 0 || i == stair - 1 || j == 0 || j == stair - i -1)
                            {
                                printf("*");
                            }else{
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                }
                break;
            case 4:
                if(filled)
                {
                    for(i = 0; i < stair; i++)
                    {
                        prchar(' ', i);
                        prchar('*', stair - i);
                        printf("\n");
                    }
                }else{
                    for(i = 0; i < stair; i++)
                    {
                        for(j = 0; j < stair; j++)
                        {
                            if(i == 0 || i == j || j == stair - 1)
                            {
                                printf("*");
                            }else{
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                }
                break;
            }
        break;
    }
}

void isoTri(int stair, int choice2, int filled)
{
   int i, j;
   switch(choice2)
   {
    case 1:
       if(filled)
       {
            for(i = 0; i < stair; i++)
            {
                for(j = 0; j < stair - i; j++)
                {
                    printf(" ");
                }
                for(j = 0; j < 2 * (i + 1) - 1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
       }else{
            for(i = 0; i < stair; i++)
            {
                for(j = 0; j < 2*stair-1; j++)
                {
                    if(i + j == stair - 1 || i == stair - 1 || j - i == stair-1)
                    {
                        printf("*");
                    }else{
                        printf(" ");
                    }
                }
                printf("\n");
            }
       }
       break;
    case 2:
       if(filled)
       {
            for(i = stair; i > 0; i--)
            {
                for(j = 0; j < stair - i; j++)
                {
                    printf(" ");
                }
                for(j = 2 * i - 1; j > 0; j--)
                {
                    printf("*");
                }
                printf("\n");
            }
       }else{
            for(i = stair; i > 0; i--)
            {
                for(j = 2 * stair - 1; j > 0; j--)
                {
                    if(j - i == stair - 1 || i + j == stair + 1 || i == stair)
                    {
                        printf("*");
                    }else{
                        printf(" ");
                    }

                }
                printf("\n");
            }
       }
       break;
    }
}

int main()
{
    int choice;
    int choice2;
    int length;    //長方形的長
    int width;     //長方形的寬
    int stair;     //三角形層數
    int filled;
    int i, j;
    while(1)
    {
        printf("1.Rectangle\n");
        printf("2.Vertical Triangle\n");
        printf("3.Isosceles Triangle\n");
        printf("4.exit\n");
        scanf("%d", &choice);
        if(choice != 4)
        {
            switch(choice)
            {
                case 1:
                    printf("please enter the length and width and filled(0 or 1)!\n");
                    printf("Enter =>");
                    scanf("%d %d %d", &length, &width, &filled);
                    drawRect(length, width, filled);
                    break;
                case 2:
                    printf("floor, type, filled\n");
                    printf("Enter =>");
                    scanf("%d %d %d", &stair, &choice2, &filled);
                    drawVerTri(stair, choice2, filled);
                    break;
                case 3:
                    printf("height, type, filled\n");
                    printf("Enter =>");
                    scanf("%d %d %d", &stair, &choice2, &filled);
                    isoTri(stair, choice2, filled);
                    break;
            }
        }else{
            break;
        }
    }
    return 0;
}
