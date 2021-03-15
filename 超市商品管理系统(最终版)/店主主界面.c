/***********************************************
*函数名：zhucaidan(店主选择主菜单函数)
*功能：根据用户需要选择系统功能
*返回值：NULL
***********************************************/
void zhucaidan(CS*head,int choice)
{   
     switch(choice)
	 {
	 case 1:  head=Create();  if(baocun_xunwen()) Save_2(head); break; 
		 
     case 2:
		 head=Read_2();
         if(head!=NULL) 
		   show_1(head); 
		else
		{
		 printf("您没有创建商品信息，请您先创建，按任意键继续。。。。");
		 getchar();
		}
		break;
	 case 3: 
		 head=Read_2(); 
		 if(head!=NULL) 
           head=addcaidan(head);
		else
		{
		 printf("您没有创建商品信息，请您先创建，按任意键继续。。。");
		 getchar();
		}
		 break;
     case 4:
		  head=Read_2();
         if(head!=NULL)
		 head=shanchucaidan(head); 
		 else
		 {
		 printf("您没有创建商品信息，请您先创建，按任意键继续。。。");
		 getchar();
		 }
		 break;
     case 5:
		 head=Read_2();
		 if(head!=NULL)
		 chaxuncaidan(head);
         else
		 {
		 printf("您没有创建商品信息，请您先创建，按任意键继续。。。");
		 getchar();
		 }
		 break;
     case 6:
         head=Read_2();
		 if(head!=NULL)
		 head=xiugaicaidan(head);
		 else
		 {
		 printf("您没有创建商品信息，请您先创建，按任意键继续。。。。");
		 getchar();
		 }
		 break;
     case 7:
		 head=Read_2();
		 if(head!=NULL)
		 head=paixucaidan(head);	  
		 else
		 {
		    printf("您没有创建商品信息，请您先创建，按任意键继续。。。。");
		    getchar();
		 }
		 break;
      case 8:
		 head=Read_2();
		 if(head!=NULL)
		 tongjicaidan(head);
         else
		 {
		 printf("您没有创建商品信息，请您先创建，按任意键继续。。。");
		 getchar();
		 }
		 break;
	 }
}



/*********************************
函数名：老板子函数
**********************************/
void boss()
{
   CS*hh=NULL;
   int choice;
   hh=Read_2();
   while(1)
    {
        system("cls");
        printf("\n----------------------纺大超市商品管理系统店主页面---------------------\n");
        printf("                           1 创建商品信息\n");
        printf("                           2 显示商品信息\n");
        printf("                           3 增加商品信息\n");
        printf("                           4 删除商品信息\n");
        printf("                           5 查找商品信息\n");
        printf("                           6 修改商品信息\n");
        printf("                           7 排序商品信息\n");
        printf("                           8 统计商品信息\n");
        printf("                        其他 退出超市商品管理系统店主页面\n");
	    printf("\n-----------------------------------------------------------------------\n\n");
        printf("请输入你的选择:");
        scanf("%d",&choice);
	    if(choice>8||choice<1) break;
        zhucaidan(hh,choice);
   }
}

