#include <stdio.h>
#include <conio.h>
main(){
clrscr();
int sisi;
int volume;
int luaspermukaan;
printf("menghitung volume kubus\n");
printf("sisi1:");
scanf("%i",&sisi);
printf("sisi2:%i\n",sisi);
printf("sisi3:%i\n",sisi);
volume=sisi*sisi*sisi;
printf("jadi volume kubus:%d cm3\n",volume);
printf("cara menghitung luas permukaan kubus\n");
printf("sisi1: %i\n",sisi);
printf("sisi2: %i\n",sisi);
luaspermukaan=6*sisi*sisi;
printf("jadi luas permukaan kubus adalah %d cm2\n",luaspermukaan);


getch();
return 0;


}