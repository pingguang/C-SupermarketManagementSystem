/***************************************-----------------马钰婷
函数名：查询子函数——1 
功能：根据商品名称查询商品信息
参数：修改之前的链表头
返回：无
******************************************/
void chaxun_1(CS*head,char a[])
{
	CS*p=head;
	char name[20];
	int flag=0;
	printf("\n请输入你需要查询商品的名称:");
	fflush(stdin);
	gets(name);
	if(strcmp(a,"dianzhu")==0)
	{
	   	printf("===============================================================================\n");
        printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
       
	}
	else
	{
	   	printf("=================================================================\n");
        printf("商品名称   商品类型    原价    折后    进货日期    折扣    库存  \n");
	}
	while(p!=NULL)
	{
		if(strcmp(name,p->pinming)==0)
		{	
		 flag=1;
		 if(strcmp(a,"dianzhu")==0)
		 show_3(p); 
		 else
		 show_4(p);
		}
		p=p->next;
	}
 if(flag==0)     printf("\n****************没有找到该商品耶！******************* \n");
 jixu();
}

/***************************************
函数名：查询子函数——2
功能：根据商品编号查询商品信息
参数：修改之前的链表头
返回：无
******************************************/
void chaxun_2(CS*head,char a[])
{
	CS*p=head;
	char bianhao[20];
	int flag=0;
	printf("\n请输入你需要查询商品的编号:");
	fflush(stdin);
	gets(bianhao);
    printf("===============================================================================\n");
    printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
	while(p!=NULL)
	{
		if(strcmp(bianhao,p->bianhao)==0)
		{	
		 flag=1;
		 if(strcmp(a,"dianzhu")==0)
		 show_3(p); 
		 else
		 show_4(p); 
		}
		p=p->next;
	}
 if(flag==0)     printf("\n****************没有找到该商品耶！******************* \n");
 jixu();
}


/***************************************
函数名：查询子函数——3 
功能：根据商品种类查询商品信息
参数：修改之前的链表头
返回：无
******************************************/
void chaxun_3(CS*head,char a[])
{
	CS*p=head;
	char lei[20];
	int flag=0,choice;
    printf("**************************商品类型*****************************\n ");
    printf("#1.生活用品类  #2.水和饮料类   #3.文具用品类   #4.零食类   #5.服饰类\n ");
    printf("请选择该商品类型:");
ff:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(lei,"生活用品类");break;
		  case 2:strcpy(lei,"水和饮料类");break;
	      case 3:strcpy(lei,"文具用品类");break;
		  case 4:strcpy(lei,"零食类");    break;
		  case 5:strcpy(lei,"服饰类");    break;
		  default:printf("选择错误，请重新选择商品类型:");goto ff;
		}
    if(strcmp(a,"dianzhu")==0)
	{
	  printf("===============================================================================\n");
      printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
	}
	else
	{
	  	printf("=================================================================\n");
        printf("商品名称   商品类型    原价    折后    进货日期    折扣    库存  \n");
	}
	while(p!=NULL)
	{
		if(strcmp(lei,p->lei)==0)
		{	
		 flag=1;
		 if(strcmp(a,"dianzhu")==0)
		 show_3(p); 
		 else
		 show_4(p);
		}
		p=p->next;
	}
 if(flag==0)     printf("\n****************没有找到该商品耶！******************* \n");
 jixu();
}

/***************************************
函数名：查询子函数——4 
功能：根据商品生产日期查询商品信息
参数：修改之前的链表头
返回：无
******************************************/
void chaxun_4(CS*head,char a[])
{
	CS*p=head;
	char riqi[15];
	int flag=0;
	printf("\n请输入你需要查询商品的生产日期:");
	fflush(stdin);
	gets(riqi);
	if(strcmp(a,"dianzhu")==0)
	{
	  printf("===============================================================================\n");
      printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
	}
	else
	{
	  	printf("=================================================================\n");
        printf("商品名称   商品类型    原价    折后    进货日期    折扣    库存  \n");
	}
	while(p!=NULL)
	{
		if(strcmp(riqi,p->riqi)==0)
		{	
		 flag=1;
		 if(strcmp(a,"dianzhu")==0)
		 show_3(p); 
		 else
		 show_4(p); 
		}
		p=p->next;
	}
 if(flag==0)     printf("\n****************没有找到该商品耶！******************* \n");
 jixu();
}

/***************************************
函数名：查询子函数——5 
功能：根据商品进价查询商品信息
参数：修改之前的链表头
返回：无
******************************************/
void chaxun_5(CS*head,char a[])
{
	CS*p=head;
	float jinjia;
	int flag=0;
	printf("\n请输入你需要查询商品的进价:");
    scanf("%f",&jinjia);
    printf("===============================================================================\n");
    printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
	while(p!=NULL)
	{
		if(jinjia==p->jinjia)
		{	
		 flag=1;
		 if(strcmp(a,"dianzhu")==0)
		 show_3(p); 
		 else
		 show_4(p);
		}
		p=p->next;
	}
 if(flag==0)     printf("\n****************没有找到该商品耶！******************* \n");
jixu();
}


/***************************************
函数名：查询子函数——6 
功能：根据商品售价查询商品信息
参数：修改之前的链表头
返回：无
******************************************/
void chaxun_6(CS*head,char a[])
{
	CS*p=head;
    float shoujia;
	int flag=0;
	printf("\n请输入你需要查询商品的售价:");
    scanf("%f",&shoujia);
	if(strcmp(a,"dianzhu")==0)
	{
	  printf("===============================================================================\n");
      printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
	}
	else
	{
	   	printf("=================================================================\n");
        printf("商品名称   商品类型    原价    折后    进货日期    折扣    库存  \n");
	}
	while(p!=NULL)
	{
		if(shoujia==p->zhehou)
		{	
		 flag=1;
		 if(strcmp(a,"dianzhu")==0)
		 show_3(p); 
		 else
		 show_4(p);
		}
		p=p->next;
	}
 if(flag==0)     printf("\n****************没有找到该商品耶！******************* \n");
 jixu();
}


/***************************************
函数名：查询子函数——7 
功能：根据商品名称查询商品信息
参数：修改之前的链表头
返回：无
******************************************/
void chaxun_7(CS*head,char a[])
{
	CS*p=head;
    unsigned int kucun;
	int flag=0;
	printf("\n请输入你需要查询商品的库存:");
	scanf("%d",&kucun);
	if(strcmp(a,"dianzhu")==0)
	{
	  printf("===============================================================================\n");
      printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
	}
	else
	{
	   	printf("=================================================================\n");
        printf("商品名称   商品类型    原价    折后    进货日期    折扣    库存  \n");
	}
	while(p!=NULL)
	{
		if(kucun==p->kucun)
		{	
		 flag=1;
		 if(strcmp(a,"dianzhu")==0)
		 show_3(p); 
		 else
		 show_4(p);
		}
		p=p->next;
	}
 if(flag==0)     printf("\n****************没有找到该商品耶！******************* \n");
jixu();
}



/***********************************************
*函数名：查询菜单子函数——1
*功能：根据店主需要选择系统查询功能（按照商品名称，商品编号，商品生产日期以及商品商品进价，售价，库存查询）
*参数：删除前的头节点
*返回值：删除后的头节点
***********************************************/
void chaxuncaidan(CS*head)
{
    int choice;
	char a[8]="dianzhu";
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**************选择查询功能类型**************\n");
		printf("\t\t*            1.按照商品名称查询            *\n");
		printf("\t\t*            2.按照商品编号查询            *\n");
		printf("\t\t*            3.按照商品种类查询            *\n");
		printf("\t\t*            4.按照生产日期查询            *\n");
		printf("\t\t*            5.按照商品进价查询            *\n");
		printf("\t\t*            6.按照商品售价查询            *\n");		
		printf("\t\t*            7.按照商品库存查询            *\n");
    	printf("\t\t*            其他.返回店主主页面           *\n");
		printf("\t\t********************************************\n");
	    printf("\t\t请输入您的选择:");
		scanf("%d",&choice);
		if(choice<1||choice>7)  break;
		switch(choice)
		{
		case 1:chaxun_1(head,a); break;
	    case 2:chaxun_2(head,a); break;
	    case 3:chaxun_3(head,a); break;
	    case 4:chaxun_4(head,a); break;
	    case 5:chaxun_5(head,a); break;
	    case 6:chaxun_6(head,a); break;
	    case 7:chaxun_7(head,a); break;
		}
	}
}


/***********************************************
*函数名：查询菜单子函数——2
*功能：根据用户需要选择系统查询功能（按照商品名称，商品编号，商品生产日期和商品库存删除）
*参数：删除前的头节点
*返回值：删除后的头节点
***********************************************/
void chaxuncaidan_2(CS*head)
{
    int choice;
	char a[5]="guke";
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**************选择查询功能类型**************\n");
		printf("\t\t*            1.按照商品名称查询            *\n");
		printf("\t\t*            2.按照商品种类查询            *\n");
		printf("\t\t*            3.按照生产日期查询            *\n");
		printf("\t\t*            4.按照商品售价查询            *\n");		
		printf("\t\t*            5.按照商品库存查询            *\n");
    	printf("\t\t*            其他.返回顾客主页面           *\n");
		printf("\t\t********************************************\n");
	    printf("\t\t请输入您的选择:");
		scanf("%d",&choice);
		if(choice<1||choice>5)  break;
		switch(choice)
		{
		case 1:chaxun_1(head,a);break;
	    case 2:chaxun_3(head,a);break;
	    case 3:chaxun_4(head,a);break;
	    case 4:chaxun_6(head,a);break;
	    case 5:chaxun_7(head,a);break; 
		}
	}
}