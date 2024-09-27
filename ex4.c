#include <stdio.h>

int main(void)
{
    int i;
    int arr[5];
    
    printf("Enter 5 elements:\n");
    
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    int min = arr[0];
    i = 1;
   while (i < 5) 
   {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min =arr[i];
        }
        i++;
       
   }
    printf("The largest element is %d\n", max);
    printf("\nThe smallest element is %d\n", min);
    return 0;
}