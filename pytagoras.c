// Small Code to calculate the right triangle.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void usage(char *program_name) {
	printf("Usage:\t pyt <a> <b> <c>\nDeclare the variable you are looking for as '0'.\n");
	exit(1);
}

char check0(float a, float b, float c){
	char check = 'x';
	if(a==0) check = 'a';
	if(b==0) check = 'b';
	if(c==0) check = 'c';	
	if(check == 'x'){
		printf("Input Error, check usage!\n");
		exit(1);
	}
	return(check);
}



int main(int argc, char *argv[]) {

float a, b, c, sum, alpha, beta, sinalpha, sinbeta, p, q, h, flaeche, u;
if(argc != 4) usage(argv[0]);

a = atof(argv[1]); //ascii to summand
b = atof(argv[2]);
c = atof(argv[3]);
char check = check0(a, b, c);
//printf("%f, %f, %f\n%c\n\n", a, b, c, check);
if(check=='a') a = sqrt((c*c) - (b*b));
if(check=='b') b = sqrt((c*c) - (a*a));
if(check=='c') c = sqrt((a*a) + (b*b));
u = a+ b + c;
flaeche = (a*b)/2;
q = (a*a)/c;
//printf("%f - %f\n",c, q );
p = c-q;
//printf("%f\n", p);
h = sqrt(p*q);
sinalpha = a/c;
alpha = asin(sinalpha);
alpha *= 180/3.1415926535;
sinbeta = b/c;
beta = asin(sinbeta);
beta *= 180/3.1415926535;
//printf("a = %f\nb = %f\nc = %f\n", a, b, c);

//printf:
printf("#######################\n");
//printf("a = %f\nb = %f\nc = %f\nalpha = %f\nbeta = %f\nsinus alpha = %f\nsinus beta = %f\np = %f\nq = %f\nh = %f\nflaecheninhalt = %f\n", a, b, c, alpha, beta, sinalpha, sinbeta, p, q, h, flaeche);
printf("a = %f\tp = %f\nb = %f\tq = %f\nc = %f\th = %f\n", a, p, b, q, c, h);
printf("#######################\n");
printf("A = %f\tu = %f\n", flaeche, u );
printf("#######################\n");
printf("alpha = %f\tsinalpha = %f\nbeta  = %f\tsinbeta  = %f\n", alpha, sinalpha, beta, sinbeta);
printf("#######################\n");
}

