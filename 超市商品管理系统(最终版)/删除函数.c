/******************************************-----------------马钰婷
函数名：删除子函数——1 
功能：根据品名删除商品信息
参数：删除之前的链表头
返回：删除之后的链表头
******************************************/
CS *shanchu_1(CS *head)//根据品名删除节点
{
	CS* p=head;
	CS* q=head;
	char name[20];
	int flag=0;
	printf("\n-----------请输入你要删除商品的名称:");
	fflush(stdin);
	gets(name);
	while(p!=NULL)
	{
		if(strcmp(name,p->pinming)==0)
		{
              if(p==head)
              {
				  head=p->next;
				  flag=1;
				  break;
			  }
              else
			  {
			      q->next=p->next;
			      flag=1;
	              break;	  
			  }	
		}
		q=p;
		p=p->next;
	}
	if(flag==0)  printf("\n*******没有找到该商品。。。。。。。。\n");
	else  printf("\n**************已经删除该商品了**************\n");
	return head;
}


/******************************************
函数名：删除子函数——2 
功能：根据商品编号删除商品信息
参数：删除之前的链表头
返回：删除之后的链表头
******************************************/
CS *shanchu_2(CS *head)//根据品名删除节点
{
	CS* p=head;
	CS* q=head;
	char bianhao[20];
	int flag=0;
	printf("\n-----------请输入你要删除商品的编号:");
	fflush(stdin);
	gets(bianhao);
	while(p!=NULL)
	{
		if(strcmp(bianhao,p->bianhao)==0)
		{
              if(p==head)
              {
				  head=p->next;
				  flag=1;
				  break;
			  }
              else
			  {
			      q->next=p->next;
			      flag=1;
	              break;	  
			  }	
		}
		q=p;
		p=p->next;
	}
	if(flag==0)  printf("\n*******没有找到该商品。。。。。。。。\n");
	else  printf("\n**************已经删除该商品了**************\n");
	return head;
}

/******************************************
函数名：删除子函数——3 
功能：根据商品生产日期删除商品信息
参数：删除之前的链表头
返回：删除之后的链表头
******************************************/
CS *shanchu_3(CS *head)//根据品名删除节点
{
	CS* p=head;
	CS* q=head;
	char riqi[15];
	int flag=0;
	printf("\n-----------请输入你要删除商品的生产日期:");
	fflush(stdin);
	gets(riqi);
	while(p!=NULL)
	{
		if(strcmp(riqi,p->riqi)==0)
		{
              if(p==head)
              {
				  head=p->next;
				  flag=1;
			  }
              else
			  {
			      q->next=p->next;
			      flag=1;	  
			  }	
		}
	    q=p;
		p=p->next;
	}
	if(flag==0)  printf("\n*******没有找到该商品。。。。。。。。\n");
	else  printf("\n**************已经删除该商品了**************\n");
	return head;
}

/******************************************
函数名：删除子函数——4 
功能：根据商品库存删除商品信息
参数：删除之前的链表头
返回：删除之后的链表头
******************************************/
CS *shanchu_4(CS *head)//根据品名删除节点
{
	CS* p=head;
	CS* q=head;
	unsigned int kucun; 
	int flag=0;
	printf("\n-----------请输入你要删除商品的库存:");
	scanf("%d",&kucun);
	while(p!=NULL)
	{
		if(p->kucun==kucun)
		{
              if(p==head)
              {
				  head=p->next;
				  flag=1;
				  break;
			  }
              else
			  {
			      q->next=p->next;
			      flag=1;
	              break;	  
			  }	
		}
		q=p;
		p=p->next;
	}
	if(flag==0)  printf("\n*******没有找到该商品。。。。。。。。\n");
	else  printf("\n**************已经删除该商品了**************\n");
	return head;
}


/***********************************************
*函数名：删除菜单子函数
*功能：根据用户需要选择系统删除功能（按照商品名称，商品编号，商品生产日期和商品库存删除）
*参数：删除前的头节点
*返回值：删除后的头节点
***********************************************/
CS *shanchucaidan(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**************选择删除功能类型**************\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            1.按照商品名称删除            *\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            2.按照商品编号删除            *\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            3.按照生产日期删除            *\n");		
		printf("\t\t*                                          *\n");
		printf("\t\t*            4.按照商品库存删除            *\n");		
		printf("\t\t*                                          *\n");
    	printf("\t\t*            其他.返回店主主页面           *\n");
		printf("\t\t********************************************\n");
	    printf("\t\t请输入您的选择:");
		scanf("%d",&choice);
		if(choice<1||choice>4)  break;
		switch(choice)
		{
		case 1:head=shanchu_1(head);show_1(head); break;
	    case 2:head=shanchu_2(head);show_1(head); break;
	    case 3:head=shanchu_3(head);show_1(head); break;
	    case 4:head=shanchu_4(head);show_1(head); break;
		}
		if(baocun_xunwen())                       //如果保存询问为“真”,把该商品信息删除保存到文件中
	    Save_2(head); 
	}
	return head;
}