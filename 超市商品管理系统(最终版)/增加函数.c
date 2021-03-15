/********************************************************************----------------------平广
函数名：增加子函数——1 
功能：增加一个商品信息，且每次只能增加一个商品信息(保证商品名称唯一)
参数：增加之前的链表头
返回：增加之后的链表头
**********************************************************************/
 CS*add_1(CS *head)
{
	CS * p=head;
	CS * pnew=NULL;
	char name[20];
	int choice;
chongfu:	printf("\n请输入新商品名称(保证品名唯一):");
	fflush(stdin);
	gets(name);                                                        //输入商品名称
	p=head; 
	while(p!=NULL)                                                     //保证品名唯一
	{
		if(strcmp(p->pinming,name)==0)
			goto chongfu;
		p=p->next;
	}
	pnew = (CS *)malloc (1*sizeof(CS));  
    if (pnew == NULL)                                                  //创建新节点失败,则返回
	{
        printf ("no enough memory!\n");
        return (NULL);
	 }
	strcpy(pnew->pinming,name);
        printf("请输入该商品进价:" );
        scanf("%f",&pnew->jinjia);
        printf("请输入该商品售价:" );
        scanf("%f",&pnew->shoujia);
		while(1)
		{
        printf("请输入该商品折扣:" );  scanf("%f",&pnew->zhekou);
        if(pnew->zhekou>0&&pnew->zhekou<=1)  break;
		}
		printf("**************************商品类型*****************************\n ");
		printf("#1.生活用品类  #2.水和饮料类   #3.文具用品类   #4.零食类   #5.服饰类\n ");
      	printf("请选择该商品类型:");
jj:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(pnew->lei,"生活用品类");break;
		  case 2:strcpy(pnew->lei,"水和饮料类");break;
	      case 3:strcpy(pnew->lei,"文具用品类");break;
		  case 4:strcpy(pnew->lei,"零食类");    break;
		  case 5:strcpy(pnew->lei,"服饰类");    break;
		  default:printf("选择错误，请重新选择商品类型:");goto jj;;
		}
	    fflush(stdin);
        printf("请输入该商品进货日期:");
		scanf("%s",pnew->riqi);
chong:	printf("请输入该商品编号:");
		scanf("%s",pnew->bianhao);
		p=head; 
	    while(p!=NULL)                                                     //保证品名唯一
		{
	     	if(strcmp(p->bianhao,pnew->bianhao)==0)
			goto chong;
		p=p->next;
		} 
		printf("请输入该商品超市库存:");
        scanf("%d",&pnew->kucun);
		pnew->zhehou=(pnew->shoujia)*(pnew->zhekou);
	    p=head;
	    while(p->next!=NULL)
		p=p->next ;
	    p->next=pnew;
	    pnew->next=NULL;
	return head;
}


/********************************************************************-----------------马钰婷
函数名：增加子函数——2
功能：增加一个商品信息，且每次只能增加一个商品信息(保证商品编号唯一)
参数：增加之前的链表头
返回：增加之后的链表头
**********************************************************************/
 CS*add_2(CS *head)
{
	CS * p=head;
	CS * pnew=NULL;
	char bianhao[20];
	int choice;
chongfu:	printf("\n请输入新桑商品编号(保证品编号唯一):");
	fflush(stdin);
	gets(bianhao);                                                        //输入商品名称
	p=head; 
	while(p!=NULL)                                                     //保证品名唯一
	{
		if(strcmp(p->bianhao,bianhao)==0)
			goto chongfu;
		p=p->next;
	}
	pnew = (CS *)malloc (1*sizeof(CS));  
    if (pnew == NULL)                                                  //创建新节点失败,则返回
	{
        printf ("no enough memory!\n");
        return (NULL);
	 }
	strcpy(pnew->bianhao,bianhao);
chong:   printf("请输入该商品名称:");
        scanf("%s",pnew->pinming);
    	p=head; 
	    while(p!=NULL)                                                     //保证品名唯一
		{
	     	if(strcmp(p->pinming,pnew->pinming)==0)
			goto chong;
		p=p->next;
		}
        printf("请输入该商品进价:" );
        scanf("%f",&pnew->jinjia);
        printf("请输入该商品售价:" );
        scanf("%f",&pnew->shoujia);
		while(1)
		{
        printf("请输入该商品折扣:" );  scanf("%f",&pnew->zhekou);
        if(pnew->zhekou>0&&pnew->zhekou<=1)  break;
		}
		printf("**************************商品类型*****************************\n ");
		printf("#1.生活用品类  #2.水和饮料类   #3.文具用品类   #4.零食类   #5.服饰类\n ");
      	printf("请选择该商品类型:");
jj:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(pnew->lei,"生活用品类");break;
		  case 2:strcpy(pnew->lei,"水和饮料类");break;
	      case 3:strcpy(pnew->lei,"文具用品类");break;
		  case 4:strcpy(pnew->lei,"零食类");    break;
		  case 5:strcpy(pnew->lei,"服饰类");    break;
		  default:printf("选择错误，请重新选择商品类型:");goto jj;;
		}
	    fflush(stdin);
        printf("请输入该商品进货日期:");
		scanf("%s",pnew->riqi);
		printf("请输入该商品超市库存:");
        scanf("%d",&pnew->kucun);
		pnew->zhehou=(pnew->shoujia)*(pnew->zhekou);
	    p=head;
	    while(p->next!=NULL)
		p=p->next ;
	    p->next=pnew;
	    pnew->next=NULL;
	return head;
}


 /***********************************************
*函数名：增加菜单子函数
*功能：根据用户需要选择系统增加功能（按照商品名称和商品编号增加）
*参数：增加前的头节点
*返回值：增加后的头节点
***********************************************/
CS*addcaidan(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**************选择增加功能类型**************\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            1.按照商品名称增加            *\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            2.按照商品编号增加            *\n");
		printf("\t\t*                                          *\n");
    	printf("\t\t*            其他.返回店主主页面           *\n");
		printf("\t\t********************************************\n");
	    printf("\t\t请输入您的选择:");
		scanf("%d",&choice);
		if(choice<1||choice>2)  break;
		switch(choice)
		{
		case 1:	head=add_1(head);show_1(head); break;
	    case 2: head=add_2(head);show_1(head); break;
		}
        if(baocun_xunwen())                       //如果保存询问为“真”,把该商品信息删除保存到文件中
	    Save_2(head); 
	}
	return head;
}
