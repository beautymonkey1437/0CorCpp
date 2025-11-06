#include <stdio.h>
#include <string.h>

struct candidate
{
    int id;
    char name[30];
    char gender;
    unsigned votes;
};

int main()
{
    int n, i, j, opcode, id;
    char name[30];
    struct candidate candidates[100];
    printf("有几位候选人:");
    scanf("%d", &n);
    printf("输入%d位候选人信息(编号,姓名,性别):\n", n);
    for (i = 0; i < n; i++)
    {
        candidates[i].votes = 0u;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d%s %c", &candidates[i].id, candidates[i].name, &candidates[i].gender);
    }
    printf("开始投票:\n");
    int flag = 1;
    while (flag)
    {
        printf("投票(0 编号,1 姓名,10 结束):\n");
        scanf("%d", &opcode);
        switch (opcode)
        {
        case 0:
            scanf("%d", &id);
            for (j = 0; j < n; j++)
            {
                if (id == candidates[j].id)
                {
                    candidates[j].votes += 1;
                }
            }
            break;
        case 1:
            scanf("%s", name);
            for (j = 0; j < n; j++)
            {
                if (!strcmp(name, candidates[j].name))
                {
                    candidates[j].votes += 1;
                }
            }
            break;
        case 10:
            flag = 0;
            break;
        }
    }
    printf("投票结果:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d,%s,%c:%u票\n", candidates[i].id, candidates[i].name, candidates[i].gender, candidates[i].votes);
    }
    return 0;
}