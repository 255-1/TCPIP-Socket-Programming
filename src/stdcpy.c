#include <stdio.h>
#define BUF_SIZE 3

int main()
{
    FILE *fp1, *fp2;
    char buf[BUF_SIZE];
    fp1 = fopen("../build/news.txt", "r");
    fp2 = fopen("../build/cpy.txt", "w");

    while(fgets(buf, BUF_SIZE, fp1)!=NULL)
        fputs(buf, fp2);
    fclose(fp1);
    fclose(fp2);

    return 0;
}