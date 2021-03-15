/**********************************-----------------马钰婷
函数名：修改子函数——1 
功能：根据商品名称修改商品售价
参数：修改之前的链表头
返回：修改之后的链表头
**********************************/
CS *xiugai_1(CS*head)
{
   CS*p=head;
   char name[20];
   printf("\n---------------------根据商品名称修改商品信息-------------\n");
   printf("\t请输入你要修改商品的名称:");
   fflush(stdin);                
   gets(name);
   while(p!=NULL)
   {
     if(strcmp(name,p->pinming)==0)
     {
		 printf("请输入修改后商品的售价:");
         scanf("%f",&p->shoujia);
	     break;
	 } 
     p=p->next;
   }
   return head;
}


/**********************************
函数名：修改子函数——2 
功能：根据商品名称修改商品折扣
参数：修改之前的链表头
返回：修改之后的链表头
**********************************/
CS *xiugai_2(CS*head)
{
   CS*p=head;
   char name[20];
   printf("\n---------------------根据商品名称修改商品信息-------------\n");
   printf("\t请输入你要修改商品的名称:");
   fflush(stdin);                
   gets(name);
   while(p!=NULL)
   {
     if(strcmp(name,p->pinming)==0)
     {
		 printf("请输入修改后商品的折扣:");
         scanf("%f",&p->zhekou);
	     break;
	 } 
     p=p->next;
   }
   return head;
}


/**********************************
函数名：修改子函数——3 
功能：根据商品编号修改商品名称
参数：修改之前的链表头
返回：修改之后的链表头
**********************************/
CS *xiugai_3(CS*head)
{
   CS*p=head;
   char bianhao[20];
   printf("\n---------------------根据商品名称修改商品信息-------------\n");
   printf("\t请输入你要修改商品的编号:");
   fflush(stdin);               
   gets(bianhao);
   while(p!=NULL)
   {
     if(strcmp(bianhao,p->bianhao)==0)
     {
		 printf("请输入修改后商品的名称:");
		 fflush(stdin);
         gets(p->pinming);
	     break;
	 } 
     p=p->next;
   }
   return head;
}


/**********************************
函数名：修改子函数——4 
功能：根据商品名称修改商品种类
参数：修改之前的链表头
返回：修改之后的链表头
**********************************/
CS *xiugai_4(CS*head)
{
   CS*p=head;
   char name[20];
   int choice;
   printf("\n---------------------根据商品名称修改商品信息-------------\n");
   printf("\t请输入你要修改商品的名称:");
   fflush(stdin);                 
   gets(name);
   while(p!=NULL)
   {
     if(strcmp(name,p->pinming)==0)
     {
		 printf("#1.生活用品类  #2.水和饮料类   #3.文具用品类   #4.零食类   #5.服饰类\n ");
      	printf("请选择该商品类型:");
ff:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(p->lei,"生活用品类");break;
		  case 2:strcpy(p->lei,"水和饮料类");break;
	      case 3:strcpy(p->lei,"文具用品类");break;
		  case 4:strcpy(p->lei,"零食类");    break;
		  case 5:strcpy(p->lei,"服饰类");    break;
		  default:printf("选择错误，请重新选择商品类型:");goto ff;
		}
	     break;
	 } 
     p=p->next;
   }
   return head;
}



/**********************************
函数名：修改子函数——5 
功能：根据商品名称修改商品库存
参数：修改之前的链表头
返回：修改之后的链表头
**********************************/
CS *xiugai_5(CS*head)
{
   CS*p=head;
   char name[20];
   printf("\n---------------------根据商品名称修改商品信息-------------\n");
   printf("\t请输入你要修改商品的名称:");
   fflush(stdin);                 
   gets(name);
   while(p!=NULL)
   {
     if(strcmp(name,p->pinming)==0)
     {
		 printf("请输入修改后商品的库存:");
         scanf("%d",&p->kucun);
	     break;
	 } 
     p=p->next;
   }
   return head;
}

/***********************************************
*函数名：修改菜单子函数
*功能：根据用户需要选择系统修改功能（按照商品名称修改商品售价，生产日期，编号，库存）
*参数：增加前的头节点
*返回值：增加后的头节点
***********************************************/
CS *xiugaicaidan(CS*head)
{
    int choice;
	while(1)
	{
		head=Read_2();
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**********************选择修改功能类型********************\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                1.按照商品名称修改商品售价              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                2.按照商品名称修改商品折扣              *\n");
		printf("\t\t*                                                        *\n");
	    printf("\t\t*                3.按照商品编号修改商品名称              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                4.按照商品名称修改商品种类              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                5.按照商品名称修改商品库存              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                其他.返回店主主页面                     *\n");
		printf("\t\t**********************************************************\n");
	    printf("\t\t请输入您的选择:");
		scanf("%d",&choice);
		if(choice<1||choice>5)  break;
		switch(choice)
		{
		case 1:	head=xiugai_1(head);show_1(head); break;
	    case 2: head=xiugai_2(head);show_1(head); break;
     	case 3:	head=xiugai_3(head);show_1(head); break;
		case 4:	head=xiugai_4(head);show_1(head); break;
		case 5:	head=xiugai_5(head);show_1(head); break;
		}
        if(baocun_xunwen())        
	    Save_2(head); 
	}
	return head;
}