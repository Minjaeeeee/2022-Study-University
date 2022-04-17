#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

int main(){

    FILE* fout;

    int score[2][3][3];       //2개반의 학생 3명 3과목 성적을 체크
    int total[2][3] = {0};   //o반의 o학생 과목 총합계 점수
    int total_age[2][3] = {0};  //o반의 o학생 과목 평균 점수
    int a, b, c, d, e,f;

    (fout = fopen("Class.txt", "wt")) == NULL;
 
    for (c = 0; c < 1; c++) //반을 입력받음 
	{   
        for (b = 0; b < 3; b++)
		{  
            printf("%d반 %d번 학생의 국어, 수학, 영어점수: ", c + 1, b + 1);
            scanf("%d %d %d", &score[c][b][0], &score[c][b][1], &score[c][b][2]);
        }
        printf("\n");
    }
    //b=1 일때 스코어 받고 b=2일때 스코어 받고 b=3일떄 스코어 받고 



    for (e = 0; e < 1; e++)//총합계 점수와 평균값 구하기 
	{     
        for (d = 0; d < 3; d++)
		{
			total[e][d] +=score[e][d][0]+score[e][d][1]+score[e][d][2];
            total_age[e][d] = (total[e][d])/3;
        }
    }


    for(int i=0; i<1; i++){
        for(int j=0; j<3; j++){
            printf("%d반의 %d학생 국,영,수\n총점: %d\n평균: %d\n\n", i+1, j+1, total[i][j], total_age[i][j]);
        }
    }

    for(int q=0; q<1; q++){
        for(int w=0; w<3; w++){
            fprintf(fout, "%d %d %d %d", q+1, w+1, total[q][w], total_age[q][w]);
        }
    }
        fclose(fout);
}
