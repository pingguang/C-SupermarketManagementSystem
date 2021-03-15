/*********************************
º¯ÊýÃû£ºÏµÍ³ÑÕÉ«×Óº¯Êý
**********************************/
void xitongyanse()
{
    int choose;
    system("cls"); 
	printf("\t\t--------------ÏµÍ³ÑÕÉ«-----------\n\n");
	printf("\t\t            1.°×µ×À¶×Ö           \n\n");
	printf("\t\t            2.°×µ×ºÚ×Ö           \n\n");
	printf("\t\t            3.°××Ö·Ûºì           \n\n");
	printf("\t\t            4.×Ïµ×°××Ö           \n\n");
	printf("\t\t            5.À¶µ×»Æ×Ö           \n\n");
	printf("\t\t            6.»Æµ×ºÚ×Ö           \n\n");
	printf("\t\t            7.ºìµ××Ï×Ö           \n\n");
	printf("\t\t---------------------------------\n\n");
    printf("ÇëÊäÈëÄúµÄÑ¡Ôñ£º");
	scanf("%d",&choose);
	switch(choose)
	{
	case 1:system("color f1"); break;		
    case 2:system("color f0"); break;		
    case 3:system("color 7c"); break;		
    case 4:system("color 5f"); break;		
    case 5:system("color 1e"); break;
	case 6:system("color 60"); break;
    case 7:system("color c5"); break;		
	}
}
