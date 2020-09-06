#include <stdio.h>

#define P1WIN 1
#define P2WIN 2
#define P3WIN 3
#define P4WIN 4

int whoWon(int a, int b, int c, int d)
{
    int output;
    if (a > b && a > c && a > d)
    {
        output = P1WIN;
    }
    else if (b > a && b > c && b > d)
    {
        output = P2WIN;
    }
    else if (c > a && c > b && c > d)
    {
        output = P3WIN;
    }
    else if (d > a && d > b && d > c)
    {
        output = P4WIN;
    }
    return output;
}

int main()
{
    printf("How many num of parties: (less than 4): ");
    int nop;

    scanf("%d", &nop);

    char p1[80] = "--";
    char p2[80] = "--";
    char p3[80] = "--";
    char p4[80] = "--";
    

    if (nop == 1)
    {
        printf("name: party 1: ");
        scanf(" %[^\n]", p1);
    }
    else if (nop == 2)
    {
        printf("name: party 1: ");
        scanf(" %[^\n]", p1);

        printf("name: party 2: ");
        scanf(" %[^\n]", p2);
    }
    else if (nop == 3)
    {
        printf("name: party 1: ");
        scanf(" %[^\n]", p1);

        printf("name: party 2: ");
        scanf(" %[^\n]", p2);

        printf("name: party 3: ");
        scanf(" %[^\n]", p3);
    }
    else if (nop == 4)
    {
        printf("name: party 1: ");
        scanf(" %[^\n]", p1);

        printf("name: party 2: ");
        scanf(" %[^\n]", p2);

        printf("name: party 3: ");
        scanf(" %[^\n]", p3);

        printf("name: party 4: ");
        scanf(" %[^\n]", p4);
    }

    printf("Enter the number of citizens: ");
    int citi;
    scanf("%d", &citi);

    int vote[citi];
    int i;

    for (i = 0; i < citi; i++)
    {
        printf("citizen %d votes for whom(1, 2, 3, 4): ", i + 1);
        scanf("%d", &vote[i]);
    }

    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;

    for (i = 0; i < citi; i++)
    {
        if (vote[i] == 1 && i == 0)
        {
            v1 = 1;
        }
        else if (vote[i] == 1 && i >= 1)
        {
            v1 = v1 + 1;
        }
        else if (vote[i] == 2 && i == 0)
        {
            v2 = 1;
        }
        else if (vote[i] == 2 && i >= 1)
        {
            v2 = v2 + 1;
        }
        else if (vote[i] == 3 && i == 0)
        {
            v3 = 1;
        }
        else if (vote[i] == 3 && i >= 1)
        {
            v3 = v3 + 1;
        }
        else if (vote[i] == 4 && i == 0)
        {
            v4 = 1;
        }
        else if (vote[i] == 4 && i >= 1)
        {
            v4 = v4 + 1;
        }
    }

    printf("%s = %d\n", p1, v1);
    printf("%s = %d\n", p2, v2);
    printf("%s = %d\n", p3, v3);
    printf("%s = %d\n", p4, v4);

    int k;

    k = whoWon(v1, v2, v3, v4);

    if (k == P1WIN)
    {
        printf("party %s won this Election :)\n", p1);
    }
    else if (k == P2WIN)
    {
        printf("party %s won this Election :)\n", p2);
    }
    else if (k == P3WIN)
    {
        printf("party %s won this Election :)\n", p3);
    }
    else if (k == P4WIN)
    {
        printf("party %s won this Election :)\n", p4);
    }
    else
    {
        printf("the Election was a draw\n");
    }

    return 0;
}
