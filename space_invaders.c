#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN

// clean the terminal
    void clea()
    {
    HANDLE                     hStdOut;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD                      count;
    DWORD                      cellCount;
    COORD                      homeCoords = { 0, 0 };

    hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
    if (hStdOut == INVALID_HANDLE_VALUE) return;
    if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
    cellCount = csbi.dwSize.X *csbi.dwSize.Y;
    if (!FillConsoleOutputCharacter(
    hStdOut,
    (TCHAR) ' ',
    cellCount,
    homeCoords,
    &count
    )) return;
    if (!FillConsoleOutputAttribute(
    hStdOut,
    csbi.wAttributes,
    cellCount,
    homeCoords,
    &count
    )) return;
    SetConsoleCursorPosition( hStdOut, homeCoords );
    }
    #endif
// clean the terminal
// random number generator
    int gen(){
        srand(time(0));
        int number = (rand() % (8 - 1 + 1)) + 1;
        return number;
    }
// random number generator  
int pun;
int main()
{
// variables
    int score=0;
    int always=0;
    int k = 0;
    int p = 0;
    int i = 0;
    int m = 1;
    int location=0;
    char a;
    int tabs;
    int bulletmake;
    int bulletpos;
    mun:
    pun=gen();

    char alien[3][7]={{'<','~','0','^','0','~','>'},
                     {' ','\\','^','^','^','/',' '},
                     {' ',' ','\\','^','/',' ',' '}};
    char spaceship[3][7]={{' ',' ',' ','^',' ',' ',' '},
                     {' ',' ','/',' ','\\',' ',' '},
                     {'<',',',',',',',',',',','>'}};
    char bullet[7]={' ',' ',' ','^',' ',' ',' ',};

//variables
while (always==0)
{
//the keypress detection happens here
    if (kbhit()!=0)
    {    
        a=getch();

    }
    if (a=='a')
    {
        location=location-1;
        goto label;
    }
    if (a=='d')
    {
        location=location+1;
        goto label;
    }
    if (a=='s')
    {
        if (location+1==pun)
        {
            goto mun;
        }
        else{
            goto label;
        }
        
    }
    
    label:
    a=0;
//the keypress detection happens here
// upper line where the alien is
    while (i<=2)
    {
    printf("\n");
        while (tabs<pun)
        {
            printf("\t");
            tabs++;
        }
        tabs=0;
    while (p <= 6)
        {
            printf("%c", alien[i][p]);
            p++;
        }
        p = 0;
        i++;
    }
    i=0;
// upper line where the alien is
// middle spaces
    while (m < 23)
    {
        printf("\n");
        m++;
    }
// middle spaces
// bottom line where spaceship is
    while (i <= 2)
    {
        printf("\n\t");
        if (location>=7)
        {
            location=7;
        }
        if (location<0)
        {
            location=0;
        }
        while (tabs<location)
        {
            printf("\t");
            tabs++;
        }
        tabs=0;
        if (location>=7)
        {
            location=7;
        }
        if (location<0)
        {
            location=0;
        }
        
        while (p <= 6)
        {
            printf("%c", spaceship[i][p]);
            p++;
        }
        p = 0;
        i++;
    }
// bottom line where spaceship is
    i=0;
    m=0;
    Sleep(70);
    clea();
    }
    return 0;
}