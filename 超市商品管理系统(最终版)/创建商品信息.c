/***********************************************-----------------------------ƽ��
*��������Create��������
*���ܣ�����һ�������������ݷ����������� 
*����ֵ��CS *���ṹ������ͷ�ڵ�ָ�룩
***********************************************/
CS*Create()
{
    CS*pnew,*tail,*head,*p;	
	int choice;
    head=tail=pnew=p=NULL;

    while(1)
    { 
		pnew=(CS*)malloc(1*sizeof(CS));
        if(pnew==NULL)
        {
            printf("no enough memory");
            return NULL;
        }
        pnew->next=NULL;
zz: printf("��������Ʒ����(����#ʱ����¼��):");
        scanf("%s",pnew->pinming);

        if(strcmp(pnew->pinming,"#")==0 )  break;
        p=head;
        while(p!=NULL)
		{
		if(strcmp(p->pinming,pnew->pinming)==0)
				{
					printf("����Ʒ�������ظ��ˣ������������룡��\n");
					goto zz;
				}
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
ff:scanf("%d",&choice);
		switch(choice)
		{
		  case 1:strcpy(pnew->lei,"������Ʒ��");break;
		  case 2:strcpy(pnew->lei,"ˮ��������");break;
	      case 3:strcpy(pnew->lei,"�ľ���Ʒ��");break;
		  case 4:strcpy(pnew->lei,"��ʳ��");    break;
		  case 5:strcpy(pnew->lei,"������");    break;
		  default:printf("ѡ�����������ѡ����Ʒ����:");goto ff;
		}
	    fflush(stdin);
        printf("���������Ʒ��������:");
        scanf("%s",pnew->riqi);
cc: printf("���������Ʒ���:");
        scanf("%s",pnew->bianhao);
		p=head;
        while(p!=NULL)
		{
		   if(strcmp(p->pinming,pnew->pinming)==0)
		   {
		    	printf("����Ʒ��������ظ��ˣ������������룡��\n");
				goto cc;
		   }
				p=p->next;
		}
		printf("���������Ʒ���п��:");
        scanf("%d",&pnew->kucun);
    	pnew->zhehou=(pnew->shoujia)*(pnew->zhekou);
        if(head==NULL)
        {
            head=pnew;
            tail=pnew;
        }
        else
        {
            tail->next=pnew;
            tail=pnew;
        }
    }
    tail->next=NULL;    
    return head;
}