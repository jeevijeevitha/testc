#include <stdio.h>  
   
void biggest2() {  
    int a, b;  
    printf("\n Enter Two numbers to find biggest of two\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is Largest\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
   // return 0;  
}
