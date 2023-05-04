#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int sen;
	int uh;
	int pts;
	int uas;
	float n1;
	float n2;
	float n3;
	float n4;
	float akhr;
	cout <<"================================================"<< endl;
	cout <<"\tPROGRAM MENCARI NILAI AKHIR"<< endl;
	cout <<"================================================"<< endl;
	cout <<"Input Nilai Absen : ";
	cin >> sen;
	cout <<"Input Nilai UH : ";
	cin >> uh;
	cout <<"Input Nilai PTS : ";
	cin >> pts;
	cout <<"Input Nilai UAS : ";
	cin >> uas;

	n1 = (0.1*sen);
	n2 = (0.4*uh);
	n3 = (0.2*pts);
	n4 = (0.3*uas);

    akhr = n1 + n2 + n3 + n4;

    if(akhr >= 80 ){
    	system("cls");
    	cout <<"==========================================="<< endl;
    	cout <<"\tHASIL YG DI DAPAT" << endl;
    	cout <<"==========================================="<< endl;
    	cout << "Nilai Akhir : "<< akhr << endl;
    	cout <<"Nilai Huruf : A"<< endl;
    	cout <<"Status : Lulus" << endl;
    	cout <<"==========================================="<< endl;
    } 
    else if(akhr >= 70){
    	system("cls");
    	cout <<"==========================================="<< endl;
    	cout <<"\tHASIL YG DI DAPAT" << endl;
    	cout <<"==========================================="<< endl;
    	cout << "Nilai Akhir : "<< akhr << endl;
    	cout <<"Nilai Huruf : B"<< endl;
    	cout <<"Status : Lulus" << endl;
    	cout <<"==========================================="<< endl;
    }
    else if(akhr >= 60){
    	system("cls");
    	cout <<"==========================================="<< endl;
    	cout <<"\tHASIL YG DI DAPAT" << endl;
    	cout <<"==========================================="<< endl;
    	cout << "Nilai Akhir : "<< akhr << endl;
    	cout <<"Nilai Huruf : C"<< endl;
    	cout <<"Status : Tidak Lulus" << endl;
    	cout <<"==========================================="<< endl;
    }
    else if(akhr >= 50){
    	system("cls");
    	cout <<"==========================================="<< endl;
    	cout <<"\tHASIL YG DI DAPAT" << endl;
    	cout <<"==========================================="<< endl;
    	cout << "Nilai Akhir : "<< akhr << endl;
    	cout <<"Nilai Huruf : D"<< endl;
    	cout <<"Status : Tidak Lulus" << endl;
    	cout <<"==========================================="<< endl;
    } else {
    	system("cls");
    	cout <<"==========================================="<< endl;
    	cout <<"\tHASIL YG DI DAPAT" << endl;
    	cout <<"==========================================="<< endl;
    	cout << "Nilai Akhir : "<< akhr << endl;
    	cout <<"Nilai Huruf : E"<< endl;
    	cout <<"Status : Tidak Lulus" << endl;
    	cout <<"==========================================="<< endl;
    }

getch();

	return 0;
}

