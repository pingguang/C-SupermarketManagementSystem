#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
#include<windows.h>

struct chaoshi	
{	
	char pinming[20];	                  //��Ʒ����
    char lei[20];	                      //��Ʒ����
	char riqi[15];                        //��Ʒ��������
	char bianhao[20];                     //��Ʒ���
    float  jinjia,shoujia,zhekou,zhehou;  //��Ʒ���ۣ�ԭ�ۣ��ۿۣ����ۺ�ļ۸�
    unsigned int kucun;                   //��Ʒ���
	struct  chaoshi  * next;              //�ڵ�ָ��
};
typedef  struct  chaoshi  CS;             //�����ṹ���ͬ��ʣ�����ʹ��


struct  user	
{	
	char id[30];	                     //�û��˺Ż��ǳ�
    char pass[20];                       //�û��˺�����
	long int tel;                        //�û��绰����
	float money;                         //�û����
	char dizhi[120];                     //�û���ַ
	struct  user  * next;                //�ڵ�ָ��
};
typedef  struct  user  US;               //�����ṹ���ͬ��ʣ�����ʹ��

#include"�ļ�����.c"
#include"��������.c"
#include"����ѯ��.c"
#include"��ȡ�ļ�.c"
#include"������Ʒ��Ϣ.c"
#include"��ʾ��Ʒ��Ϣ����.c"
#include"���Ӻ���.c"
#include"ɾ������.c"
#include"��ѯ����.c"
#include"�޸ĺ���.c"
#include"�ڵ����ݽ����Ӻ���.c"
#include"������.c"
#include"�˿ͽ����Ƽ�.c"
#include"������Ʒͳ�ƹ���.c"
#include"����������.c"
#include"�˿͸�����Ϣ.c"
#include"�ҵĹ��ｻ��.c"
#include"����ֵ.c"
#include"�����ʾ.c"
#include"�˿�������.c"
#include"�û��˺ŵ�¼.c"
#include"�û��˺�ע��.c"
#include"�û��˺�ע��.c"
#include"�˳�����.c"
#include"ϵͳ��ɫѡ��.c"


/*********************************
��������������
**********************************/
void main()
{
   int choice;
   while(1)
   {
      system("cls");
      printf("\n\n\n\n\n");
      printf("\t\t-------------------------------------\n");
      printf("\t\t��   �Ĵ�����Ʒ����ϵͳ�ٷ���ҳ   ��\n");
      printf("\t\t-------------------------------------\n");
      printf("\t\t              1.�û���¼            \n\n");
      printf("\t\t              2.�û�ע��            \n\n");
      printf("\t\t              3.�˺�ע��            \n\n");
	  printf("\t\t              4.ϵͳ��ɫ            \n\n");
      printf("\t\t              5.�˳�ϵͳ            \n");
      printf("\t\t-------------------------------------\n\n");
      printf("\t\t��������Ҫ�ķ���:");
	  fflush(stdin);
      scanf("%d",&choice);
	  fflush(stdin);
      switch(choice)
	  {
        case 1: yonghudenglu();     break;
        case 2: yonghuzhuce();      break;
		case 3: zhanghaozhuxiao();  break;
		case 4: xitongyanse();      break;
        case 5: tuichu();
        default:printf("�������,�밴�����������ҳ�������롣����");
			   fflush(stdin);getchar(); break;
	  }
   }
}