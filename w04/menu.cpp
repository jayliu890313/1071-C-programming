#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int choice1;
    int length;    //長方形的長
    int width;     //長方形的寬
    int stair;     //三角形層數
    int i, j;
    while(1)
    {
        printf("1.Rectangle\n");
        printf("2.Vertical Triangle\n");
        printf("3.exit\n");
        scanf("%d", &choice);
        if(choice != 3)
        {
            switch(choice)
            {
                case 1:
                    printf("please enter the length and width!\n");
                    printf("Enter =>");
                    scanf("%d %d", &length, &width);
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

                    break;
                case 2:
                    while(1)
                    {
                        printf("Height and Type\n");
                        printf("Enter =>");
                        scanf("%d %d", &stair,&choice1);
                        switch(choice1){
                            case 1:
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
                                break;
                            case 2:
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
                                break;
                            case 3:
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
                                break;
                            case 4:
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
                                break;
                            }
                        break;
                    }
            }
        }else{
            break;
        }
    }
    return 0;
}
