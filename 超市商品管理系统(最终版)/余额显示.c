/**********************************
函数名：顾客余额查询子函数
功能：余额查询
参数：无
返回：无
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
		 printf("\t\t您的余额为:%.2f\n",p->money);        
		 flag=1;
		 break;
	 }
    p=p->next;
   }
  jixu();
}
