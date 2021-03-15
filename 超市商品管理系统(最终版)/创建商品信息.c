/***********************************************-----------------------------平广
*函数名：Create（创建）
*功能：创建一个单链表，把数据放在链表里面 
*返回值：CS *（结构体链表头节点指针）
***********************************************/
CS*Create()
{
    CS*pnew,*tail,*head,*p;	
	int choice;
    head=tail=pnew=p=NULL;

    while(1)
    { 
		pnew=(CS*)malloc(1*sizeof(CS));
        if(pnew==NULL)
        {
            printf("no enough memory");
            return NULL;
        }
        pnew->next=NULL;
zz: printf("请输入商品名称(输入#时结束录入):");
        scanf("%s",pnew->pinming);

        if(strcmp(pnew->pinming,"#")==0 )  break;
        p=head;
        while(p!=NULL)
		{
		if(strcmp(p->pinming,pnew->pinming)==0)
				{
					printf("您商品名输入重复了，请您重新输入！！\n");
					goto zz;
				}
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
ff:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(pnew->lei,"生活用品类");break;
		  case 2:strcpy(pnew->lei,"水和饮料类");break;
	      case 3:strcpy(pnew->lei,"文具用品类");break;
		  case 4:strcpy(pnew->lei,"零食类");    break;
		  case 5:strcpy(pnew->lei,"服饰类");    break;
		  default:printf("选择错误，请重新选择商品类型:");goto ff;
		}
	    fflush(stdin);
        printf("请输入该商品进货日期:");
        scanf("%s",pnew->riqi);
cc: printf("请输入该商品编号:");
        scanf("%s",pnew->bianhao);
		p=head;
        while(p!=NULL)
		{
		   if(strcmp(p->pinming,pnew->pinming)==0)
		   {
		    	printf("您商品编号输入重复了，请您重新输入！！\n");
				goto cc;
		   }
				p=p->next;
		}
		printf("请输入该商品超市库存:");
        scanf("%d",&pnew->kucun);
    	pnew->zhehou=(pnew->shoujia)*(pnew->zhekou);
        if(head==NULL)
        {
            head=pnew;
            tail=pnew;
        }
        else
        {
            tail->next=pnew;
            tail=pnew;
        }
    }
    tail->next=NULL;    
    return head;
}