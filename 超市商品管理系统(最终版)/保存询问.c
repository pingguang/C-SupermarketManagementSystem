/****************************************
函数名：baocun_xunwen
功能：保存询问子函数，
参数：无
返回:返回询问结果
****************************************/
int  baocun_xunwen()
{
	char ch=0;
	printf("\n将结果保存到文件吗？（Y/N or y/n）\n");
	fflush(stdin);
	ch=getchar();
	if(ch=='Y'||ch=='y')
		return 1;
	else
		return 0;
}