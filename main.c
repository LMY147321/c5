#include <stdio.h>
int index = 0;
char arr[1024];

int isMingan(char x)
{
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()

{

    int coude = 0;
    printf("guanliminganzifuxitong\n");
    while (1)
    {
        printf("1----tianjia\n");
        printf("2----shanchuzuihouyigeminganzifu\n");
        printf("3----chakansuoyouminganzifu\n");
        printf("4----tihuan\n");
        printf("5----tuichu\n");
        arr[index] = 0;
        index++;
        printf("xuanzexiangyinggongneng\n");
        scanf("%d", &coude);
    }
    if (coude == 1)
        {
            char a;
            printf("qingshuruyaotianjiademinganzifu\n");
            scanf("%c", &a);
            scanf("%c", &a);
            printf("tianjiachenggong,dianjihuichejixu\n");

            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
    return 0;

}