/****************************************
函数名：今日推荐子函数之货物分类统计 
功能:  按照商品种类，找出各个种类商品中售价最便宜的商品         
参数：修改之前的链表头
返回：无
*****************************************/
void jirituijian_tongji(CS*head)
{
    CS*p,*a,*b,*c,*d,*e;
    p=head;
	a=b=c=d=e=NULL;
	while(p!=NULL)
	{
	   if(strcmp(p->lei,"生活用品类")==0)  a=p;
	   if(strcmp(p->lei,"水和饮料类")==0)  b=p;
	   if(strcmp(p->lei,"文具用品类")==0)  c=p;
	   if(strcmp(p->lei,"零食类")==0)      d=p;
	   if(strcmp(p->lei,"服饰类")==0)      e=p;
	   p=p->next;
	}
	p=head;
	while(p->next!=NULL)
	{
	   if(strcmp(p->lei,"生活用品类")==0)
	   {
	     if(p->zhehou<a->zhehou) a=p;
	   }
	   if(strcmp(p->lei,"水和饮料类")==0)
	   {
	     if(p->zhehou<a->zhehou) b=p;
	   }
	   if(strcmp(p->lei,"文具用品类")==0)
	   {
	     if(p->zhehou<a->zhehou) c=p;
	   }
	   if(strcmp(p->lei,"零食类")==0)
	   {
	     if(p->zhehou<a->zhehou) d=p;
	   }
	   if(strcmp(p->lei,"服饰类")==0)
	   {
	     if(p->zhehou<a->zhehou) e=p;
	   }
      p=p->next;
	}
  printf("亲!今天超市  生活用品类 中的%10s最便宜哦，才需%.2f元\n\n",a->pinming,a->zhehou); 
  printf("亲!今天超市  水和饮料类 中的%10s最便宜哦，才需%.2f元\n\n",b->pinming,b->zhehou); 
  printf("亲!今天超市  文具用品类 中的%10s最便宜哦，才需%.2f元\n\n",c->pinming,c->zhehou); 
  printf("亲!今天超市  零食类     中的%10s最便宜哦，才需%.2f元\n\n",d->pinming,d->zhehou); 
  printf("亲!今天超市  服饰类     中的%10s最便宜哦，才需%.2f元\n\n",e->pinming,e->zhehou); 
}


/****************************************
函数名：今日推荐子函数 
功能: 把售价最低，折扣最大，库存最多，生产日期最新的推荐给顾客           
参数：修改之前的链表头
返回：无
*****************************************/
void jinrituijian(CS*head)
{
   CS*p; 
   
    head=paixu_4(head);
    p=head;
    printf("亲!今天折扣最大的是%s,打%.2f折，折后价格只需%.2f元，可以为您省了%.2f元哦\n\n",p->pinming,(p->zhekou)*10,p->zhehou,p->shoujia-p->zhehou);

    head=paixu_8(head);
    p=head;
    printf("亲!今天新进的货%s,超新鲜的,原价%.2f元,现在打%.2f折，现在买不贵才需%.2f元哦\n\n",p->pinming,p->shoujia,(p->zhekou)*10,p->zhehou);

    head=paixu_5(head);
    p=head;
    printf("亲!今天超市的%s货量充足,现有货物%d份，适合团购哦\n\n",p->pinming,p->kucun);

   jirituijian_tongji(head);
}
