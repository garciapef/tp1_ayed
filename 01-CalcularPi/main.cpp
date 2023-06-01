#include<iostream>
#include<cmath>

using namespace std;

double calcularPi(){
	
	double Pi = 3.14159265;
	double calculoPi = 0;
	double sumatoria = 0;
	double diferencia = 0.000001;
    int i = 0;
    

    do
    {
    	
        sumatoria = pow(-1,i)/(2*i + 1);
        calculoPi += sumatoria;
        i++;
        
    } while (abs((calculoPi*4)-Pi) > diferencia);

    return (calculoPi*4);
	
}

int main()
{
	
    cout.precision(7);
    cout<<"El valor del calculo de Pi = "<< calcularPi();
    return 0;
    
}

