/**********************************
函数名：顾客余额充值子函数
功能：余额充值
参数：无
返回：无
**********************************/
void moneychongzhi(char jz[])
{
	US*head,*p=NULL;
   int i=0,flag=0;
   float money;
   char mima[20],a[9]="chongzhi";
   printf("\t\t请输入您的密码:");
         while(1)
		 {  
	      fflush(stdin);
	      mima[i]=getch();
          if (mima[i] == '\x0d')
		  {
           mima[i]='\0';
           break;
		  }
          printf("*");    
	      i++;
		 }
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0&&strcmp(mima,p->pass)==0)
     {
		 printf("\n\t\t要充值的金额");        
         scanf("%f",&money);
		 p->money=p->money+money;
		 flag=1;
		 break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}