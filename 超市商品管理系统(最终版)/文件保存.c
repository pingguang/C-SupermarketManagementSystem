/************************************************-----------------------------周畅
*函数名：Save——1（保存）
*功能：将链表（顾客账号数据）保存在文件
*返回值：NULL
*************************************************/
void Save_1(US *head,char a[])								
{
	FILE *fp;		                             //定义一个文件指针，接收fopen的返回值，用于最后的关闭文件		
    US* t ;			                             //定义一个指针，从头到尾遍历一遍单链表，向文件中写入
    if ((fp=fopen("zhanghao.txt","w"))==NULL)     //打开文件来写入
    {
         exit(0);                       //输入任意键进入下一步   		                         //退出
    }
    t=head;			                             //把头指针赋给t，让它从头开始
    while(t!=NULL)                               //只要t指针不为空，即等于链表没有结束
    {
       fwrite(t,sizeof(US),1,fp);	             //把链表写入文件中
       t=t->next;	                             //指针后移
    }
    fclose(fp);	 //把文件关闭
	if(strcmp(a,"zhuce")==0)    printf("\n恭喜您注册成功！！！！\n");
   	else if(strcmp(a,"xiugai")==0)   printf("\n恭喜您修改成功！！！！\n");
    else if(strcmp(a,"zhuxiao")==0)  printf("\n恭喜您账号注销成功！！！！\n");
    else if(strcmp(a,"wanshan")==0)  printf("\n恭喜您账号信息完善成功！！！！\n");
    else if(strcmp(a,"chongzhi")==0)  printf("\n恭喜您充值成功！！！！\n");
    else if(strcmp(a,"goumai")==0)  printf("\n恭喜您购买成功！！！！\n");
}



/************************************************-----------------------------周畅
*函数名：Save——2（保存）（保存商品信息）
*功能：将链表（数据）保存在文件
*返回值：NULL
*************************************************/
void Save_2(CS *head)								
{
	FILE *fp;		                             //定义一个文件指针，接收fopen的返回值，用于最后的关闭文件		
    CS* t ;			                             //定义一个指针，从头到尾遍历一遍单链表，向文件中写入
    if ((fp=fopen("chaoshi.txt","w"))==NULL)     //打开文件来写入
    {
        printf("打开文件失败！\n");
        getchar();                               //输入任意键进入下一步
        exit(0);		                         //退出
    }
    t=head;			                             //把头指针赋给t，让它从头开始
    while(t!=NULL)                               //只要t指针不为空，即等于链表没有结束
    {
       fwrite(t,sizeof(CS),1,fp);	             //把链表写入文件中
       t=t->next;	                             //指针后移
    }
    fclose(fp);	                             	 //把文件关闭
    printf("\n成功\n");

}
