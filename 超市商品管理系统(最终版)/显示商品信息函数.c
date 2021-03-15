/************************************************----------------------------平广
*函数名： show——1（显示商品信息函数）
*功能：显示商品信息，商品信息全部显示（给店主看）
*返回值：无返回值）
*************************************************/
void show_1(CS*head)
{
    CS*p=head;
	printf("\t                              纺大超市商品信息\n");
	printf("===============================================================================\n");
    printf("商品名称    商品类型    商品编号    进价   售价   折后   进货日期  折扣   库存 \n");
    while(p!=NULL)
    {
       printf("%-10s",p->pinming);
	   printf("%12s",p->lei);
	   printf("%11s",p->bianhao);
       printf("%7.1f",p->jinjia);
       printf("%7.1f",p->shoujia);
	   printf("%7.1f",p->zhehou);
       printf("%12s",p->riqi);
       printf("%5.1f",p->zhekou);
       printf("%7d\n",p->kucun);
       p=p->next;
    }
jixu();
}

/************************************************----------------------------平广
*函数名： show——2（显示商品信息函数）
*功能：显示商品信息，商品信息部分显示（给顾客看）
*返回值：无返回值）
*************************************************/
void show_2(CS*head)
{
    CS*p=head;
	system("cls");
	printf("\t\n\n              纺大超市商品信息\n");
	printf("=================================================================\n");
    printf("商品名称   商品类型    原价    折后    进货日期    折扣    库存  \n");
    while(p!=NULL)
    {
       printf("%-8s",p->pinming);
	   printf("%12s",p->lei);
       printf("%7.1f",p->shoujia);     
	   printf("%8.1f",p->zhehou);
       printf("%12s",p->riqi);
       printf("%8.1f",p->zhekou);
       printf("%8d\n",p->kucun);
       p=p->next;

    }
jixu();
}

/************************************************----------------------------平广
*函数名： show——3（显示商品信息函数）
*功能：输出所要查询的商品信息（店主查询）
*返回值：无返回值）
*************************************************/
void show_3(CS*p)
{
       printf("%-10s",p->pinming);
	   printf("%12s",p->lei);
	   printf("%11s",p->bianhao);
       printf("%7.1f",p->jinjia);
       printf("%7.1f",p->shoujia);
	   printf("%7.1f",p->zhehou);
       printf("%12s",p->riqi);
       printf("%5.1f",p->zhekou);
       printf("%7d\n",p->kucun);
       p=p->next;
}


/************************************************----------------------------平广
*函数名： show——4（显示商品信息函数）
*功能：输出所要查询的商品信息(顾客查询)
*返回值：无返回值）
*************************************************/
void show_4(CS*p)
{
        printf("%-8s",p->pinming);
	   printf("%12s",p->lei);
       printf("%7.1f",p->shoujia);     
	   printf("%8.1f",p->zhehou);
       printf("%12s",p->riqi);
       printf("%8.1f",p->zhekou);
       printf("%8d\n",p->kucun);
}
