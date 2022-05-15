#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Trantwo(int ten)
{ 
    int div = 0;
    int na = 0;
    int arr[100];
    int count=1;
    arr[0] = ten%2;
    
    while(ten>0)
    {
        ten = ten/2;
        na =  ten%2;
        arr[count] = na;
        
        if(ten<1)
        {
            break; 
        } 
        
        printf("count:%d , na: %d , ten: %d \n",count,na,ten);
        count++;
    }
    
     
    printf("%d\n",count);
    printf("===============================\n");
    printf("\n");
    printf("\n"); 
    for(int i=count-1; i>=0; i--)
    { 
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("===============================\n");
}



int main()
{
   int ten,two,sixteen;
    printf("10Áø¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä!: ");
    scanf("%d",&ten);
    Trantwo(ten);
}
