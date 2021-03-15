/*********************************
函数名：登录子函数——1
**********************************/
int denglu_1()
{
    char zhanghao[50]={0};
	char mima[20]={0};
	int i=0;
    printf("请输入你的账号或昵称:");
    fflush(stdin);
    gets(zhanghao);
	printf("请输入你的密码:");
    fflush(stdin);
    while(1)
	{
	   mima[i]=getch();
       if (mima[i] == '\x0d')/*回车则终止循环*/
       {
           mima[i]='\0';
           break;
       }
       printf("*");      /*以星号代替字符个数*/
	   i++;
	   }
	printf("\n");
	if(strcmp(zhanghao,"weilaoshi")==0&&strcmp(mima,"weilaoshi")==0)
        return 1;
	else 
        return 0;
}

/*********************************
函数名：登录验证子函数
**********************************/
int getzhanghao(char zhanghao[],char mima[])
{	
	FILE *fp;
	US *t1,*t2,*head=NULL,*p;
	int flag=0;
    if((fp=fopen("zhanghao.txt","r"))==0)
	{
	   printf("\n该账号不存在或");
		   return 0;
	}
    rewind(fp);	 
	t1=(US *) malloc(sizeof(US));	
	head=t2=t1;	
	while(!feof(fp))	
	{
		if(fread(t1,sizeof(US),1,fp)!=1)	
			break;  
		t1->next=(US *)malloc(sizeof(US));	
		t2=t1;                          //t2是真正的尾节点
		t1=t1->next;	                //t1向后移一个结点
	}
	t2->next=NULL;	
	fclose(fp);
	p=head;	
	while(p!=NULL)
	{
		if(strcmp(p->id,zhanghao)==0&&strcmp(p->pass,mima)==0)	  
		{
			flag=1;	
			break;
		}
		p=p->next;		                //p1指针向后移
	}
	return flag;
}

/*********************************
函数名：登录子函数——2
**********************************/
int denglu_2(char jz[])
{   
    char zhanghao[50]={0};
	char mima[20]={0};
	int i=0;
    printf("请输入你的账号或昵称:");
    fflush(stdin);
    gets(zhanghao);
	printf("请输入你的密码:");
    
    while(1)
	{  
	   fflush(stdin);
	   mima[i]=getch();
       if (mima[i] == '\x0d')/*回车则终止循环*/
       {
           mima[i]='\0';
           break;
       }
       printf("*");      /*以星号代替字符个数*/
	   i++;
	}
	printf("\n");  
	strcpy(jz,zhanghao);
	if(getzhanghao(zhanghao,mima))
        return 1;
	else
        return 0;
}
/*********************************
函数名：用户登录子函数
**********************************/
void yonghudenglu() 
{
   int choice,i=0,k=0;
   char jz[30];
   while(1)
   {
      system("cls");
      printf("\n\n\n\n\n");
      printf("\t\t------------------------------------------\n");
      printf("\t\t★   纺大超市商品管理系统用户登录平台   ★\n");
      printf("\t\t------------------------------------------\n");
      printf("\t\t                 1.店主登录               \n\n");
      printf("\t\t                 2.顾客登录               \n\n");
      printf("\t\t              其他.退出登录               \n");
      printf("\t\t------------------------------------------\n\n");
      printf("\t\t请输入您要的服务:");
      scanf("%d",&choice);
	  if(choice>2||choice<1) break;
      switch(choice)
	  {
        case 1: 
      zz:if(denglu_1())  boss();
         else
		 {
			k++;
		    if(k>=3)
			{
			printf("输错次数达到三次，请您过会再登录，按任意键返回主页面。。。。");
			getchar();
			break;
			}
           printf("账号或密码输入错误！！！\n");
		   system("cls");
		   printf("********************请重新输入*********************\n");
           goto zz;
		 }break;
        case 2:
cc: if(denglu_2(jz))  customer(jz);
         else
		 {  
	     	i++;
		    if(i>=3)
			{
			printf("输错次数达到三次，请您过会再登录，按任意键返回主页面。。。。");
			getchar();
			break;
			}
            printf("账号或密码输入错错误。。。。。\n\n");
			system("cls");
		    printf("********************请重新输入*********************\n");
            goto cc;
		 }
	     break;
	  }
   }
}
