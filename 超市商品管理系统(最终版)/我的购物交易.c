/**********************************
���������˿�(�ҵĹ��ｻ��)
���ܣ��˿͹���
��������
���أ���
**********************************/
void jiaoyixinxi(char jz[])
{
	US*head,*p=NULL;
    CS*first,*q=NULL;
    char a[8]="goumai",name[20];
	unsigned int num;
	int flag=0,item=0;
    printf("��������Ҫ�������Ʒ������:");
	fflush(stdin);
	gets(name);
    printf("��������Ҫ������Ʒ������:");
    scanf("%d",&num); 
    q=first=Read_2();
    while(q!=NULL)
    {
      if(strcmp(name,q->pinming)==0)
      {
		 q->kucun=q->kucun-num;
		 p=head=Read_1();
         while(p!=NULL)
		 {
           if(strcmp(jz,p->id)==0)
		   {
		    p->money=p->money-(q->zhehou*num);
		    item=1;
		    break;
		   }
           p=p->next;
		 }
		 flag=1;
		 break;
	  }
     q=q->next;
    }
  Save_1(head,a);
  Save_2(first);
  jixu();
}
