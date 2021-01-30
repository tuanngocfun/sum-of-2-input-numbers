Way1:Function with arguments but no return value
#include <stdio.h>

void sum(int , int);

int main()
{
    int a, b;
    printf("Please input 2 numbers: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}

void sum(int a, int b)
{
    printf("The sum of 2 input number is: %d", a + b);
}

Way 2:Function with no argument and no return value 
#include <stdio.h>

void sum();

void main()
{
    sum();
}

void sum()
{
    int a, b;

    printf("Please enter 2 input number: ");
    scanf("%d %d", &a, &b);
    printf("The 2 input number is: %d", a + b);
}

Way 3:Function with no arguments but returns a value
#include <stdio.h>

int sum();

int main()
{
    int s_num;
    s_num = sum();

    printf("The 2 input numbers are: %d", s_num);
    return 0;
}

int sum()
{
    int a, b, s;

    printf("Please enter 2 input numbers: ");
    scanf("%d %d", &a, &b);
    s = a + b;
    return s;
}

Way 4:Function with arguments and return value
#include <stdio.h>

int sum(int ,int );

int main()
{
    int a, b;

    printf("Please enter 2 input numbers: ");
    scanf("%d %d", &a, &b);
    int num = sum(a, b);
    printf("The sum of 2 input numbers are: %d", num);
    return 0;
}

int sum(int a, int b)
{
    int s = a + b;
    return s;
}
