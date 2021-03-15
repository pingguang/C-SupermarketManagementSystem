/***********************************************
*函数名：zhucaidan——2(顾客选择主菜单函数)
*功能：根据用户需要选择系统功能
*返回值：NULL
***********************************************/
void zhucaidan_2(CS*head,int choice,char jz[])
{
     switch(choice)
	 {
     case 1:
		 head=Read_2();
		 show_2(head);  //显示商品信息
       	break;
     case 2:
		 head=Read_2();
		 chaxuncaidan_2(head);
		 getchar();
		 break;
     case 3:
		 head=Read_2();
		 head=paixucaidan_2(head);
		 break;
	 case 4:
		 head=Read_2();
		 jinrituijian(head);
		 jixu();
		 break;
	 case 5:
		 gerenxinxi(jz);
		 break;
	 case 6:
		 jiaoyixinxi(jz);
		 break;
	case 7:
		 moneychongzhi(jz);
		 break;
	case 8:
		 moneychaxun(jz);
		 break;
	 }
		 
}

/*********************************
函数名：顾客子函数
**********************************/
void customer(char jz[])
{
   CS*hh=NULL;
   int choice;
   hh=Read_2();
   while(1)
    {
        system("cls");
        printf("\n----------------------纺大超市商品管理系统顾客页面---------------------\n");
        printf("                           1 显示商品信息\n");
        printf("                           2 查找商品信息\n");
        printf("                           3 排序商品信息\n");
		printf("                           4 今日推荐    \n");
		printf("                           5 个人信息    \n");
    	printf("                           6 我的购物交易\n");
		printf("                           7 余额充值    \n");
		printf("                           8 余额查询    \n");
        printf("                        其他 退出超市商品管理系统顾客主页面\n");
	    printf("\n-----------------------------------------------------------------------\n\n");
        printf("请输入你的选择:");
        scanf("%d",&choice);
	    if(choice<1||choice>8) break;
        zhucaidan_2(hh,choice,jz);
   }
}
