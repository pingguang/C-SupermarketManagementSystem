
/**********************************
函数名：顾客修改个人信息子函数——1 
功能：输入账号和之前的密码来重新设置密码（输入两次确认用户是否记住新密码）
参数：无
返回：无
**********************************/
void change_1(char jz[])
{
	US*head,*p=NULL;
   int i=0,flag=0;
   char mima[20],a[7]="xiugai";
   printf("\t\t请输入您的密码:");
   fflush(stdin);                
   gets(mima);
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0&&strcmp(mima,p->pass)==0)
     {
		 printf("请输入您的新密码:");
         while(1)
		 {  
	      fflush(stdin);
	      mima[i]=getch();
          if (mima[i] == '\x0d')
		  {
           mima[i]='\0';
           break;
		  }
          printf("*");    
	      i++;
		 }
		 strcpy(p->pass,mima);
		 flag=1;
	     break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}

/**********************************
函数名：顾客修改个人信息子函数——2 
功能：修改联系电话
参数：无
返回：无
**********************************/
void change_2(char jz[])
{
	US*head,*p=NULL;
   int flag=0;
   char a[7]="xiugai";
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0)
     {
		 printf("请输入您的新号码:");
         scanf("%ld",&p->tel);
		 flag=1;
	     break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}

/**********************************
函数名：顾客修改个人信息子函数——3
功能：修改用户地址
参数：无
返回：无
**********************************/
void change_3(char jz[])
{
	US*head,*p=NULL;
   int flag=0;
   char a[7]="wanshan";
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0)
     {
		 printf("请输入您的新地址:");
         fflush(stdin);                
         gets(p->dizhi);
		 flag=1;
	     break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}


	
		 
/**********************************
函数名：顾客个人信息完善子函数
功能：完善用户个人信息
参数：无
返回：无
**********************************/
void wanshan(char jz[])
{
	US*head,*p=NULL;
   char a[8]="wanshan";
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0)
     {
		 printf("请输入您的地址:");
         fflush(stdin);                
         gets(p->dizhi);
		 printf("请输入您的号码:");            
         scanf("%ld",&p->tel);
		 break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}

/**********************************
函数名：顾客个人信息查看子函数
功能：查看用户个人信息
参数：无
返回：无
**********************************/
void chakan(char jz[])
{
   US*head,*p=NULL;
   p=head=Read_1();
    while(p!=NULL)
	{
      if(strcmp(jz,p->id)==0)
      {
		 if(strcmp(p->dizhi,"无")==0)
          printf("您还没有完善个人信息，请您先完善\n");
		 else
		 {
		  printf("账号    电话       余额    地址    \n");
		  printf("%-8s%-11ld%-8.2f%-50s\n",p->id,p->tel,p->money,p->dizhi);
		 }
		 break;
	  }
      p=p->next;
    }
   jixu();
}
/***********************************************
*函数名：顾客个人信息子函数之choice
*功能：顾客可以查看个人信息，修改个人密码（地址，电话）
*参数：账号文件中的头结点,以及顾客的choice
*返回值：NULL
***********************************************/
void gerenxinxi_choice(int choice,char jz[])
{
     switch(choice)
	 {
	    case 1:
			change_1(jz);
			break;
	    case 2:
	    	change_2(jz);
			break;
	    case 3:
			change_3(jz);
			break;
		case 4:
			wanshan(jz);
			break;
		case 5:
			chakan(jz);
			break;
		default:
			printf("输入错误，请重新输入，请按任意键继续》》》》》》");
		    fflush(stdin);getchar();
            break;
	 }
}



/***********************************************
*函数名：顾客个人信息子函数
*功能：顾客可以查看个人信息，修改个人密码（地址，电话）
*参数：账号文件中的头结点
*返回值：NULL
***********************************************/
void gerenxinxi(char jz[])
{
	int choice;
	while(1)
	{
		system("cls");
        printf("\t\t------------欢迎进入个人信息平台--------------\n\n");
        printf("\t\t               1.修改账号密码                 \n\n");
        printf("\t\t               2.修改联系电话                 \n\n");
        printf("\t\t               3.修改个人住址                 \n\n");
	    printf("\t\t               4.完善个人信息                 \n\n");
	    printf("\t\t               5.查看个人信息                 \n\n");
        printf("\t\t               6.退出个人信息平台             \n\n");
        printf("\t\t----------------------------------------------\n\n");
        printf("\t\t请输入您的选择:");
        scanf("%d",&choice);
        if(choice==6)   break;
        gerenxinxi_choice(choice,jz);
	}
}
