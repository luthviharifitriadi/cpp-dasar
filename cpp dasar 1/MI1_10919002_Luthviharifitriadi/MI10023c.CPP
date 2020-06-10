#include <stdio.h>
#include <conio.h>
main(){
clrscr();
long int uang,sisa1,sisa2,sisa3,sisa4;
printf("mengkonverensikan uang:\n");
printf("masukan nominal Rp.");
scanf("%li",&uang);

sisa1=uang/50000;
if(sisa1>0)
uang=uang%50000;

sisa2=uang/20000;
if(sisa2>0);
uang=uang%20000;

sisa3=uang/10000;
if(sisa3>0);
uang=uang%10000;


sisa4=uang/5000;
if(sisa4>0);
uang=uang%5000;

printf("Rp.50000:%li lembar\n",sisa1);
printf("Rp.20000:%li lembar\n",sisa2);
printf("Rp.10000:%li lembar\n",sisa3);
printf("Rp.5000 :%li lembar\n",sisa4);

getch();
return 0;

}