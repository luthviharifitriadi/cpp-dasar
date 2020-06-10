#include <stdio.h>
#include <conio.h>
main(){
clrscr();
int alas;
int tinggi;
printf("cara menghitung luas segitiga menggunakan cpp:\n");
printf("masukan nilai alas  : ");
scanf("%i", &alas);
printf("masukan nilai tinggi: ");
scanf("%i", &tinggi);
printf("jadi luas segitiga:%i cm2\n",alas*tinggi/2);
printf("cara menghitung keliling segitiga menggunakan cpp:\n");
printf("sisi 1:%i\n",alas);
printf("sisi 2:%i\n",alas);
printf("sisi 3:%i\n",alas);
printf("jadi keliling segitiga:%i cm\n",alas+alas+alas);

getch();

}