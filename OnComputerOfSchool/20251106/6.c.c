// 通讯录，结构体，文件操作
// 姓名，手机号，微信号，QQ号
// 输入，显示，添加，查找，存入文件

#include <stdio.h>
#include <string.h>
struct person
{
    char name[20];
    char phone[20];
    char wechat[20];
    char qq[20];
};

void input(struct person *p) // input(&person1);
{
    printf("请输入姓名 手机号 微信号 QQ号(以空格分隔)：");
    scanf("%s %s %s %s", p->name, p->phone, p->wechat, p->qq);
}

void display(struct person p) // display(person1);
{
    printf("姓名：%s 手机号：%s 微信号：%s QQ号：%s\n", p.name, p.phone, p.wechat, p.qq);
}

void add(struct person p) // add(person1);
{
    FILE *fp = fopen("address_book.txt", "a"); // append
    if (fp != NULL)
    {
        fprintf(fp, "%s %s %s %s\n", p.name, p.phone, p.wechat, p.qq);
        fclose(fp);
    }
    else
    {
        printf("无法打开文件\n");
    }
}
// 姓名
void search_name(char name) // search("张三");
{
    FILE *fp = fopen("address_book.txt", "r");
    struct person p;
    int found = 0;
    if (fp != NULL)
    {
        while (fscanf(fp, "%s %s %s %s", p.name, p.phone, p.wechat, p.qq) != EOF)
        {
            if (strcmp(p.name, name) == 0)
            {
                display(p);
                found = 1;
                break;
            }
        }
        fclose(fp);
        if (!found)
        {
            printf("未找到联系人\n");
        }
    }
    else
    {
        printf("无法打开文件\n");
    }
}
// 手机号
void search_phone(char phone) // search("19900001111");
{
    FILE *fp = fopen("address_book.txt", "r");
    struct person p;
    int found = 0;
    if (fp != NULL)
    {
        while (fscanf(fp, "%s %s %s %s", p.name, p.phone, p.wechat, p.qq) != EOF)
        {
            if (strcmp(p.phone, phone) == 0)
            {

                found = 1;
                display(p);
                break;
            }
        }
        fclose(fp);
        if (!found)
        {
            printf("未找到联系人\n");
        }
    }
    else
    {
        printf("无法打开文件\n");
    }
}
// 微信
void search_wechat(char wechat) // search("qwerty");
{
    FILE *fp = fopen("address_book.txt", "r");
    struct person p;
    int found = 0;
    if (fp != NULL)
    {
        while (fscanf(fp, "%s %s %s %s", p.name, p.phone, p.wechat, p.qq) != EOF)
        {
            if (strcmp(p.wechat, wechat) == 0)
            {
                display(p);
                found = 1;
                break;
            }
        }
        fclose(fp);
        if (!found)
        {
            printf("未找到联系人\n");
        }
    }
    else
    {
        printf("无法打开文件\n");
    }
}
// QQ
void search_qq(char qq) // search("3000010000");
{
    FILE *fp = fopen("address_book.txt", "r");
    struct person p;
    int found = 0;
    if (fp != NULL)
    {
        while (fscanf(fp, "%s %s %s %s", p.name, p.phone, p.wechat, p.qq) != EOF)
        {
            if (strcmp(p.qq, qq) == 0)
            {
                display(p);
                found = 1;
                break;
            }
        }
        fclose(fp);
        if (!found)
        {
            printf("未找到联系人\n");
        }
    }
    else
    {
        printf("无法打开文件\n");
    }
}

void display_all()
{
    FILE *fp = fopen("address_book.txt", "r");
    struct person p;
    if (fp != NULL)
    {
        while (fscanf(fp, "%s %s %s %s", p.name, p.phone, p.wechat, p.qq) != EOF)
        {
            display(p);
        }
        fclose(fp);
    }
    else
    {
        printf("无法打开文件\n");
    }
}

int main()
{
    struct person temp;
    int opcode;
    int search_code;
    while (1)
    {
        printf("1.添加联系人 2.查找联系人 3.显示所有通讯录 4.退出\n"); // 1添加联系人包括输入、存入文件
        printf("请输入操作码：");
        scanf("%d", &opcode);
        switch (opcode)
        {
        case 1:
            input(&temp);
            add(temp);
            break;
        case 2:

            char key[20];
            printf("按1.姓名 2.手机号 3.微信号 4.QQ号查找联系人：");
            scanf("%d", &search_code);
            printf("请输入关键字：");
            scanf("%s", key);
            switch (search_code)
            {
            case 1:
                search_name(key);
                break;
            case 2:
                search_phone(key);
                break;
            case 3:
                search_wechat(key);
                break;
            case 4:
                search_qq(key);
                break;
            default:
                printf("无效的查找码\n");
                break;
            }
            break;
        case 3:
            display_all();
            break;
        case 4:
            return 0;
        default:
            printf("无效的操作码\n");
            break;
        }
    }
    return 0;
}