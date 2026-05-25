// c programme to find volume and surface area of a cylinder
/*
name:stephen ngugi
reg no:bcs_01_0133/2026
*/

#include <stdio.h>
#define pi 3.142

int main() {
float radius;
float height;

printf("enterradius");
scanf("%d",radius);

printf("enterheight");
scanf("%f",height);

float volume =pi*radius*radius*height;
float surface_area =2 * pi*radius*(radius+height);

printf("radius: %.2f\n",radius);
printf("height: %.2f\n",height);
printf("volumeofcylinder:.2f\n",volume);
printf("surfaceareaofcylinder:%.2f\n",surface_area);

return 0;
}