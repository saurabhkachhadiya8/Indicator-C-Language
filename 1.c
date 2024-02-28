#include <stdio.h>
main() {
	
    char a[50];
    int length,*p;
    
    printf("Enter any string : ");
    gets(a);
    
    length=strlen(a);
    p=length;
    
    printf("\nThe length of a string is : %d",p);
    
}
