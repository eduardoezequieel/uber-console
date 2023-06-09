#include <iostream>
#include "Client.h"
#include "Driver.h"
#include "Taxi.h"
#include "Travel.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Travel::counter = 1;
int Driver::counter = 1;
int Client::counter = 1;
int Taxi::counter = 1;



int main(int argc, char** argv) {
	Client client("Eduardo", "Lopez");
	Driver driver("John", "Doe", "123456789", "111111", "77609090");
    Taxi taxi(driver, "P123", "Tesla 15", 2012, "KB1012");
    
    Taxi taxi2(driver, "P123", "Tesla 15", 2012, "KB1012");
    
    Travel travel(client, taxi, 10.50, "Mejicanos", "Santa Tecla");
    
    travel.print();
	return 0;
}