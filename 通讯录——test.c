#include"contact.h"
void menu()
{
	printf("***********通讯录***********");
	printf("******1.add      2.del   ***");
	printf("******3.search   4.modify***");
	printf("******5.show     6.sort  ***");
	printf("******0.exit             ***");
}
int main()
{
	struct Contact con;
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d\n", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
