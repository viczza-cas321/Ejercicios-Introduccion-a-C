//Precondiciones: recibo un C capital inicial, y lo multiplico por una ecuacion que incluye el numero de nios n, la tasa de interes x
//Postcondiciones: devuelve un monto final a cobrar
#include <stdio.h>
#include <math.h>
double calcMontoFinal(double capIni, int tasaInteres, int anios){
	return capIni*pow((1+(tasaInteres/100.0)), anios);
}
int main(){
	double montoFinal=calcMontoFinal(100,50,1);
	printf("Su monto final es de: %f", montoFinal);
	return 0;
}
