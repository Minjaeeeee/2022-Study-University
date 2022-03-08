
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

//�� ���� ����ü
typedef struct _CLOTHES {
   char brand[30];
   char type[30];
   char size[30];
    char color[30];
};CTS

//�� ���� ����ü
typedef struct _customer {
   char name[20];
   char size[20];
   char phone[15];
}CTM;

//�Լ�
void new_ctm();
int search_ctm();
void new_add();
int search();
void edit();
void del();
void view_cts();           //������ ��ü����
void view_ctm();           //������ ��ü���� �߰��Ѱ�
void end();
void input_cts(); //ȣ������ �� ������ ���� ����ü�� ��� �Լ�
void input_ctm();
void SetTextColor(int background, int text) // UI
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (background<<4) | text);
   //������ background�� 4��Ʈ ������ ������, text�� ���Ͽ� ����
}

//����ü �迭 �������� ����
CTS cts_info[200];
int cts_count=0;        //�� ���� ī����
CTM ctm_info[200];
int ctm_count=0;        //�� ���� ī����

//����ȭ��
int main()
{
   int i, chooes=1, count;
   input_cts();
   input_ctm();

   SetTextColor(15, 0); //15: ���, 0: ������

   while(chooes!=9)
   {
      system("cls"); //ȭ�������
      printf("========================\n");
      printf("   �� ���� ���α׷�   \n");
      printf("========================\n");
      printf("  1. �ű� �� ��� \n");
      printf("  2. �� ���� ��ȸ \n");
      printf("  3. ��ǰ �߰� \n");
      printf("  4. ��ǰ �˻� \n");
      printf("  5. ��ǰ ���� \n");
      printf("  6. ��ǰ ���� \n");
      printf("  7. ��ü ��ǰ ���� \n");
        printf("  8. ��ü �� ���� \n");
      printf("  9. ���α׷� ���� \n");
      printf("========================\n");
      printf("  ���ϴ� �޴��� �����ϼ���: \n");

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
            printf("ã���ô� ������ �����ϴ�.\n");
         }
         break;
      case 3:
         new_add();
         break;
      case 4:
         idx=search();
         if(count==-1)
            printf("ã���ô� ������ �����ϴ�.\n");
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
         printf("\n�߸� �����ϼ̽��ϴ�.\n");
         break;
      }
      printf("\n�۾��� �Ϸ��Ͽ����ϴ�.\n���ο� �޴��� �����Ϸ��� Enter�� �����ּ���.\n");
      getch(); // �׸� �Է� �ޱ� ��� -> ����ġ�� ���Ӱ� �׺� ���� ����
   }
   return 0;
}

//�� ���� ���Ͽ��� �Է� �ޱ� 
void input_cts()
 {
   FILE* fp = fopen("D:\\temp\\cts_info.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;

   //�Ź� ���� �Է� 
   while(fscanf(fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","������ �߶󳻴� strtok�Լ�  
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

//�ű� �� ���� ��� 
void new_ctm()
{
   FILE* c_fp = fopen("D:\\temp\\ctm_info.txt", "a");

   printf("\n");
   printf("�� �̸�: ");
   scanf("%s", &ctm_info[ctm_count].name);
   printf("�� ������: ");
   scanf("%s", &ctm_info[ctm_count].size);
   printf("�� ��ȭ��ȣ: ");
   scanf("%s", &ctm_info[ctm_count].phone);
   
   fprintf(c_fp, "\n%s,%s,%s\n", ctm_info[ctm_count].name, ctm_info[ctm_count].size,
                  ctm_info[ctm_count].phone);
   ctm_count++;
   fclose(c_fp);
}

//��ȭ��ȣ�� �� ���� ��ȸ 
int search_ctm()
{
   int i;
   char name[50];
   printf("\n�̸�: ");
   scanf("%s", &name);
   for(i=0; i<c_idx; i++)
   {
      if(strcmp(name, ctm_info[i].name)==0)  //���� ������ ���� ��ȯ�ϱ� ���� ����
         return i;      
   }
   return -1;
} 

//�Ż�ǰ �Է� �޾� ���Ͽ� ���� 
void new_add()
{
   FILE* fp = fopen("D:\\temp\\cts_info.txt", "a");

   //����ü �迭�� �Ż�ǰ ������ �Է� ����. 
   printf("\n");
   printf("�귣��: ");
   scanf("%s", &cts_info[cts_count].brand);
   printf("�� ����: ");
   scanf("%s", &cts_info[cts_count].type);
   printf("������: ");
   scanf("%s", &cts_info[cts_count].size);
    printf("����: ");
   scanf("%s", &cts_info[cts_count].color);

   fprintf(fp, "%s,%s,%s\n", cts_info[cts_count].brand, cts_info[cts_count].type,
       cts_info[cts_count].size, ctm_info[ctm_count].phone);                  //���� �ڵ� �ٽú���
   cts_count++;
   fclose(fp);
}

//�𵨸����� �˻��ϱ� 
int search()
{
   int i;
   char name[30];
   printf("\n�� ����: ");
   scanf("%s", &name);
   for(i=0; i<cts_count; i++)
   {
      if(strcmp(name, cts_info[i].type)==0) //strcmp�Լ� ��� -> �Է��� name�� ����ü �迭�� �귣�尡 ��ġ�ϸ� 0�� ��ȯ. 
         return i; //0�� �Ǹ� true�� �Ǿ� if���� ��. 
   }
   return -1; //for�� ���ư��� ������ �� ã�� �� ��� 
}

//��ǰ ���� 
 void edit()
{
   int i, j, k;
   char name[20];
   char info[20];
   printf("\n�귣�带 �Է��� �ּ���: "); 
   scanf("%s", name);
   printf("\n");
   
   for(i=0; i<cts_idx; i++)
   {
      if(strcmp(name, cts_info[i].brand)==0)
      {
         printf("�귣��: %s �𵨸�: %s ������: %s\n", cts_info[i].brand,
                   cts_info[i].type, cts_info[i].size, cts_info[i].color);
         printf("\n");
         printf("1.Brand 2.type 3.Size 4.color\n");
         printf("��ȣ�� �����ϼ���: ");
         scanf("%d", &j);
         if(j==1)
         {
            printf("������ �귣��: ");
            scanf("%s", cts_info[i].brand); 
         } 
         else if(j==2)
         {
            printf("������ �� ����: ");
            scanf("%s", cts_info[i].type); 
         } 
         else if(j==3)
         {
            printf("������ ������: ");
            scanf("%s", cts_info[i].size); 
         }
            else if(j==4)
         {
            printf("������ ����: ");
            scanf("%s", cts_info[i].color); 
         }
         printf("\n");
      }
   }
}

//��ǰ ���� 
void del()
 {   
   FILE* fp = fopen("D:\\temp\\cts_info.txt", "r+");

    int i=0;
   char name[30];
   printf("\n�� ����: ");
   scanf("%s", &name);   

    // �Էµ� �� ���� �˻��Ͽ� �ش� �� ���� ���� 
    // ���� �� ������ ���� ���� ������ ������ �� ���� ���� 
    for(i=0; i<cts_count; i++)
    {
        //������ �� ���� ���
        if(strcmp(name, cts_info[i].type)==0)
        {
           printf("\n���� �� ����\n�귣��: %s �� ������: %s ������: %s ���� : %s\n",cts_info[i].brand, cts_info[i].type, cts_info[i].size, cts_info[i].color);
           //�� ���� ���� 
           memset(&cts_info[i], 0x00, sizeof(CLOTHES));
         fprintf(fp, "%s %s %s %s\n", cts_info[i].brand, cts_info[i].type, cts_info[i].size, cts_info[i].color);
         fclose(fp);
        }
    }
}

//��ü ��ǰ ���� 
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

//��ü �� ���� 
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

//���α׷� ����
void end()
{
   printf("\n���α׷��� �����մϴ�\n");
   exit(1);
}
