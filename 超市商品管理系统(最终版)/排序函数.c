/****************************************
�������������Ӻ�������1 
����: ������Ʒ��������           
����������֮ǰ������ͷ
���أ�����֮�������ͷ
*****************************************/
CS *paixu_1(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(strcmp(cur->pinming,cur->next->pinming)>0)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}



/****************************************
�������������Ӻ�������2 
����: ������Ʒ�������           
����������֮ǰ������ͷ
���أ�����֮�������ͷ
*****************************************/
CS *paixu_2(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(strcmp(cur->bianhao,cur->next->bianhao)>0)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}


/****************************************
�������������Ӻ�������3 
����: �����������򣨴Ӵ�С��           
����������֮ǰ������ͷ
���أ�����֮�������ͷ
*****************************************/
CS *paixu_3(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
      if(strcmp(cur->riqi,cur->next->riqi)<0)
	  {
        p=cur;q=cur->next;
        swap(p,q);
	  }
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}



/****************************************
�������������Ӻ�������4 
����: �����ۿ�����           
����������֮ǰ������ͷ
���أ�����֮�������ͷ
*****************************************/
CS *paixu_4(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(cur->zhekou>cur->next->zhekou)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}


/****************************************
�������������Ӻ�������5
����: ���տ������           
����������֮ǰ������ͷ
���أ�����֮�������ͷ
*****************************************/
CS *paixu_5(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(cur->kucun<cur->next->kucun)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}


/****************************************
�������������Ӻ�������6 
����: ���ս�������           
����������֮ǰ������ͷ
���أ�����֮�������ͷ
*****************************************/
CS *paixu_6(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
    if(cur->jinjia>cur->next->jinjia)
	{
     p=cur;q=cur->next;
     swap(p,q);
	}
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}
/****************************************
�������������Ӻ�������7 
����: ���մ��ۺ�ļ۸�����           
����������֮ǰ������ͷ
���أ�����֮�������ͷ
*****************************************/
CS *paixu_7(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
       if(cur->zhehou>cur->next->zhehou)
	   {
        p=cur;q=cur->next;
        swap(p,q);
	   }
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}


/****************************************
�������������Ӻ�������8
����: �����������򣨴�С����           
����������֮ǰ������ͷ
���أ�����֮�������ͷ
*****************************************/
CS *paixu_8(CS*head)
{
  CS*cur=head,*end=NULL,*p,*q;
  while(cur!=end)
  {
    while(cur->next!=end)
	{
      if(strcmp(cur->riqi,cur->next->riqi)>0)
	  {
        p=cur;q=cur->next;
        swap(p,q);
	  }
    cur=cur->next;
	}
 end=cur;
 cur=head;
  } 
return head;
}

/***********************************************
*����������������˵��Ӻ�������1
*���ܣ������û���Ҫѡ��ϵͳ�����ܣ�������Ʒ���ƣ���Ʒ�����ۼۣ��������ڣ���ţ���棬�ۿۣ�
*����������ǰ��ͷ�ڵ�
*����ֵ�����Ӻ��ͷ�ڵ�
***********************************************/
CS *paixucaidan(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**********************ѡ���޸Ĺ�������********************\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                1.������Ʒ���ƴ�С��������              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                2.������Ʒ��Ŵ�С��������              *\n");
		printf("\t\t*                                                        *\n");
	    printf("\t\t*                3.������Ʒ���ڴ�С��������              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                4.������Ʒ�ۿ۴Ӵ�С����              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                5.������Ʒ����С��������              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                6.������Ʒ���۴�С��������              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                7.������Ʒ�ۼ۴�С��������              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                ����.���ص�����ҳ��                     *\n");
		printf("\t\t**********************************************************\n");
	    printf("\t\t����������ѡ��:");
		scanf("%d",&choice);
		if(choice<1||choice>7)  break;
		switch(choice)
		{
		case 1:	head=paixu_1(head);show_1(head); break;
	    case 2: head=paixu_2(head);show_1(head); break;
     	case 3:	head=paixu_8(head);show_1(head); break;
		case 4:	head=paixu_4(head);show_1(head); break;
		case 5:	head=paixu_5(head);show_1(head); break;
		case 6:	head=paixu_6(head);show_1(head); break;
		case 7:	head=paixu_7(head);show_1(head); break;

		}
        if(baocun_xunwen())        
	    Save_2(head); 
	}
	return head;
}

/***********************************************
*���������˿�����˵��Ӻ�������2
*���ܣ������û���Ҫѡ��ϵͳ�����ܣ�������Ʒ���ƣ���Ʒ�ۼۣ��������ڣ���棬�ۿۣ�
*����������ǰ��ͷ�ڵ�
*����ֵ�����Ӻ��ͷ�ڵ�
***********************************************/
CS *paixucaidan_2(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**********************ѡ���޸Ĺ�������********************\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                1.������Ʒ���ƴ�С��������              *\n");
		printf("\t\t*                                                        *\n");
	    printf("\t\t*                2.������Ʒ���ڴ�С��������              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                3.������Ʒ�ۿ۴Ӵ�С����              *\n");
		printf("\t\t*                                                        *\n");
		printf("\t\t*                4.������Ʒ����С��������              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                5.������Ʒ�ۼ۴�С��������              *\n");
		printf("\t\t*                                                        *\n");
    	printf("\t\t*                ����.���ع˿���ҳ��                     *\n");
		printf("\t\t**********************************************************\n");
	    printf("\t\t����������ѡ��:");
		scanf("%d",&choice);
		if(choice<1||choice>5)  break;
		switch(choice)
		{
		case 1:	head=paixu_1(head);show_2(head); break;
     	case 2:	head=paixu_3(head);show_2(head); break;
		case 3:	head=paixu_4(head);show_2(head); break;
		case 4:	head=paixu_5(head);show_2(head); break;
		case 5:	head=paixu_7(head);show_2(head); break;
		}
	}
	return head;
}
