#include <stdio.h>
int main ()
	{
	float km,milla,yarda,feet;
	printf ("Introduce una distancia en kilometros\n");
	scanf ("%f",&km);
	milla=km/1.6;
	yarda=km*100000/91.44;
	feet=km*100000/30.48;
	printf ("Esta es la distancia en millas:\n" "%.3f\n", milla);
	printf ("Esta es la distancia en yardas:\n" "%.3f\n", yarda);
	printf ("Esta es la distancia en pies:\n" "%.3f\n", feet);
	return 0;
	}
