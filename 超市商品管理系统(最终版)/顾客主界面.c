/***********************************************
*��������zhucaidan����2(�˿�ѡ�����˵�����)
*���ܣ������û���Ҫѡ��ϵͳ����
*����ֵ��NULL
***********************************************/
void zhucaidan_2(CS*head,int choice,char jz[])
{
     switch(choice)
	 {
     case 1:
		 head=Read_2();
		 show_2(head);  //��ʾ��Ʒ��Ϣ
       	break;
     case 2:
		 head=Read_2();
		 chaxuncaidan_2(head);
		 getchar();
		 break;
     case 3:
		 head=Read_2();
		 head=paixucaidan_2(head);
		 break;
	 case 4:
		 head=Read_2();
		 jinrituijian(head);
		 jixu();
		 break;
	 case 5:
		 gerenxinxi(jz);
		 break;
	 case 6:
		 jiaoyixinxi(jz);
		 break;
	case 7:
		 moneychongzhi(jz);
		 break;
	case 8:
		 moneychaxun(jz);
		 break;
	 }
		 
}

/*********************************
���������˿��Ӻ���
**********************************/
void customer(char jz[])
{
   CS*hh=NULL;
   int choice;
   hh=Read_2();
   while(1)
    {
        system("cls");
        printf("\n----------------------�Ĵ�����Ʒ����ϵͳ�˿�ҳ��---------------------\n");
        printf("                           1 ��ʾ��Ʒ��Ϣ\n");
        printf("                           2 ������Ʒ��Ϣ\n");
        printf("                           3 ������Ʒ��Ϣ\n");
		printf("                           4 �����Ƽ�    \n");
		printf("                           5 ������Ϣ    \n");
    	printf("                           6 �ҵĹ��ｻ��\n");
		printf("                           7 ����ֵ    \n");
		printf("                           8 ����ѯ    \n");
        printf("                        ���� �˳�������Ʒ����ϵͳ�˿���ҳ��\n");
	    printf("\n-----------------------------------------------------------------------\n\n");
        printf("���������ѡ��:");
        scanf("%d",&choice);
	    if(choice<1||choice>8) break;
        zhucaidan_2(hh,choice,jz);
   }
}
