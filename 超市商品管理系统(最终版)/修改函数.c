/**********************************-----------------������
���������޸��Ӻ�������1 
���ܣ�������Ʒ�����޸���Ʒ�ۼ�
�������޸�֮ǰ������ͷ
���أ��޸�֮�������ͷ
**********************************/
CS *xiugai_1(CS*head)
{
   CS*p=head;
   char name[20];
   printf("\n---------------------������Ʒ�����޸���Ʒ��Ϣ-------------\n");
   printf("\t��������Ҫ�޸���Ʒ������:");
   fflush(stdin);                
   gets(name);
   while(p!=NULL)
   {
     if(strcmp(name,p->pinming)==0)
     {
		 printf("�������޸ĺ���Ʒ���ۼ�:");
         scanf("%f",&p->shoujia);
	     break;
	 } 
     p=p->next;
   }
   return head;
}


/**********************************
���������޸��Ӻ�������2 
���ܣ�������Ʒ�����޸���Ʒ�ۿ�
�������޸�֮ǰ������ͷ
���أ��޸�֮�������ͷ
**********************************/
CS *xiugai_2(CS*head)
{
   CS*p=head;
   char name[20];
   printf("\n---------------------������Ʒ�����޸���Ʒ��Ϣ-------------\n");
   printf("\t��������Ҫ�޸���Ʒ������:");
   fflush(stdin);                
   gets(name);
   while(p!=NULL)
   {
     if(strcmp(name,p->pinming)==0)
     {
		 printf("�������޸ĺ���Ʒ���ۿ�:");
         scanf("%f",&p->zhekou);
	     break;
	 } 
     p=p->next;
   }
   return head;
}


/**********************************
���������޸��Ӻ�������3 
���ܣ�������Ʒ����޸���Ʒ����
�������޸�֮ǰ������ͷ
���أ��޸�֮�������ͷ
**********************************/
CS *xiugai_3(CS*head)
{
   CS*p=head;
   char bianhao[20];
   printf("\n---------------------������Ʒ�����޸���Ʒ��Ϣ-------------\n");
   printf("\t��������Ҫ�޸���Ʒ�ı��:");
   fflush(stdin);               
   gets(bianhao);
   while(p!=NULL)
   {
     if(strcmp(bianhao,p->bianhao)==0)
     {
		 printf("�������޸ĺ���Ʒ������:");
		 fflush(stdin);
         gets(p->pinming);
	     break;
	 } 
     p=p->next;
   }
   return head;
}


/**********************************
���������޸��Ӻ�������4 
���ܣ�������Ʒ�����޸���Ʒ����
�������޸�֮ǰ������ͷ
���أ��޸�֮�������ͷ
**********************************/
CS *xiugai_4(CS*head)
{
   CS*p=head;
   char name[20];
   int choice;
   printf("\n---------------------������Ʒ�����޸���Ʒ��Ϣ-------------\n");
   printf("\t��������Ҫ�޸���Ʒ������:");
   fflush(stdin);                 
   gets(name);
   while(p!=NULL)
   {
     if(strcmp(name,p->pinming)==0)
     {
		 printf("#1.������Ʒ��  #2.ˮ��������   #3.�ľ���Ʒ��   #4.��ʳ��   #5.������\n ");
      	printf("��ѡ�����Ʒ����:");
ff:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(p->lei,"������Ʒ��");break;
		  case 2:strcpy(p->lei,"ˮ��������");break;
	      case 3:strcpy(p->lei,"�ľ���Ʒ��");break;
		  case 4:strcpy(p->lei,"��ʳ��");    break;
		  case 5:strcpy(p->lei,"������");    break;
		  default:printf("ѡ�����������ѡ����Ʒ����:");goto ff;
		}
	     break;
	 } 
     p=p->next;
   }
   return head;
}



/**********************************
���������޸��Ӻ�������5 
���ܣ�������Ʒ�����޸���Ʒ���
�������޸�֮ǰ������ͷ
���أ��޸�֮�������ͷ
**********************************/
CS *xiugai_5(CS*head)
{
   CS*p=head;
   char name[20];
   printf("\n---------------------������Ʒ�����޸���Ʒ��Ϣ-------------\n");
   printf("\t��������Ҫ�޸���Ʒ������:");
   fflush(stdin);                 
   gets(name);
   while(p!=NULL)
   {
     if(strcmp(name,p->pinming)==0)
     {
		 printf("�������޸ĺ���Ʒ�Ŀ��:");
         scanf("%d",&p->kucun);
	     break;
	 } 
     p=p->next;
   }
   return head;
}

/***********************************************
*���������޸Ĳ˵��Ӻ���
*���ܣ������û���Ҫѡ��ϵͳ�޸Ĺ��ܣ�������Ʒ�����޸���Ʒ�ۼۣ��������ڣ���ţ���棩
*����������ǰ��ͷ�ڵ�
*����ֵ�����Ӻ��ͷ�ڵ�
***********************************************/
CS *xiugaicaidan(CS*head)
{
    int choice;
	while(1)
	{
		head=Read_2();
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**********************ѡ���޸Ĺ�������********************\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                1.������Ʒ�����޸���Ʒ�ۼ�              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                2.������Ʒ�����޸���Ʒ�ۿ�              *\n");
		printf("\t\t*                                                        *\n");
	    printf("\t\t*                3.������Ʒ����޸���Ʒ����              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                4.������Ʒ�����޸���Ʒ����              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                5.������Ʒ�����޸���Ʒ���              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                ����.���ص�����ҳ��                     *\n");
		printf("\t\t**********************************************************\n");
	    printf("\t\t����������ѡ��:");
		scanf("%d",&choice);
		if(choice<1||choice>5)  break;
		switch(choice)
		{
		case 1:	head=xiugai_1(head);show_1(head); break;
	    case 2: head=xiugai_2(head);show_1(head); break;
     	case 3:	head=xiugai_3(head);show_1(head); break;
		case 4:	head=xiugai_4(head);show_1(head); break;
		case 5:	head=xiugai_5(head);show_1(head); break;
		}
        if(baocun_xunwen())        
	    Save_2(head); 
	}
	return head;
}