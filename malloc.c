#include<stdio.h>  
#include<stdlib.h>  
int main(){  
  float n,*ptr,sum=0;  
  int i;  
    printf("Enter number of elements: ");    
    scanf("%f",&n);    
    ptr=(float*)malloc(n*sizeof(float));     
    if(ptr==NULL)                         
    {    
        printf("Memory is not allocate:");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%f",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%f",sum);    
    free(ptr);     
return 0;  
}    