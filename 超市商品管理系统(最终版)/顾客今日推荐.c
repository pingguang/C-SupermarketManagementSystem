/****************************************
�������������Ƽ��Ӻ���֮�������ͳ�� 
����:  ������Ʒ���࣬�ҳ�����������Ʒ���ۼ�����˵���Ʒ         
�������޸�֮ǰ������ͷ
���أ���
*****************************************/
void jirituijian_tongji(CS*head)
{
    CS*p,*a,*b,*c,*d,*e;
    p=head;
	a=b=c=d=e=NULL;
	while(p!=NULL)
	{
	   if(strcmp(p->lei,"������Ʒ��")==0)  a=p;
	   if(strcmp(p->lei,"ˮ��������")==0)  b=p;
	   if(strcmp(p->lei,"�ľ���Ʒ��")==0)  c=p;
	   if(strcmp(p->lei,"��ʳ��")==0)      d=p;
	   if(strcmp(p->lei,"������")==0)      e=p;
	   p=p->next;
	}
	p=head;
	while(p->next!=NULL)
	{
	   if(strcmp(p->lei,"������Ʒ��")==0)
	   {
	     if(p->zhehou<a->zhehou) a=p;
	   }
	   if(strcmp(p->lei,"ˮ��������")==0)
	   {
	     if(p->zhehou<a->zhehou) b=p;
	   }
	   if(strcmp(p->lei,"�ľ���Ʒ��")==0)
	   {
	     if(p->zhehou<a->zhehou) c=p;
	   }
	   if(strcmp(p->lei,"��ʳ��")==0)
	   {
	     if(p->zhehou<a->zhehou) d=p;
	   }
	   if(strcmp(p->lei,"������")==0)
	   {
	     if(p->zhehou<a->zhehou) e=p;
	   }
      p=p->next;
	}
  printf("��!���쳬��  ������Ʒ�� �е�%10s�����Ŷ������%.2fԪ\n\n",a->pinming,a->zhehou); 
  printf("��!���쳬��  ˮ�������� �е�%10s�����Ŷ������%.2fԪ\n\n",b->pinming,b->zhehou); 
  printf("��!���쳬��  �ľ���Ʒ�� �е�%10s�����Ŷ������%.2fԪ\n\n",c->pinming,c->zhehou); 
  printf("��!���쳬��  ��ʳ��     �е�%10s�����Ŷ������%.2fԪ\n\n",d->pinming,d->zhehou); 
  printf("��!���쳬��  ������     �е�%10s�����Ŷ������%.2fԪ\n\n",e->pinming,e->zhehou); 
}


/****************************************
�������������Ƽ��Ӻ��� 
����: ���ۼ���ͣ��ۿ���󣬿����࣬�����������µ��Ƽ����˿�           
�������޸�֮ǰ������ͷ
���أ���
*****************************************/
void jinrituijian(CS*head)
{
   CS*p; 
   
    head=paixu_4(head);
    p=head;
    printf("��!�����ۿ�������%s,��%.2f�ۣ��ۺ�۸�ֻ��%.2fԪ������Ϊ��ʡ��%.2fԪŶ\n\n",p->pinming,(p->zhekou)*10,p->zhehou,p->shoujia-p->zhehou);

    head=paixu_8(head);
    p=head;
    printf("��!�����½��Ļ�%s,�����ʵ�,ԭ��%.2fԪ,���ڴ�%.2f�ۣ������򲻹����%.2fԪŶ\n\n",p->pinming,p->shoujia,(p->zhekou)*10,p->zhehou);

    head=paixu_5(head);
    p=head;
    printf("��!���쳬�е�%s��������,���л���%d�ݣ��ʺ��Ź�Ŷ\n\n",p->pinming,p->kucun);

   jirituijian_tongji(head);
}
