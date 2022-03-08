#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void new_customer();
int search_customer();
void new_add();
int search_type();
int search_brand();
void edit();
void del();
void view_clothes();
void view_customer();
void end();
void input_clothes(); //호출했을 떄 정보를 전부 구조체에 담는 함수
void input_customer();
void SetTextColor(int background, int text) // UI
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (background<<4) | text);
   //배경색인 background를 4비트 앞으로 보내고, text와 더하여 적용
}



//옷 정보 구조체
typedef struct _CLOTHES {  
   char type[30];
   char size[30];
   char color[30];
}CLOTHES;

//고객 정보 구조체
typedef struct _customer {
   char name[20];
   char size[20];
   char phone[15];
}CUSTOMER;
//함수



//구조체 배열 전역변수 선언
CLOTHES clothes_info[200];
int s_idx=0;        //옷정보 카운팅
CUSTOMER customer_info[200];
int c_idx=0;        //고객정보 카운팅


//메인화면
int main()
{
   int i, sel=1, idx;
   input_clothes();
   input_customer();

   SetTextColor(15, 0); //15: 흰색, 0: 검은색
   


   while(sel!=8)
   {
      system("cls"); //화면지우기
      printf("==========================\n");
      printf("|    옷 관리 프로그램    |\n");
      printf("==========================\n");
      printf("|  1. 신규 고객 등록     |\n");
      printf("|  2. 고객 정보 조회     |\n");
      printf("|  3. 상품 추가          |\n");
      printf("|  4. 상품 옷 종류로 검색|\n");
      printf("|  5. 상품 브랜드로 검색 |\n");
      printf("|  6. 상품 수정          |\n");
      printf("|  7. 상품 삭제          |\n");
      printf("|  8. 전체 상품 보기     |\n");
      printf("|  9. 전체 고객 보기     |\n");
      printf("|  10. 프로그램 종료     |\n");
      printf("==========================\n");
      printf("  원하는 메뉴를 선택하세요: ");

      scanf("%d", &sel) ;

      switch(sel)
      {
      case 1:
         new_customer();
         break;
      case 2:
         idx=search_customer();
         if(idx==1)
            printf("찾으시는 정보가 없습니다.\n");
         else
         {
            printf("%s   %s   %s\n", customer_info[idx].name, customer_info[idx].size, customer_info[idx].phone);
         }
         break;
      case 3:
         new_add();
         break;
      case 4:
         idx=search_type();
         if(idx==-1)
            printf("찾으시는 정보가 없습니다.\n");
         else
         {
            printf("%s   %s   %s  %s\n",clothes_info[idx].brand, clothes_info[idx].type, clothes_info[idx].size, clothes_info[idx].color);
         }
         break;
      case 5:
         idx=search_brand();
         if(idx==-1)
            printf("찾으시는 정보가 없습니다.\n");
         else
         {
            printf("%s   %s   %s  %s\n",clothes_info[idx].brand, clothes_info[idx].type, clothes_info[idx].size, clothes_info[idx].color);
         }
         break;
      case 6:
         edit();
         break;
      case 7:
         del();
         break;
      case 8:
         view_clothes();
         break;
        case 9:
         view_customer();
         break;
      case 10:
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
void input_clothes()
 {
   FILE* fp = fopen("C:\팀프로젝트\clothes_info.txt", "r"); 
   char line[150];
   char* ptr;
   int word_cnt;

   //옷 정보 입력 
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
            strcpy(clothes_info[s_idx].brand, ptr);
            break;
         case 2: //char type
            strcpy(clothes_info[s_idx].type, ptr);
            break;
         case 3: //char size
            strcpy(clothes_info[s_idx].size, ptr);
            break;
         case 4: //char color
            strcpy(clothes_info[s_idx].color, ptr);
            break;
         }
         ptr=strtok(NULL,",");
      }
      s_idx++;
   }
   fclose(fp); 
}



//고객 정보 파일에서 입력 받기 
void input_customer()
 {
   FILE* c_fp = fopen("C:\팀프로젝트\customer_info.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;

   //고객 정보 입력 
   while(fscanf(c_fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","단위로 잘라내는 strtok함수  
      while(ptr!=NULL)
      {
         word_cnt++;
         switch(word_cnt)
         {
         case 1: //char name
            strcpy(customer_info[c_idx].name, ptr);
            break;
         case 2: //char size
            strcpy(customer_info[c_idx].size, ptr);
            break;
         case 3: //char phone
            strcpy(customer_info[c_idx].phone, ptr);
            break;
         }
         ptr=strtok(NULL,",");
      }
      c_idx++;
   }
   fclose(c_fp); 
}

//신규 고객 정보 등록 
void new_customer()
{
   FILE* c_fp = fopen("C:\팀프로젝트\customer_info.txt", "a");

   printf("\n");
   printf("고객 이름: ");
   scanf("%s", &customer_info[c_idx].name);
   printf("고객 사이즈: ");
   scanf("%s", &customer_info[c_idx].size);
   printf("고객 전화번호: ");
   scanf("%s", &customer_info[c_idx].phone);
   
   fprintf(c_fp, "\n%s,%s,%s\n", customer_info[c_idx].name, customer_info[c_idx].size,
                  customer_info[c_idx].phone);
   c_idx++;
   fclose(c_fp);
}

//이름으로 고객 정보 조회 
int search_customer()
{
   int i;
   char name[20];
   printf("\n이름: ");
   scanf("%s", &name);
   for(i=0; i<c_idx; i++)
   {
      if(strcmp(name, customer_info[i].name)==0)  //고객의 유무에 따라 반환하기 위한 형태
         return i;      
   }
   return -1;
} 

//신상품 입력 받아 파일에 저장 
void new_add()
{
   FILE* fp = fopen("C:\팀프로젝트\clothes_info.txt", "a");

   //구조체 배열에 신상품 정보를 입력 받음. 
   printf("\n");
   printf("브랜드: ");
   scanf("%s", &clothes_info[s_idx].brand);
   printf("옷 종류: ");
   scanf("%s", &clothes_info[s_idx].type);
   printf("사이즈: ");
   scanf("%s", &clothes_info[s_idx].size);
   printf("색상: ");
   scanf("%s", &clothes_info[s_idx].color);

   fprintf(fp, "%s,%s,%s,%s \n", clothes_info[s_idx].brand, clothes_info[s_idx].type,
       clothes_info[s_idx].size,clothes_info[s_idx].color );
   s_idx++;
   fclose(fp);
}



//옷 종류로 검색하기 
int search_type()
{
   int i;
   char name[30];
   printf("\n옷 종류: ");
   scanf("%s", &name);
   for(i=0; i<s_idx; i++)
   {
      if(strcmp(name, clothes_info[i].type)==0) //strcmp함수 사용 -> 입력한 name과 구조체 배열의 옷 종류가 일치하면 0을 반환. 
         return i; //0이 되면 true가 되어 if문에 들어감. 
   }
   return -1; //for문 돌아가도 정보를 못 찾게 될 경우 
}


//옷 브랜드로 검색하기 
int search_brand()
{
   int i;
   char name[30];
   printf("\n브랜드명: ");
   scanf("%s", &name);
   for(i=0; i<s_idx; i++)
   {
      if(strcmp(name, clothes_info[i].brand)==0) //strcmp함수 사용 -> 입력한 name과 구조체 배열의 브랜드가 일치하면 0을 반환. 
         return i; //0이 되면 true가 되어 if문에 들어감. 
   }
   return -1; //for문 돌아가도 정보를 못 찾게 될 경우 
}



//품절된 상품 수정 
 void edit()
{
   int i, j, k;
   char name[20];
   char info[20];
   printf("\n브랜드를 입력해 주세요: "); 
   scanf("%s", name);
   printf("\n");
   
   for(i=0; i<s_idx; i++)
   {
      if(strcmp(name, clothes_info[i].brand)==0)
      {
         printf("브랜드: %s 옷 종류: %s 사이즈: %s 색상 : %s\n", clothes_info[i].brand,
                   clothes_info[i].type, clothes_info[i].size, clothes_info[i].color);
         printf("\n");
         printf("1.Brand 2.type 3.Size 4 color\n");
         printf("번호를 선택하세요: ");
         scanf("%d", &j);
         
         if(j==1)
         {
            printf("수정할 브랜드: ");
            scanf("%s", clothes_info[i].brand); 
         } 

         else if(j==2)
         {
            printf("수정할 옷 종류: ");
            scanf("%s", clothes_info[i].type); 
         } 

         else if(j==3)
         {
            printf("수정할 사이즈: ");
            scanf("%s", clothes_info[i].size); 
         }

         else if(j==4)
         {
            printf("수정할 색상: ");
            scanf("%s", clothes_info[i].color); 
         }
         printf("\n");
      }
   }
}


 //단종된 상품 삭제 
void del()
 {   
   FILE* fp = fopen("C:\팀프로젝트\clothes_info.txt", "r+");

    int i=0;
   char name[30];
   printf("\n옷 종류: ");
   scanf("%s", &name);   

    // 입력된 옷 종류로 검색하여 해당 옷 종류 삭제 
    // 같은 옷 종류의 옷이 여러 사이즈 존재할 때 전부 삭제 
    for(i=0; i<s_idx; i++)
    {
        //삭제될 옷 정보 출력
        if(strcmp(name, clothes_info[i].type)==0)
        {
           printf("\n삭제할 옷 종류\n브랜드: %s 옷 종류: %s 사이즈: %s  색상 : %s\n",clothes_info[i].brand, clothes_info[i].type, clothes_info[i].size, clothes_info[i].color);
           //옷 정보 삭제 
           memset(&clothes_info[i], 0x00, sizeof(CLOTHES));
         fprintf(fp, "%s %s %s\n", clothes_info[i].brand, clothes_info[i].type, clothes_info[i].size, clothes_info[i].color);
         fclose(fp);
        }
    }
}

//전체 상품 보기 
void view_clothes()
{
   int i;
   printf("\n          brand          type           size           color \n");
   printf("----------------------------------------------------------------\n");
   for(i=0; i<s_idx; i++)
   {
      printf("%14s%15s%15s%17s\n", clothes_info[i].brand,
                   clothes_info[i].type, clothes_info[i].size, clothes_info[i].color);
   }
}


//전체 상품 보기 
void view_customer()
{
   int i;
   printf("\n          name          size           phone \n");
   printf("------------------------------------------------\n");
   for(i=0; i<c_idx; i++)
   {
      printf("%15s%12s%20s\n", customer_info[i].name,
                   customer_info[i].size, customer_info[i].phone);
   }
}


//프로그램 종료
void end()
{
   printf("\n프로그램을 종료합니다\n");
   exit(1);
}


