
/**********************************
���������˿��޸ĸ�����Ϣ�Ӻ�������1 
���ܣ������˺ź�֮ǰ�������������������루��������ȷ���û��Ƿ��ס�����룩
��������
���أ���
**********************************/
void change_1(char jz[])
{
	US*head,*p=NULL;
   int i=0,flag=0;
   char mima[20],a[7]="xiugai";
   printf("\t\t��������������:");
   fflush(stdin);                
   gets(mima);
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0&&strcmp(mima,p->pass)==0)
     {
		 printf("����������������:");
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
		 strcpy(p->pass,mima);
		 flag=1;
	     break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}

/**********************************
���������˿��޸ĸ�����Ϣ�Ӻ�������2 
���ܣ��޸���ϵ�绰
��������
���أ���
**********************************/
void change_2(char jz[])
{
	US*head,*p=NULL;
   int flag=0;
   char a[7]="xiugai";
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0)
     {
		 printf("�����������º���:");
         scanf("%ld",&p->tel);
		 flag=1;
	     break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}

/**********************************
���������˿��޸ĸ�����Ϣ�Ӻ�������3
���ܣ��޸��û���ַ
��������
���أ���
**********************************/
void change_3(char jz[])
{
	US*head,*p=NULL;
   int flag=0;
   char a[7]="wanshan";
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0)
     {
		 printf("�����������µ�ַ:");
         fflush(stdin);                
         gets(p->dizhi);
		 flag=1;
	     break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}


	
		 
/**********************************
���������˿͸�����Ϣ�����Ӻ���
���ܣ������û�������Ϣ
��������
���أ���
**********************************/
void wanshan(char jz[])
{
	US*head,*p=NULL;
   char a[8]="wanshan";
   p=head=Read_1();
   while(p!=NULL)
   {
     if(strcmp(jz,p->id)==0)
     {
		 printf("���������ĵ�ַ:");
         fflush(stdin);                
         gets(p->dizhi);
		 printf("���������ĺ���:");            
         scanf("%ld",&p->tel);
		 break;
	 }
    p=p->next;
   }
   Save_1(head,a);
   jixu();
}

/**********************************
���������˿͸�����Ϣ�鿴�Ӻ���
���ܣ��鿴�û�������Ϣ
��������
���أ���
**********************************/
void chakan(char jz[])
{
   US*head,*p=NULL;
   p=head=Read_1();
    while(p!=NULL)
	{
      if(strcmp(jz,p->id)==0)
      {
		 if(strcmp(p->dizhi,"��")==0)
          printf("����û�����Ƹ�����Ϣ������������\n");
		 else
		 {
		  printf("�˺�    �绰       ���    ��ַ    \n");
		  printf("%-8s%-11ld%-8.2f%-50s\n",p->id,p->tel,p->money,p->dizhi);
		 }
		 break;
	  }
      p=p->next;
    }
   jixu();
}
/***********************************************
*���������˿͸�����Ϣ�Ӻ���֮choice
*���ܣ��˿Ϳ��Բ鿴������Ϣ���޸ĸ������루��ַ���绰��
*�������˺��ļ��е�ͷ���,�Լ��˿͵�choice
*����ֵ��NULL
***********************************************/
void gerenxinxi_choice(int choice,char jz[])
{
     switch(choice)
	 {
	    case 1:
			change_1(jz);
			break;
	    case 2:
	    	change_2(jz);
			break;
	    case 3:
			change_3(jz);
			break;
		case 4:
			wanshan(jz);
			break;
		case 5:
			chakan(jz);
			break;
		default:
			printf("����������������룬�밴���������������������");
		    fflush(stdin);getchar();
            break;
	 }
}



/***********************************************
*���������˿͸�����Ϣ�Ӻ���
*���ܣ��˿Ϳ��Բ鿴������Ϣ���޸ĸ������루��ַ���绰��
*�������˺��ļ��е�ͷ���
*����ֵ��NULL
***********************************************/
void gerenxinxi(char jz[])
{
	int choice;
	while(1)
	{
		system("cls");
        printf("\t\t------------��ӭ���������Ϣƽ̨--------------\n\n");
        printf("\t\t               1.�޸��˺�����                 \n\n");
        printf("\t\t               2.�޸���ϵ�绰                 \n\n");
        printf("\t\t               3.�޸ĸ���סַ                 \n\n");
	    printf("\t\t               4.���Ƹ�����Ϣ                 \n\n");
	    printf("\t\t               5.�鿴������Ϣ                 \n\n");
        printf("\t\t               6.�˳�������Ϣƽ̨             \n\n");
        printf("\t\t----------------------------------------------\n\n");
        printf("\t\t����������ѡ��:");
        scanf("%d",&choice);
        if(choice==6)   break;
        gerenxinxi_choice(choice,jz);
	}
}
