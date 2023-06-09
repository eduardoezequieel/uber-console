#include <iostream>
#include "Client.h"
#include "Driver.h"
#include "Taxi.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Driver::counter = 1;
int Taxi::counter = 1;


int main(int argc, char** argv) {
	// Crear una instancia de Driver con datos específicos
    Driver driver("John", "Smith", "1234567890", "9876543210", "555-1234");

    Taxi taxi(driver, "P123", "Tesla 15", 2012, "KB1012");
    
    taxi.print();
    
    
	return 0;
}