#include <math.h>
#include <stdio.h>

int parabolaTable() 
{
    float a;
    float b;
    float c;
    int x;
    int end;
    float y;


    printf("please enter a value for a\n");
    scanf_s("%f", &a);
    printf("please enter a value for b\n");
    scanf_s("%f", &b);
    printf("please enter a value for c\n");
    scanf_s("%f", &c);
    printf("please enter a value for the starting value\n");
    scanf_s("%d", &x);
    printf("please enter a value for the ending value\n");
    scanf_s("%d", &end);


    for (int i = x; i <= end; i++)
    {
        y = a * (i * i) + (b * i) + c;
        printf("point %d is (%d, %f)\n", i, i, y);
    }

    return 0;
}

int parabolaVertex()
{
    float a;
    float b;
    float c;
    float x;
    float y;


    printf("please enter a value for a\n");
    scanf_s("%f", &a);
    printf("please enter a value for b\n");
    scanf_s("%f", &b);
    printf("please enter a value for c\n");
    scanf_s("%f", &c);

    x = -b / (2 * a);
    y = a * (x * x) + (b * x) + c;
    printf("the vertex is (%f, %f)", x, y);

    return 0;
}

int parabolaIntercepts()
{
    float a;
    float b;
    float c;
    float yIntercept;
    float radicand;
    float xInterceptOne;
    float xInterceptTwo;


    printf("please enter a value for a\n");
    scanf_s("%f", &a);
    printf("please enter a value for b\n");
    scanf_s("%f", &b);
    printf("please enter a value for c\n");
    scanf_s("%f", &c);

    yIntercept = (a * 0) + (b * 0) + c;
    radicand = sqrtf((b * b) - (4 * a * c));
    if (radicand < 0)
    {
        // need to fix this, there is no printed output if the radicand is less than 0
        printf("there are no x intercepts");
    }
    else if (radicand >= 0)
    {
        xInterceptOne = (-b + sqrtf(radicand)) / 2 * a;
        xInterceptTwo = (-b - sqrtf(radicand)) / 2 * a;
        printf("x intercept one is %f\n", xInterceptOne);
        printf("x intercept two is %f\n", xInterceptTwo);
    }
    printf("y intercept is %f", yIntercept);

    return 0;
}

int main()
{
    int choice;

    printf("do you need x-y intercepts, a table, or the vertex? 1 for intercepts, 2 for the table of points, 3 for the vertex\n");
    scanf_s("%d", &choice);
    if (choice == 1)
    {
        printf("you have chosen x-y intercepts\n");
        parabolaIntercepts();
    }
    else if(choice == 2)
    {
        printf("you have chosen the table of points\n");
        parabolaTable();
    }
    else if(choice == 3)
    {
        printf("you have chosen the vertex\n");
        parabolaVertex();
    }

    return 0;
}