#include "Operations.h"
#include <math.h>

int addition(int a, int b)
{
	int resultat;

	resultat = a + b;

	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;

	resultat = a - b;

}
int division(int a, int b)
{
    return(a/b);
}

int multiplication(int a,int b)
{
    return(a*b);
}

int exposant(int nb,int exp)
{
    return(pow(nb,exp));
}

