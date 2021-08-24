#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
static int loca=0;
static int aloc=0;
static int signal=0;
int gen(){
        srand(time(0));
        int number = (rand() % (8 - 1 + 1)) + 1;
        return number;
    }
void tabspace(int spaces){
    int i=0;
    while(i<=spaces){
        printf("\t");
        i++;
    }
    i=0;
    }
void midspaces(int spaces){
    int i=0;
    while(i<=spaces){
        printf("\n");
        i++;
    }
    i=0;
}
char keyp(){
    char a;
    if (kbhit()!=0){    
        a=getch();
    if (a=='d'){
        loca++;
    }
    if (a=='a'){
        loca--;
    }
    if (a=='s')
    {
       signal=1;
       if(loca==aloc)
       {
       aloc=gen();

    }  }
    if (loca>=14)
    {
        loca=14;
    }
    if (loca<=0)
    {
        loca=0;
    }
    }
    return loca;
}
char spmake(int type,int location){
for (int line = 0; line < 3; line++)
{
    /* code */
    for (int i = 0; i < location; i++)
    {
        printf("\t");
    }
    if (type==0)
    {
        if (line==0)
        {
            printf("<~0^0~>");
        }
        if (line==1)
        {
            printf(" \\^^^/ ");
        }
        if (line==2)
        {
            printf("  \\^/  ");
        }
        printf("\n");
    }
    if (type==1)
    {
        if (line==0)
        {
            printf("   ^   ");
        }
        if (line==1)
        {
            printf("  / \\  ");
        }
        if (line==2)
        {
            printf("<,,,,,>");
        }
        printf("\n");
    }
    
}

}

void midspaceline(int space){
    int i=0;
    while(i<=space){
        tabspace(keyp()-1);
        printf("   |\n");
        i++;
    }
    i=0;
}