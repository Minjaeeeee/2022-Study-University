#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//10진수를 2진수로변환  
int Trantwo(int n,int count)
{
   int arr[100];
    arr[count] = n%2; //1씩증가합니다.
    
    if(n<2) 
   {
       arr[count] = n;
       printf("====================================================\n");
       for(int i=count; i>=0; i--)
       {
        	printf("count=%d 답: %d \n",count,arr[i]);
        }
         printf("====================================================\n");
       return 0;
   }

   printf("n = %d arr= %d count=%d\n",n,arr[count],count);
   Trantwo(n/2,count+1); //2로 나눈 값을 보내준다 
}



int main()
{
   int ten;
   int count=0;
    printf("10진수를 입력해주세요!: ");
    scanf("%d",&ten);
    Trantwo(ten,count);
}
