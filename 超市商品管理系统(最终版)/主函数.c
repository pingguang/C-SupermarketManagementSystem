#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
#include<windows.h>

struct chaoshi	
{	
	char pinming[20];	                  //商品名称
    char lei[20];	                      //商品种类
	char riqi[15];                        //商品生产日期
	char bianhao[20];                     //商品编号
    float  jinjia,shoujia,zhekou,zhehou;  //商品进价，原价，折扣，打折后的价格
    unsigned int kucun;                   //商品库存
	struct  chaoshi  * next;              //节点指针
};
typedef  struct  chaoshi  CS;             //声明结构体的同义词，方便使用


struct  user	
{	
	char id[30];	                     //用户账号或昵称
    char pass[20];                       //用户账号密码
	long int tel;                        //用户电话号码
	float money;                         //用户余额
	char dizhi[120];                     //用户地址
	struct  user  * next;                //节点指针
};
typedef  struct  user  US;               //声明结构体的同义词，方便使用

#include"文件保存.c"
#include"继续函数.c"
#include"保存询问.c"
#include"读取文件.c"
#include"创建商品信息.c"
#include"显示商品信息函数.c"
#include"增加函数.c"
#include"删除函数.c"
#include"查询函数.c"
#include"修改函数.c"
#include"节点内容交换子函数.c"
#include"排序函数.c"
#include"顾客今日推荐.c"
#include"店主商品统计功能.c"
#include"店主主界面.c"
#include"顾客个人信息.c"
#include"我的购物交易.c"
#include"余额充值.c"
#include"余额显示.c"
#include"顾客主界面.c"
#include"用户账号登录.c"
#include"用户账号注册.c"
#include"用户账号注销.c"
#include"退出函数.c"
#include"系统颜色选择.c"


/*********************************
函数名：主函数
**********************************/
void main()
{
   int choice;
   while(1)
   {
      system("cls");
      printf("\n\n\n\n\n");
      printf("\t\t-------------------------------------\n");
      printf("\t\t★   纺大超市商品管理系统官方主页   ★\n");
      printf("\t\t-------------------------------------\n");
      printf("\t\t              1.用户登录            \n\n");
      printf("\t\t              2.用户注册            \n\n");
      printf("\t\t              3.账号注销            \n\n");
	  printf("\t\t              4.系统颜色            \n\n");
      printf("\t\t              5.退出系统            \n");
      printf("\t\t-------------------------------------\n\n");
      printf("\t\t请输入您要的服务:");
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
        default:printf("输入错误,请按任意键返回主页重新输入。。。");
			   fflush(stdin);getchar(); break;
	  }
   }
}