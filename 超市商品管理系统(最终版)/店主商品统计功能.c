/***********************************************
*函数名：店主的统计子函数——1
*功能：统计商品的进货总金额和预计收款金额以及商店的盈亏情况
*参数：修改前的头节点
*返回值：无
***********************************************/
void tongji_1(CS*head)
{
  CS*p=head;
  float sum1=0,sum2=0,a;
  while(p!=NULL)
  {
  sum1=sum1+p->jinjia;
  sum2=sum2+p->zhehou;
  p=p->next;
  }
  a=sum1-sum2;
  if(a>0)
	  printf("本季度超市的进货总金额达%.2f元,预计收回成本%.2f元，将盈利%.2f元\n\n\n",sum1,sum2,sum1-sum2);
  else
      printf("本季度超市的进货总金额达%.2f元,预计收回成本%.2f元，将亏本%.2f元\n\n\n",sum1,sum2,sum1-sum2);
  jixu();
}

/***********************************************
*函数名：店主的统计子函数——2
*功能：统计商品的进货总金额和预计收款金额以及商店的盈亏情况
*参数：修改前的头节点
*返回值：无
***********************************************/
void tongji_2(CS*head)
{
  CS*p=head;
  int count=0,a=0;
  float sum=0;
  printf("本季度商品折后价格低于进价的商品情况如下:\n");
  	printf("===============================================================================\n");
    printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
  while(p!=NULL)
  {
	  if(p->zhehou<p->jinjia)
	  {
	    sum=sum+(p->jinjia-p->zhehou)*p->kucun;
		count++;
		a+=p->kucun;
	    show_3(p);
	  }
     p=p->next;
  }
  if(sum>0)
  printf("这类商品共有%d种%d件，累计将亏本%.2f元\n",count,a,sum);
  else
  printf("恭喜老板，这一季度没有这类商品，愿销售杠杠的！！！\n");
  jixu();
}

/***********************************************
*函数名：店主的统计子函数——3
*功能：统计短缺或需下架的商品
*参数：修改前的头节点
*返回值：无
***********************************************/
void tongji_3(CS*head)
{
  CS*p=head;
  int count=0;
  printf("本季度短缺或需下架的商品情况如下:\n");
  printf("===============================================================================\n");
  printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
  while(p!=NULL)
  {
	  if(p->kucun==0)
	  {
		count++;
	    show_3(p);
	  }
     p=p->next;
  }
  if(count>0)
      printf("这类商品共有%d种\n",count);
  else
	  printf("没有这类商品\n");
  jixu();
}

/***********************************************
*函数名：店主的统计子函数——4
*功能：各个大类中的商品数量
*参数：修改前的头节点
*返回值：无
***********************************************/
void tongji_4(CS*head)
{
  CS*p=head;
  int n1=0,n2=0,n3=0,n4=0,n5=0;
  while(p!=NULL)
  {
	  if(strcmp(p->lei,"生活用品类")==0)   n1++;
	  else if(strcmp(p->lei,"水和饮料类")==0)   n2++;
	  else if(strcmp(p->lei,"文具用品类")==0)   n3++;
	  else if(strcmp(p->lei,"零食类")==0)   n4++;
	  else if(strcmp(p->lei,"服饰类")==0)   n5++; 
     p=p->next;
  }
  printf("生活用品类有%d种  水和饮料类有%d种   文具用品类有%d种   零食类有%d种   服饰类有%d种",n1,n2,n3,n4,n5);
  jixu();
}
/***********************************************
*函数名：店主统计菜单子函数
*功能：根据店主的需要选择系统统计功能（1，进货开支，售出以及季度盈亏情况 2，统计售价低于进价的商品 3，缺货或需下架）
*参数：  删除前的头节点
*返回值：无
***********************************************/
void tongjicaidan(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**************季度商品，销售情况分析**************\n");
		printf("\t\t*               1.季度商店盈亏情况               *\n");
		printf("\t\t*               2.售价低于进价商品               *\n");
		printf("\t\t*               3.商品短缺或需下架               *\n");
		printf("\t\t*               4.各类商品数量分析               *\n");
    	printf("\t\t*              其他.返回店主主页面               *\n");
		printf("\t\t**************************************************\n");
	    printf("\t\t请输入您的选择:");
		scanf("%d",&choice);
		if(choice<1||choice>4)  break;
		switch(choice)
		{
		case 1:tongji_1(head);break;
	    case 2:tongji_2(head);break;
	    case 3:tongji_3(head);break;
		case 4:tongji_4(head);break;
		}
	}
}
