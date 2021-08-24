#include"space_invaders.h"
// main fuction

int main(){
aloc=gen();
signal=0;
while (1)
{
    spmake(0,aloc);

    if (signal==0){
    midspaces(22);
    }
    if (signal==1){
    midspaceline(22);
    signal=0;
    }
    spmake(1,keyp());
    system("cls");
}
return 0;
}