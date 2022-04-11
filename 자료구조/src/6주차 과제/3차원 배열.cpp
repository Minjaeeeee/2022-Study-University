#include <stdio.h>


int main(void)
{
    int score[2][3][3];
    int sum[2][3][3]; 
    int i,j,k;
    float ave=0;
    
    printf("안녕하세요! 성적 합산과 평균 프로그램에 오신 것을 환영합니다!\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                printf("%d반의 %d학생의 국어,영어,수학점수를 입력해주세요: ",i+1,j+1);
                scanf("%d",&score[i][j][k]);
            }
            printf("\n");
        }
    }
    printf("======================================\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            sum[i][j][j]=score[i][j][0]+score[i][j][1]+score[i][j][2];
                ave = (float)sum[i][j][j]/3;
                printf("%d반의 %d학생의 합산:%d  평균:%f\n",i+1,j+1,sum[i][j][j],ave);
        }
        printf("\n");
    }
     printf("======================================\n");
    return 0;
    
}
