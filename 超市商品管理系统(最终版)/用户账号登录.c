/*********************************
����������¼�Ӻ�������1
**********************************/
int denglu_1()
{
    char zhanghao[50]={0};
	char mima[20]={0};
	int i=0;
    printf("����������˺Ż��ǳ�:");
    fflush(stdin);
    gets(zhanghao);
	printf("�������������:");
    fflush(stdin);
    while(1)
	{
	   mima[i]=getch();
       if (mima[i] == '\x0d')/*�س�����ֹѭ��*/
       {
           mima[i]='\0';
           break;
       }
       printf("*");      /*���ǺŴ����ַ�����*/
	   i++;
	   }
	printf("\n");
	if(strcmp(zhanghao,"weilaoshi")==0&&strcmp(mima,"weilaoshi")==0)
        return 1;
	else 
        return 0;
}

/*********************************
����������¼��֤�Ӻ���
**********************************/
int getzhanghao(char zhanghao[],char mima[])
{	
	FILE *fp;
	US *t1,*t2,*head=NULL,*p;
	int flag=0;
    if((fp=fopen("zhanghao.txt","r"))==0)
	{
	   printf("\n���˺Ų����ڻ�");
		   return 0;
	}
    rewind(fp);	 
	t1=(US *) malloc(sizeof(US));	
	head=t2=t1;	
	while(!feof(fp))	
	{
		if(fread(t1,sizeof(US),1,fp)!=1)	
			break;  
		t1->next=(US *)malloc(sizeof(US));	
		t2=t1;                          //t2��������β�ڵ�
		t1=t1->next;	                //t1�����һ�����
	}
	t2->next=NULL;	
	fclose(fp);
	p=head;	
	while(p!=NULL)
	{
		if(strcmp(p->id,zhanghao)==0&&strcmp(p->pass,mima)==0)	  
		{
			flag=1;	
			break;
		}
		p=p->next;		                //p1ָ�������
	}
	return flag;
}

/*********************************
����������¼�Ӻ�������2
**********************************/
int denglu_2(char jz[])
{   
    char zhanghao[50]={0};
	char mima[20]={0};
	int i=0;
    printf("����������˺Ż��ǳ�:");
    fflush(stdin);
    gets(zhanghao);
	printf("�������������:");
    
    while(1)
	{  
	   fflush(stdin);
	   mima[i]=getch();
       if (mima[i] == '\x0d')/*�س�����ֹѭ��*/
       {
           mima[i]='\0';
           break;
       }
       printf("*");      /*���ǺŴ����ַ�����*/
	   i++;
	}
	printf("\n");  
	strcpy(jz,zhanghao);
	if(getzhanghao(zhanghao,mima))
        return 1;
	else
        return 0;
}
/*********************************
���������û���¼�Ӻ���
**********************************/
void yonghudenglu() 
{
   int choice,i=0,k=0;
   char jz[30];
   while(1)
   {
      system("cls");
      printf("\n\n\n\n\n");
      printf("\t\t------------------------------------------\n");
      printf("\t\t��   �Ĵ�����Ʒ����ϵͳ�û���¼ƽ̨   ��\n");
      printf("\t\t------------------------------------------\n");
      printf("\t\t                 1.������¼               \n\n");
      printf("\t\t                 2.�˿͵�¼               \n\n");
      printf("\t\t              ����.�˳���¼               \n");
      printf("\t\t------------------------------------------\n\n");
      printf("\t\t��������Ҫ�ķ���:");
      scanf("%d",&choice);
	  if(choice>2||choice<1) break;
      switch(choice)
	  {
        case 1: 
      zz:if(denglu_1())  boss();
         else
		 {
			k++;
		    if(k>=3)
			{
			printf("�������ﵽ���Σ����������ٵ�¼���������������ҳ�档������");
			getchar();
			break;
			}
           printf("�˺Ż�����������󣡣���\n");
		   system("cls");
		   printf("********************����������*********************\n");
           goto zz;
		 }break;
        case 2:
cc: if(denglu_2(jz))  customer(jz);
         else
		 {  
	     	i++;
		    if(i>=3)
			{
			printf("�������ﵽ���Σ����������ٵ�¼���������������ҳ�档������");
			getchar();
			break;
			}
            printf("�˺Ż������������󡣡�������\n\n");
			system("cls");
		    printf("********************����������*********************\n");
            goto cc;
		 }
	     break;
	  }
   }
}
