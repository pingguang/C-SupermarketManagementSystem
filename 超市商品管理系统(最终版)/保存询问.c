/****************************************
��������baocun_xunwen
���ܣ�����ѯ���Ӻ�����
��������
����:����ѯ�ʽ��
****************************************/
int  baocun_xunwen()
{
	char ch=0;
	printf("\n��������浽�ļ��𣿣�Y/N or y/n��\n");
	fflush(stdin);
	ch=getchar();
	if(ch=='Y'||ch=='y')
		return 1;
	else
		return 0;
}