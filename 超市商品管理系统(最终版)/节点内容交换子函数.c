/****************************************
函数名：交换子函数 
功能: 交换两个节点的内容          
参数：交换之前的节点
返回：交换之后的节点
*****************************************/
void swap(CS*p,CS*q)
{
    float jinjia,shoujia,zhekou,zhehou;
	unsigned int kucun;
	char pinming[20],riqi[15],lei[20];

    jinjia=p->jinjia;p->jinjia=q->jinjia;q->jinjia=jinjia;

    shoujia=p->shoujia;p->shoujia=q->shoujia;q->shoujia=shoujia;

    zhekou=p->zhekou;p->zhekou=q->zhekou;q->zhekou=zhekou;

    zhehou=p->zhehou;p->zhehou=q->zhehou;q->zhehou=zhehou;

    kucun=p->kucun;p->kucun=q->kucun;q->kucun=kucun;

    strcpy(pinming,p->pinming); strcpy(p->pinming,q->pinming); strcpy(q->pinming,pinming);

    strcpy(riqi,p->riqi);strcpy(p->riqi,q->riqi);strcpy(q->riqi,riqi); 

	strcpy(lei,p->lei);strcpy(p->lei,q->lei);strcpy(q->lei,lei); 
 

}
