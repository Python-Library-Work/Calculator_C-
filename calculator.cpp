/*

-- 2017 (c) Python Works (Andrew Samuel)
- Designed to Linux Console
x--x--x--x--x--x--x--x--x--x--x--x--x--x--x

*/

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

#define ERROR_RETURN 10;
#define NOT_ERROR 20;

using namespace std;

int mais_shell() {

	int main1;
	main1 = 1;
	while (main1<100) {
		int num1, num2, rep1;
		cout << "---------- [ Calculator MODE(MAIS) ] ------------" << endl;
		cout << "Numero (1): ";
		cin >> num1;
		cout << "Numero (2): ";
		cin >> num2;
		rep1 = num1 + num2;
		cout << "RESULTADO: " << rep1 << endl;
		cout << "Repeat [y,N]: ";
		string dec;
		cin >> dec;
		if(dec=="n") {
			cout << "OK." << endl;
			break;
		}
		else {
			cout << "OK. MORE." << endl;
		}
	}
	return NOT_ERROR;
}

int menos_shell() {
	
	int main1;
	main1 = 1;
	while (main1<100) {
		int num1, num2, rep1;
		cout << "---------- [ Calculator MODE(MENOS) ] ------------" << endl;
		cout << "Numero (1): ";
		cin >> num1;
		cout << "Numero (2): ";
		cin >> num2;
		rep1 = num1 - num2;
		cout << "RESULTADO: " << rep1 << endl;
		cout << "Repeat [y,N]: ";
		string dec;
		cin >> dec;
		if(dec=="n") {
			cout << "OK." << endl;
			break;
		}
		else {
			cout << "OK. MENOS." << endl;
		}
	}
	return NOT_ERROR;

}

int vezes_shell() {
	
	int main1;
	main1 = 1;
	while (main1<100) {
		int num1, num2, rep1;
		cout << "---------- [ Calculator MODE(VEZES) ] ------------" << endl;
		cout << "Numero (1): ";
		cin >> num1;
		cout << "Numero (2): ";
		cin >> num2;
		rep1 = num1 * num2;
		cout << "RESULTADO: " << rep1 << endl;
		cout << "Repeat [y,N]: ";
		string dec;
		cin >> dec;
		if(dec=="n") {
			cout << "OK." << endl;
			break;
		}
		else {
			cout << "OK. VEZES. QUE ME FALTAM?" << endl;
		}
	}
	return NOT_ERROR;

}

int div_shell() {
	
	int main1;
	main1 = 1;
	while (main1<100) {
		int num1, num2;
		double rep1;
		cout << "---------- [ Calculator MODE(DIVISÃO) ] ------------" << endl;
		cout << "Numero (1): ";
		cin >> num1;
		cout << "Numero (2): ";
		cin >> num2;
		rep1 = num1 / num2;
		cout << "RESULTADO: " << rep1 << endl;
		cout << "Repeat [y,N]: ";
		string dec;
		cin >> dec;
		if(dec=="n") {
			cout << "OK." << endl;
			break;
		}
		else {
			cout << "OK. MORE." << endl;
		}
	}
	return NOT_ERROR;

}

int main() {
	int main;
	main = 1;
	while(main<100) {
		system("clear");
		string modo;
		cout << "Não coloque letras na calculadora." << endl;
		cout << "" << endl;
		cout << "--- Calculator (1.0.000) ---" << endl;
		cout << "----------------------------" << endl;
		cout << "Tipos: mais(+), menos(-), vezes(x), div(:), exit" << endl;
		cout << "Insert you mode: ";
		cin >> modo;
		cout << "loading a modes..." << endl;
		
		if(modo=="mais") {
			cout << "Loaded module: mais." << endl;
			mais_shell();
			//break;
		}
		else if(modo=="menos") {
			cout << "Loaded Modules: menos" << endl;
			menos_shell();
			//break;
		}
		else if(modo=="vezes") {
			cout << "Loaded modules: vezes" << endl;
			vezes_shell();
			//break;
		}
		else if(modo=="div") {
			cout << "Loaded modules: div" << endl;
			div_shell();
			//break;
		}
		else if(modo=="") {
			cout << "" << endl;
		}
		else if(modo=="exit") {
		    cout << "exiting." << endl;
		    break;
		}
		else {
			cout << "Command undertemined." << endl;
		}
	}
	return NOT_ERROR;
}
