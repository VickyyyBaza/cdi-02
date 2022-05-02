#include <stdio.h>
int main (void) {

    char billete1;

    char billete5;

    char billete10;

    char billete20;

    char billete50;

    char billete100;

    int monto;
    printf ("Ingrese su monto a retirar: ");
    scanf ("%d",&monto);

    if (monto<20) {
        printf ("Monto invalido, ingrese un monto superior.");
        return 1;
    }

    else if(monto>5000){
        printf("Monto invalida, ingrese un monto menor");
        return 2;
    }

else {
    while (monto>=100) {
    monto = monto - 100;
    billete100++;
    }


  while (monto>=50) {
    monto = monto - 50;
    billete50++;
    }

  while (monto>=20) {
    monto = monto - 20;
    billete20++;
    }

      while (monto>=10) {
    monto = monto - 10;
    billete10++;
    }

  while (monto>=5) {
    monto = monto - 5;
    billete5++;
    }

  while (monto>=1) {
    monto = monto - 1;
    billete1++;
    }

    printf ("Monto valido\n");

    printf ("billete de 1: %d\n", billete1);

    printf ("billete de 5: %d\n", billete5);

    printf ("billete de 10: %d\n", billete10);

    printf ("billete de 20: %d\n", billete20);

    printf ("billete de 50: %d\n", billete50);

    printf ("billete de 100: %d\n", billete100);
}
 return 0;
} 
