#include <stdio.h>
#include <conio.h>
main(){
clrscr();
int panjang;
int lebar;
int tinggi;
int volume;
int luas;
printf("menghitung luas:\n");
printf("panjang: ");
scanf("%i",&panjang);
printf("lebar: ");
scanf("%i",&lebar);
printf("tinggi: ");
scanf("%i",&tinggi);
volume=panjang*lebar*tinggi;
printf("jadi volume balok : %d\n", volume);
luas=(panjang*lebar)+(panjang*tinggi)+(lebar*tinggi);
printf("jadi luas permukaan balok:%d\n",2*luas);
getch();
return 0;


}