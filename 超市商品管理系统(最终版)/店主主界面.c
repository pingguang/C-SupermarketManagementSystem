/***********************************************
*��������zhucaidan(����ѡ�����˵�����)
*���ܣ������û���Ҫѡ��ϵͳ����
*����ֵ��NULL
***********************************************/
void zhucaidan(CS*head,int choice)
{   
     switch(choice)
	 {
	 case 1:  head=Create();  if(baocun_xunwen()) Save_2(head); break; 
		 
     case 2:
		 head=Read_2();
         if(head!=NULL) 
		   show_1(head); 
		else
		{
		 printf("��û�д�����Ʒ��Ϣ�������ȴ������������������������");
		 getchar();
		}
		break;
	 case 3: 
		 head=Read_2(); 
		 if(head!=NULL) 
           head=addcaidan(head);
		else
		{
		 printf("��û�д�����Ʒ��Ϣ�������ȴ����������������������");
		 getchar();
		}
		 break;
     case 4:
		  head=Read_2();
         if(head!=NULL)
		 head=shanchucaidan(head); 
		 else
		 {
		 printf("��û�д�����Ʒ��Ϣ�������ȴ����������������������");
		 getchar();
		 }
		 break;
     case 5:
		 head=Read_2();
		 if(head!=NULL)
		 chaxuncaidan(head);
         else
		 {
		 printf("��û�д�����Ʒ��Ϣ�������ȴ����������������������");
		 getchar();
		 }
		 break;
     case 6:
         head=Read_2();
		 if(head!=NULL)
		 head=xiugaicaidan(head);
		 else
		 {
		 printf("��û�д�����Ʒ��Ϣ�������ȴ������������������������");
		 getchar();
		 }
		 break;
     case 7:
		 head=Read_2();
		 if(head!=NULL)
		 head=paixucaidan(head);	  
		 else
		 {
		    printf("��û�д�����Ʒ��Ϣ�������ȴ������������������������");
		    getchar();
		 }
		 break;
      case 8:
		 head=Read_2();
		 if(head!=NULL)
		 tongjicaidan(head);
         else
		 {
		 printf("��û�д�����Ʒ��Ϣ�������ȴ����������������������");
		 getchar();
		 }
		 break;
	 }
}



/*********************************
���������ϰ��Ӻ���
**********************************/
void boss()
{
   CS*hh=NULL;
   int choice;
   hh=Read_2();
   while(1)
    {
        system("cls");
        printf("\n----------------------�Ĵ�����Ʒ����ϵͳ����ҳ��---------------------\n");
        printf("                           1 ������Ʒ��Ϣ\n");
        printf("                           2 ��ʾ��Ʒ��Ϣ\n");
        printf("                           3 ������Ʒ��Ϣ\n");
        printf("                           4 ɾ����Ʒ��Ϣ\n");
        printf("                           5 ������Ʒ��Ϣ\n");
        printf("                           6 �޸���Ʒ��Ϣ\n");
        printf("                           7 ������Ʒ��Ϣ\n");
        printf("                           8 ͳ����Ʒ��Ϣ\n");
        printf("                        ���� �˳�������Ʒ����ϵͳ����ҳ��\n");
	    printf("\n-----------------------------------------------------------------------\n\n");
        printf("���������ѡ��:");
        scanf("%d",&choice);
	    if(choice>8||choice<1) break;
        zhucaidan(hh,choice);
   }
}

