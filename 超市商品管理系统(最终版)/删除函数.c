/******************************************-----------------������
��������ɾ���Ӻ�������1 
���ܣ�����Ʒ��ɾ����Ʒ��Ϣ
������ɾ��֮ǰ������ͷ
���أ�ɾ��֮�������ͷ
******************************************/
CS *shanchu_1(CS *head)//����Ʒ��ɾ���ڵ�
{
	CS* p=head;
	CS* q=head;
	char name[20];
	int flag=0;
	printf("\n-----------��������Ҫɾ����Ʒ������:");
	fflush(stdin);
	gets(name);
	while(p!=NULL)
	{
		if(strcmp(name,p->pinming)==0)
		{
              if(p==head)
              {
				  head=p->next;
				  flag=1;
				  break;
			  }
              else
			  {
			      q->next=p->next;
			      flag=1;
	              break;	  
			  }	
		}
		q=p;
		p=p->next;
	}
	if(flag==0)  printf("\n*******û���ҵ�����Ʒ����������������\n");
	else  printf("\n**************�Ѿ�ɾ������Ʒ��**************\n");
	return head;
}


/******************************************
��������ɾ���Ӻ�������2 
���ܣ�������Ʒ���ɾ����Ʒ��Ϣ
������ɾ��֮ǰ������ͷ
���أ�ɾ��֮�������ͷ
******************************************/
CS *shanchu_2(CS *head)//����Ʒ��ɾ���ڵ�
{
	CS* p=head;
	CS* q=head;
	char bianhao[20];
	int flag=0;
	printf("\n-----------��������Ҫɾ����Ʒ�ı��:");
	fflush(stdin);
	gets(bianhao);
	while(p!=NULL)
	{
		if(strcmp(bianhao,p->bianhao)==0)
		{
              if(p==head)
              {
				  head=p->next;
				  flag=1;
				  break;
			  }
              else
			  {
			      q->next=p->next;
			      flag=1;
	              break;	  
			  }	
		}
		q=p;
		p=p->next;
	}
	if(flag==0)  printf("\n*******û���ҵ�����Ʒ����������������\n");
	else  printf("\n**************�Ѿ�ɾ������Ʒ��**************\n");
	return head;
}

/******************************************
��������ɾ���Ӻ�������3 
���ܣ�������Ʒ��������ɾ����Ʒ��Ϣ
������ɾ��֮ǰ������ͷ
���أ�ɾ��֮�������ͷ
******************************************/
CS *shanchu_3(CS *head)//����Ʒ��ɾ���ڵ�
{
	CS* p=head;
	CS* q=head;
	char riqi[15];
	int flag=0;
	printf("\n-----------��������Ҫɾ����Ʒ����������:");
	fflush(stdin);
	gets(riqi);
	while(p!=NULL)
	{
		if(strcmp(riqi,p->riqi)==0)
		{
              if(p==head)
              {
				  head=p->next;
				  flag=1;
			  }
              else
			  {
			      q->next=p->next;
			      flag=1;	  
			  }	
		}
	    q=p;
		p=p->next;
	}
	if(flag==0)  printf("\n*******û���ҵ�����Ʒ����������������\n");
	else  printf("\n**************�Ѿ�ɾ������Ʒ��**************\n");
	return head;
}

/******************************************
��������ɾ���Ӻ�������4 
���ܣ�������Ʒ���ɾ����Ʒ��Ϣ
������ɾ��֮ǰ������ͷ
���أ�ɾ��֮�������ͷ
******************************************/
CS *shanchu_4(CS *head)//����Ʒ��ɾ���ڵ�
{
	CS* p=head;
	CS* q=head;
	unsigned int kucun; 
	int flag=0;
	printf("\n-----------��������Ҫɾ����Ʒ�Ŀ��:");
	scanf("%d",&kucun);
	while(p!=NULL)
	{
		if(p->kucun==kucun)
		{
              if(p==head)
              {
				  head=p->next;
				  flag=1;
				  break;
			  }
              else
			  {
			      q->next=p->next;
			      flag=1;
	              break;	  
			  }	
		}
		q=p;
		p=p->next;
	}
	if(flag==0)  printf("\n*******û���ҵ�����Ʒ����������������\n");
	else  printf("\n**************�Ѿ�ɾ������Ʒ��**************\n");
	return head;
}


/***********************************************
*��������ɾ���˵��Ӻ���
*���ܣ������û���Ҫѡ��ϵͳɾ�����ܣ�������Ʒ���ƣ���Ʒ��ţ���Ʒ�������ں���Ʒ���ɾ����
*������ɾ��ǰ��ͷ�ڵ�
*����ֵ��ɾ�����ͷ�ڵ�
***********************************************/
CS *shanchucaidan(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**************ѡ��ɾ����������**************\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            1.������Ʒ����ɾ��            *\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            2.������Ʒ���ɾ��            *\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            3.������������ɾ��            *\n");		
		printf("\t\t*                                          *\n");
		printf("\t\t*            4.������Ʒ���ɾ��            *\n");		
		printf("\t\t*                                          *\n");
    	printf("\t\t*            ����.���ص�����ҳ��           *\n");
		printf("\t\t********************************************\n");
	    printf("\t\t����������ѡ��:");
		scanf("%d",&choice);
		if(choice<1||choice>4)  break;
		switch(choice)
		{
		case 1:head=shanchu_1(head);show_1(head); break;
	    case 2:head=shanchu_2(head);show_1(head); break;
	    case 3:head=shanchu_3(head);show_1(head); break;
	    case 4:head=shanchu_4(head);show_1(head); break;
		}
		if(baocun_xunwen())                       //�������ѯ��Ϊ���桱,�Ѹ���Ʒ��Ϣɾ�����浽�ļ���
	    Save_2(head); 
	}
	return head;
}