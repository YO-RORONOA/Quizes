#include <stdio.h>

int main(void)
{
    int age;
    printf("are you eligible to vote?\n");
    printf("enter your age to check: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("you are eligible to vote\n");
        return 0;
    }
    else if(age <= 18 && age >= 0)
    {
        printf("you are not eligible to vote\n");
        return 0;
    }
    else
    printf("error!!!!!!!!\n");
    
}