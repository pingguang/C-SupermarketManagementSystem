/********************************************************************----------------------ƽ��
�������������Ӻ�������1 
���ܣ�����һ����Ʒ��Ϣ����ÿ��ֻ������һ����Ʒ��Ϣ(��֤��Ʒ����Ψһ)
����������֮ǰ������ͷ
���أ�����֮�������ͷ
**********************************************************************/
 CS*add_1(CS *head)
{
	CS * p=head;
	CS * pnew=NULL;
	char name[20];
	int choice;
chongfu:	printf("\n����������Ʒ����(��֤Ʒ��Ψһ):");
	fflush(stdin);
	gets(name);                                                        //������Ʒ����
	p=head; 
	while(p!=NULL)                                                     //��֤Ʒ��Ψһ
	{
		if(strcmp(p->pinming,name)==0)
			goto chongfu;
		p=p->next;
	}
	pnew = (CS *)malloc (1*sizeof(CS));  
    if (pnew == NULL)                                                  //�����½ڵ�ʧ��,�򷵻�
	{
        printf ("no enough memory!\n");
        return (NULL);
	 }
	strcpy(pnew->pinming,name);
        printf("���������Ʒ����:" );
        scanf("%f",&pnew->jinjia);
        printf("���������Ʒ�ۼ�:" );
        scanf("%f",&pnew->shoujia);
		while(1)
		{
        printf("���������Ʒ�ۿ�:" );  scanf("%f",&pnew->zhekou);
        if(pnew->zhekou>0&&pnew->zhekou<=1)  break;
		}
		printf("**************************��Ʒ����*****************************\n ");
		printf("#1.������Ʒ��  #2.ˮ��������   #3.�ľ���Ʒ��   #4.��ʳ��   #5.������\n ");
      	printf("��ѡ�����Ʒ����:");
jj:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(pnew->lei,"������Ʒ��");break;
		  case 2:strcpy(pnew->lei,"ˮ��������");break;
	      case 3:strcpy(pnew->lei,"�ľ���Ʒ��");break;
		  case 4:strcpy(pnew->lei,"��ʳ��");    break;
		  case 5:strcpy(pnew->lei,"������");    break;
		  default:printf("ѡ�����������ѡ����Ʒ����:");goto jj;;
		}
	    fflush(stdin);
        printf("���������Ʒ��������:");
		scanf("%s",pnew->riqi);
chong:	printf("���������Ʒ���:");
		scanf("%s",pnew->bianhao);
		p=head; 
	    while(p!=NULL)                                                     //��֤Ʒ��Ψһ
		{
	     	if(strcmp(p->bianhao,pnew->bianhao)==0)
			goto chong;
		p=p->next;
		} 
		printf("���������Ʒ���п��:");
        scanf("%d",&pnew->kucun);
		pnew->zhehou=(pnew->shoujia)*(pnew->zhekou);
	    p=head;
	    while(p->next!=NULL)
		p=p->next ;
	    p->next=pnew;
	    pnew->next=NULL;
	return head;
}


/********************************************************************-----------------������
�������������Ӻ�������2
���ܣ�����һ����Ʒ��Ϣ����ÿ��ֻ������һ����Ʒ��Ϣ(��֤��Ʒ���Ψһ)
����������֮ǰ������ͷ
���أ�����֮�������ͷ
**********************************************************************/
 CS*add_2(CS *head)
{
	CS * p=head;
	CS * pnew=NULL;
	char bianhao[20];
	int choice;
chongfu:	printf("\n��������ɣ��Ʒ���(��֤Ʒ���Ψһ):");
	fflush(stdin);
	gets(bianhao);                                                        //������Ʒ����
	p=head; 
	while(p!=NULL)                                                     //��֤Ʒ��Ψһ
	{
		if(strcmp(p->bianhao,bianhao)==0)
			goto chongfu;
		p=p->next;
	}
	pnew = (CS *)malloc (1*sizeof(CS));  
    if (pnew == NULL)                                                  //�����½ڵ�ʧ��,�򷵻�
	{
        printf ("no enough memory!\n");
        return (NULL);
	 }
	strcpy(pnew->bianhao,bianhao);
chong:   printf("���������Ʒ����:");
        scanf("%s",pnew->pinming);
    	p=head; 
	    while(p!=NULL)                                                     //��֤Ʒ��Ψһ
		{
	     	if(strcmp(p->pinming,pnew->pinming)==0)
			goto chong;
		p=p->next;
		}
        printf("���������Ʒ����:" );
        scanf("%f",&pnew->jinjia);
        printf("���������Ʒ�ۼ�:" );
        scanf("%f",&pnew->shoujia);
		while(1)
		{
        printf("���������Ʒ�ۿ�:" );  scanf("%f",&pnew->zhekou);
        if(pnew->zhekou>0&&pnew->zhekou<=1)  break;
		}
		printf("**************************��Ʒ����*****************************\n ");
		printf("#1.������Ʒ��  #2.ˮ��������   #3.�ľ���Ʒ��   #4.��ʳ��   #5.������\n ");
      	printf("��ѡ�����Ʒ����:");
jj:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(pnew->lei,"������Ʒ��");break;
		  case 2:strcpy(pnew->lei,"ˮ��������");break;
	      case 3:strcpy(pnew->lei,"�ľ���Ʒ��");break;
		  case 4:strcpy(pnew->lei,"��ʳ��");    break;
		  case 5:strcpy(pnew->lei,"������");    break;
		  default:printf("ѡ�����������ѡ����Ʒ����:");goto jj;;
		}
	    fflush(stdin);
        printf("���������Ʒ��������:");
		scanf("%s",pnew->riqi);
		printf("���������Ʒ���п��:");
        scanf("%d",&pnew->kucun);
		pnew->zhehou=(pnew->shoujia)*(pnew->zhekou);
	    p=head;
	    while(p->next!=NULL)
		p=p->next ;
	    p->next=pnew;
	    pnew->next=NULL;
	return head;
}


 /***********************************************
*�����������Ӳ˵��Ӻ���
*���ܣ������û���Ҫѡ��ϵͳ���ӹ��ܣ�������Ʒ���ƺ���Ʒ������ӣ�
*����������ǰ��ͷ�ڵ�
*����ֵ�����Ӻ��ͷ�ڵ�
***********************************************/
CS*addcaidan(CS*head)
{
    int choice;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t**************ѡ�����ӹ�������**************\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            1.������Ʒ��������            *\n");
		printf("\t\t*                                          *\n");
		printf("\t\t*            2.������Ʒ�������            *\n");
		printf("\t\t*                                          *\n");
    	printf("\t\t*            ����.���ص�����ҳ��           *\n");
		printf("\t\t********************************************\n");
	    printf("\t\t����������ѡ��:");
		scanf("%d",&choice);
		if(choice<1||choice>2)  break;
		switch(choice)
		{
		case 1:	head=add_1(head);show_1(head); break;
	    case 2: head=add_2(head);show_1(head); break;
		}
        if(baocun_xunwen())                       //�������ѯ��Ϊ���桱,�Ѹ���Ʒ��Ϣɾ�����浽�ļ���
	    Save_2(head); 
	}
	return head;
}
