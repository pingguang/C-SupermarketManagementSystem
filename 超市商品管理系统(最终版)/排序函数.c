/****************************************
函数名：排序子函数——1 
功能: 按照商品名称排序           
参数：排序之前的链表头
返回：排序之后的链表头
*****************************************/
CS *paixu_1(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(strcmp(cur->pinming,cur->next->pinming)>0)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}



/****************************************
函数名：排序子函数——2 
功能: 按照商品编号排序           
参数：排序之前的链表头
返回：排序之后的链表头
*****************************************/
CS *paixu_2(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(strcmp(cur->bianhao,cur->next->bianhao)>0)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}


/****************************************
函数名：排序子函数——3 
功能: 按照日期排序（从大到小）           
参数：排序之前的链表头
返回：排序之后的链表头
*****************************************/
CS *paixu_3(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
      if(strcmp(cur->riqi,cur->next->riqi)<0)
	  {
        p=cur;q=cur->next;
        swap(p,q);
	  }
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}



/****************************************
函数名：排序子函数——4 
功能: 按照折扣排序           
参数：排序之前的链表头
返回：排序之后的链表头
*****************************************/
CS *paixu_4(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(cur->zhekou>cur->next->zhekou)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}


/****************************************
函数名：排序子函数——5
功能: 按照库存排序           
参数：排序之前的链表头
返回：排序之后的链表头
*****************************************/
CS *paixu_5(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(cur->kucun<cur->next->kucun)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}


/****************************************
函数名：排序子函数——6 
功能: 按照进价排序           
参数：排序之前的链表头
返回：排序之后的链表头
*****************************************/
CS *paixu_6(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(cur->jinjia>cur->next->jinjia)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}
/****************************************
函数名：排序子函数——7 
功能: 按照打折后的价格排序           
参数：排序之前的链表头
返回：排序之后的链表头
*****************************************/
CS *paixu_7(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
       if(cur->zhehou>cur->next->zhehou)
	   {
        p=cur;q=cur->next;
        swap(p,q);
	   }
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}


/****************************************
函数名：排序子函数——8
功能: 按照日期排序（从小到大）           
参数：排序之前的链表头
返回：排序之后的链表头
*****************************************/
CS *paixu_8(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
      if(strcmp(cur->riqi,cur->next->riqi)>0)
	  {
        p=cur;q=cur->next;
        swap(p,q);
	  }
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}

/***********************************************
*函数名：店主排序菜单子函数——1
*功能：根据用户需要选择系统排序功能（按照商品名称，商品进价售价，生产日期，编号，库存，折扣）
*参数：增加前的头节点
*返回值：增加后的头节点
***********************************************/
CS *paixucaidan(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**********************选择修改功能类型********************\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                1.按照商品名称从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                2.按照商品编号从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
	    printf("\t\t*                3.按照商品日期从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                4.按照商品折扣从大到小排序              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                5.按照商品库存从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                6.按照商品进价从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                7.按照商品售价从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                其他.返回店主主页面                     *\n");
		printf("\t\t**********************************************************\n");
	    printf("\t\t请输入您的选择:");
		scanf("%d",&choice);
		if(choice<1||choice>7)  break;
		switch(choice)
		{
		case 1:	head=paixu_1(head);show_1(head); break;
	    case 2: head=paixu_2(head);show_1(head); break;
     	case 3:	head=paixu_8(head);show_1(head); break;
		case 4:	head=paixu_4(head);show_1(head); break;
		case 5:	head=paixu_5(head);show_1(head); break;
		case 6:	head=paixu_6(head);show_1(head); break;
		case 7:	head=paixu_7(head);show_1(head); break;

		}
        if(baocun_xunwen())        
	    Save_2(head); 
	}
	return head;
}

/***********************************************
*函数名：顾客排序菜单子函数——2
*功能：根据用户需要选择系统排序功能（按照商品名称，商品售价，生产日期，库存，折扣）
*参数：增加前的头节点
*返回值：增加后的头节点
***********************************************/
CS *paixucaidan_2(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**********************选择修改功能类型********************\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                1.按照商品名称从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
	    printf("\t\t*                2.按照商品日期从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                3.按照商品折扣从大到小排序              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                4.按照商品库存从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                5.按照商品售价从小到大排序              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                其他.返回顾客主页面                     *\n");
		printf("\t\t**********************************************************\n");
	    printf("\t\t请输入您的选择:");
		scanf("%d",&choice);
		if(choice<1||choice>5)  break;
		switch(choice)
		{
		case 1:	head=paixu_1(head);show_2(head); break;
     	case 2:	head=paixu_3(head);show_2(head); break;
		case 3:	head=paixu_4(head);show_2(head); break;
		case 4:	head=paixu_5(head);show_2(head); break;
		case 5:	head=paixu_7(head);show_2(head); break;
		}
	}
	return head;
}
