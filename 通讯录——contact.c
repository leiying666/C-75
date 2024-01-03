#include"contact.h"
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->date));
	ps->size = 0;
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满,无法创建。\n");
	}
	else
	{
		printf("输入名字：\n");
		scanf("%s", ps->data[ps->size].name);
		printf("输入年龄：\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("输入性别：\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("输入电话：\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("输入地址：\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%s%20s\n","名字","年龄","性别","电话","住址")；
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4s\t%5s\t%12s\t%s%20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
