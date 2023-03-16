#include <stdio.h>


 int cube(int num)
{
    return (num * num * num);
    
}

int main()
{
    int num;
    int c;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = cube(num);

    printf("Cube of the given number is %d", c); 
    
    return 0;
}


