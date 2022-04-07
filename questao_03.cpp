#include<stdio.h>

void inverter(char *a)
{
    if(*a)
    {
        inverter(a+1);
        printf("%c",*a);
    }
}

int main() 
{
    char a[] = "i like this program very much";
    inverter(a); // i ekil siht margorp yrev 
    return 0;
}
