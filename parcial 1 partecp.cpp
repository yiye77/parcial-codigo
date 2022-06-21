//PRIMER PARCIAL 

#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

bool validar(char numero[])

{
    int i;
    for(i=0; i<strlen(numero); i++)
    {
        if(!(numero[i]>=48 && numero[i]<=57))
        {
            printf("Error en su codigo por favor solo digite numeros (Los codigos son numeros enteros) \n");
            return false;
        }
    }
    return true;
}
int main()
{
	
	 char codigo[20];
    bool valido=false;
    int N, resultado, add;
    
	do
	{
	resultado=0;
   

    do
    {
        cout<<"Digite el codigo de estudiante: \n";
        cin>>codigo;
        valido=validar(codigo);

    }
	
	while(valido==false);
	

    N=atoi(codigo);

    while (N>0){
	
add=N%10;
N=N/10;
resultado=resultado+add;

}



cout<<endl<<"El valor de la suma de los digitos de su codigo de estudiante es: " <<resultado;


   getch();
   
	}

while (resultado!=0);

return 0 ;
}
   
