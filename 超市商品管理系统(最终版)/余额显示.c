/**********************************
���������˿�����ѯ�Ӻ���
���ܣ�����ѯ
��������
���أ���
**********************************/
void moneychaxun(char jz[])
{
	US*head,*p=NULL;
   int flag=0;
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0)
     {
		 printf("\t\t�������Ϊ:%.2f\n",p->money);        
		 flag=1;
		 break;
	 }
    p=p->next;
   }
  jixu();
}
