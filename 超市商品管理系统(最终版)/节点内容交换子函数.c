/****************************************
�������������Ӻ��� 
����: ���������ڵ������          
����������֮ǰ�Ľڵ�
���أ�����֮��Ľڵ�
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
