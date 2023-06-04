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

    // should probably add a system that prevents the user from not entering in a number
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

    // the for loop that does it all, this baby calculates the quadratic formula which is x = (-b ± √(b² - 4ac)) / 2a
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

    // says that the x value of the vertex is -b / 2a
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

    // y intercept is stated to be a quadratic expression
    // the radicand is the inside of the radical of the quadratic equation, which is the square root of b squared minus four times a times c or √(b² - 4ac)
    yIntercept = (a * 0) + (b * 0) + c;
    radicand = (b * b) - (4 * a * c);
    if (radicand < 0)
    {
        // need to fix this, there is no printed output if the radicand is less than 0
        // fixed it, the radicand variable already had the square root function so nothing printed, but now something should
        printf("there are no x intercepts\n");
    }
    else if (radicand >= 0)
    {
        // does the quadratic equation with both plus and minus parts
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

    // gets input to choose which function
    printf("do you need x-y intercepts, a table, or the vertex? 1 for intercepts, 2 for the table of points, 3 for the vertex\n");
    scanf_s("%d", &choice);

    // if statement mess, switch statements wont work
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
    else if(choice != 3 && choice != 2 && choice != 1)
    {
        printf("that is not a valid number, please try again\n");
        main();
    }

    return 0;
}