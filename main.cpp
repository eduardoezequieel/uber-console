#include <iostream>
#include "Client.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Client::contador = 1;


int main(int argc, char** argv) {
	Client client;
	
	client.setFirstName("Eduardo");
	client.setLastName("Juan");
	
	client.print();
	return 0;
}