
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

//옷 정보 구조체
typedef struct _CLOTHES {
   char brand[30];
   char type[30];
   char size[30];
    char color[30];
};CTS

//고객 정보 구조체
typedef struct _customer {
   char name[20];
   char size[20];
   char phone[15];
};CTM

//함수
void new_ctm();
int search_ctm();
void new_add();
int search();
void edit();
void del();
void view_cts();           //옷정보 전체보기
void view_ctm();           //고객정보 전체보기 추가한것
void end();
void input_cts(); //호출했을 떄 정보를 전부 구조체에 담는 함수
void input_ctm();
void SetTextColor(int background, int text) // UI
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (background<<4) | text);
   //배경색인 background를 4비트 앞으로 보내고, text와 더하여 적용
}

//구조체 배열 전역변수 선언
CTS cts_info[200];
int cts_count=0;        //옷 정보 카운팅
CTM ctm_info[200];
int ctm_count=0;        //고객 정보 카운팅

//메인화면
int main()
{
   int i, chooes=1, count;
   input_cts();
   input_ctm();

   SetTextColor(15, 0); //15: 흰색, 0: 검은색

   while(chooes!=9)
   {
      system("cls"); //화면지우기
      printf("========================\n");
      printf("   옷 관리 프로그램   \n");
      printf("========================\n");
      printf("  1. 신규 고객 등록 \n");
      printf("  2. 고객 정보 조회 \n");
      printf("  3. 상품 추가 \n");
      printf("  4. 상품 검색 \n");
      printf("  5. 상품 수정 \n");
      printf("  6. 상품 삭제 \n");
      printf("  7. 전체 상품 보기 \n");
        printf("  8. 전체 고객 보기 \n");
      printf("  9. 프로그램 종료 \n");
      printf("========================\n");
      printf("  원하는 메뉴를 선택하세요: \n");

      scanf("%d", &chooes);
        
        switch(chooes)
      {
      case 1:
         new_ctm();
         break;
      case 2:
         idx=search_ctm();
         if(count==1)
            printf("%s   %s   %s\n", ctm_info[count].name, ctm_info[count].size, ctm_info[count].phone);
         else
         {
            printf("찾으시는 정보가 없습니다.\n");
         }
         break;
      case 3:
         new_add();
         break;
      case 4:
         idx=search();
         if(count==-1)
            printf("찾으시는 정보가 없습니다.\n");
         else
         {
            printf("%s   %s   %s\n",cts_info[count].brand, cts_info[count].type, cts_info[count].size, cts_info[count].color);
         }
         break;
      case 5:
         edit();
         break;
      case 6:
         del();
         break;
      case 7:
         view_cts();
         break;
      case 8:
         view_ctm();
         break;
        case 9:
         end();
         break;
      default:
         printf("\n잘못 선택하셨습니다.\n");
         break;
      }
      printf("\n작업을 완료하였습니다.\n새로운 메뉴를 선택하려면 Enter를 눌러주세요.\n");
      getch(); // 항목 입력 받기 대기 -> 엔터치면 새롭게 항복 선택 가능
   }
   return 0;
}

//옷 정보 파일에서 입력 받기 
void input_cts()
 {
   FILE* fp = fopen("D:\\temp\\cts_info.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;

   //신발 정보 입력 
   while(fscanf(fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","단위로 잘라내는 strtok함수  
      while(ptr!=NULL)
      {
         word_cnt++;
         switch(word_cnt)
         {
         case 1: //char brand 
            strcpy(cts_info[s_count].brand, ptr);
            break;
         case 2: //char type
            strcpy(cts_info[s_count].type, ptr);
            break;
         case 3: //char size
            strcpy(cts_info[s_count].size, ptr);
            break;
            case 4: //char color
            strcpy(cts_info[s_count].color, ptr);
            break;
         }
         ptr=strtok(NULL,",");
      }
      cts_count++;
   }
   fclose(fp); 
}

//신규 고객 정보 등록 
void new_ctm()
{
   FILE* c_fp = fopen("D:\\temp\\ctm_info.txt", "a");

   printf("\n");
   printf("고객 이름: ");
   scanf("%s", &ctm_info[ctm_count].name);
   printf("고객 사이즈: ");
   scanf("%s", &ctm_info[ctm_count].size);
   printf("고객 전화번호: ");
   scanf("%s", &ctm_info[ctm_count].phone);
   
   fprintf(c_fp, "\n%s,%s,%s\n", ctm_info[ctm_count].name, ctm_info[ctm_count].size,
                  ctm_info[ctm_count].phone);
   ctm_count++;
   fclose(c_fp);
}

//전화번호로 고객 정보 조회 
int search_ctm()
{
   int i;
   char name[50];
   printf("\n이름: ");
   scanf("%s", &name);
   for(i=0; i<c_idx; i++)
   {
      if(strcmp(name, ctm_info[i].name)==0)  //고객의 유무에 따라 반환하기 위한 형태
         return i;      
   }
   return -1;
} 

//신상품 입력 받아 파일에 저장 
void new_add()
{
   FILE* fp = fopen("D:\\temp\\cts_info.txt", "a");

   //구조체 배열에 신상품 정보를 입력 받음. 
   printf("\n");
   printf("브랜드: ");
   scanf("%s", &cts_info[cts_count].brand);
   printf("옷 종류: ");
   scanf("%s", &cts_info[cts_count].type);
   printf("사이즈: ");
   scanf("%s", &cts_info[cts_count].size);
    printf("색상: ");
   scanf("%s", &cts_info[cts_count].color);

   fprintf(fp, "%s,%s,%s\n", cts_info[cts_count].brand, cts_info[cts_count].type,
       cts_info[cts_count].size, ctm_info[ctm_count].phone);                  //이쪽 코드 다시보기
   cts_count++;
   fclose(fp);
}

//모델명으로 검색하기 
int search()
{
   int i;
   char name[30];
   printf("\n옷 종류: ");
   scanf("%s", &name);
   for(i=0; i<cts_count; i++)
   {
      if(strcmp(name, cts_info[i].type)==0) //strcmp함수 사용 -> 입력한 name과 구조체 배열의 브랜드가 일치하면 0을 반환. 
         return i; //0이 되면 true가 되어 if문에 들어감. 
   }
   return -1; //for문 돌아가도 정보를 못 찾게 될 경우 
}

//상품 수정 
 void edit()
{
   int i, j, k;
   char name[20];
   char info[20];
   printf("\n브랜드를 입력해 주세요: "); 
   scanf("%s", name);
   printf("\n");
   
   for(i=0; i<cts_idx; i++)
   {
      if(strcmp(name, cts_info[i].brand)==0)
      {
         printf("브랜드: %s 모델명: %s 사이즈: %s\n", cts_info[i].brand,
                   cts_info[i].type, cts_info[i].size, cts_info[i].color);
         printf("\n");
         printf("1.Brand 2.type 3.Size 4.color\n");
         printf("번호를 선택하세요: ");
         scanf("%d", &j);
         if(j==1)
         {
            printf("수정할 브랜드: ");
            scanf("%s", cts_info[i].brand); 
         } 
         else if(j==2)
         {
            printf("수정할 옷 종류: ");
            scanf("%s", cts_info[i].type); 
         } 
         else if(j==3)
         {
            printf("수정할 사이즈: ");
            scanf("%s", cts_info[i].size); 
         }
            else if(j==4)
         {
            printf("수정할 색상: ");
            scanf("%s", cts_info[i].color); 
         }
         printf("\n");
      }
   }
}

//상품 삭제 
void del()
 {   
   FILE* fp = fopen("D:\\temp\\cts_info.txt", "r+");

    int i=0;
   char name[30];
   printf("\n옷 종류: ");
   scanf("%s", &name);   

    // 입력된 옷 종류 검색하여 해당 옷 종류 삭제 
    // 같은 옷 종류의 옷이 여러 사이즈 존재할 때 전부 삭제 
    for(i=0; i<cts_count; i++)
    {
        //삭제될 옷 정보 출력
        if(strcmp(name, cts_info[i].type)==0)
        {
           printf("\n삭제 옷 종류\n브랜드: %s 옷 종류명: %s 사이즈: %s 색상 : %s\n",cts_info[i].brand, cts_info[i].type, cts_info[i].size, cts_info[i].color);
           //옷 정보 삭제 
           memset(&cts_info[i], 0x00, sizeof(CLOTHES));
         fprintf(fp, "%s %s %s %s\n", cts_info[i].brand, cts_info[i].type, cts_info[i].size, cts_info[i].color);
         fclose(fp);
        }
    }
}

//전체 상품 보기 
void view_cts()
{
   int i;
   printf("\n          brand          model           size           color\n");
   printf("------------------------------------------------\n");
   for(i=0; i<cts_count; i++)
   {
      printf("%15s%15s%15s%15s\n", cts_info[i].brand,
                   cts_info[i].model, cts_info[i].size, cts_info[i].color);
   }
}

//전체 고객 보기 
void view_ctm()
{
   int i;
   printf("\n          name          size           phone\n");
   printf("------------------------------------------------\n");
   for(i=0; i<cts_count; i++)
   {
      printf("%15s%15s%15s\n", ctm_info[i].name,
                   ctm_info[i].size, ctm_info[i].phone);
   }
}

//프로그램 종료
void end()
{
   printf("\n프로그램을 종료합니다\n");
   exit(1);
}