#include <iostream>
#include <iomanip>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::setw;
using std::fixed;
using std::setprecision;

int leeNumber();

int main(int argc, char*argv[]){
	const int ancho = 4;
	const int largo = 4;
	//A=alto	B=bajo	M=morado	N=negra
	//R=rednda	C=Cuadrada	H=hueca	S=solida

	string piezas[16]={"AMRH","AMRS","AMCH","AMCS","ANRH","ANRS","ANCH","ANCS","BMRH","BMRS","BMCH","BMCS","BNRH","BNRS","BNCH","BNCS"};
	string tablero[16]={""};
	int piezas_disponibles[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	// si no hay piezas disponibles
	int number=0;
	number=leeNumber();



	double promedioAlumnos[ALUMNOS] = {0.0};

	// Lectura de Notas
	for (int alumno = 0; alumno < ALUMNOS; alumno++){
		cout << "Notas del Alumno " << alumno + 1 << endl;
		for (int clase = 0; clase < CLASES; clase++){
			//cout << "\tClase " << clase << ": ";
			notas[alumno][clase] = leaNota(clase+1);
		}
	}
	// Calculo de Promedio de Alumnos
	for (int alumno = 0; alumno < ALUMNOS; alumno++){
		for (int clase = 0; clase < CLASES; clase++){
			promedioAlumnos[alumno] += notas[alumno][clase];
		}
		promedioAlumnos[alumno] /= CLASES;
	}
	cout << endl;
	// Impresion Bonita de Notas
	for (int alumno = 0; alumno < ALUMNOS; alumno++){
		for (int clase = 0; clase < CLASES; clase++){
			cout << setw(9) << fixed << setprecision(2) << notas[alumno][clase];
		}
		cout << setw(9) << fixed << setprecision(2) << promedioAlumnos[alumno];
		cout << endl;
	}
	/*
	for (int alumno = 0; alumno < ALUMNOS; alumno++){
		cout << setw(9) << fixed << setprecision(2) << promedioAlumnos[alumno];
	}
	cout << endl << endl;
	*/


	return 0;
}
int leeNumber(){
	int  number= 0;
	do{
		cout << "\t Ingrese Posicion : ";
		cin >> number;
		if (number < 1 || number > 16)
			cerr << "Numero no valido rango de 1-16" << endl;
		else
			break;
	}while (1);
	return number;
}
