#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//10������ 2�����κ�ȯ  
int Trantwo(int n,int count)
{
   int arr[100];
    arr[count] = n%2; //1�������մϴ�.
    
    if(n<2) 
   {
       arr[count] = n;
       printf("====================================================\n");
       for(int i=count; i>=0; i--)
       {
        	printf("count=%d ��: %d \n",count,arr[i]);
        }
         printf("====================================================\n");
       return 0;
   }

   printf("n = %d arr= %d count=%d\n",n,arr[count],count);
   Trantwo(n/2,count+1); //2�� ���� ���� �����ش� 
}



int main()
{
   int ten;
   int count=0;
    printf("10������ �Է����ּ���!: ");
    scanf("%d",&ten);
    Trantwo(ten,count);
}
