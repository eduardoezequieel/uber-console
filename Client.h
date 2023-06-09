#include <iostream>
using namespace std;

class Client {
	private:
		int id;
		string firstName;
		string lastName;
		static int contador;
		
	public:
		int getId() {
			return this -> id;
		}
		
		string getFirstName() {
			return this -> firstName;
		}
		
		string getLastName() {
			return this -> lastName;
		}
		
		void setFirstName(string firstName) {
			this -> firstName = firstName;
		}
		
		void setLastName(string lastName) {
			this -> lastName = lastName;
		}
		
		Client(string firstName, string lastName) {
			id = contador;
			this -> firstName = firstName;
			this -> lastName = lastName;
			contador++;
		}
		
		Client() {
			id = contador;
			contador++;
		}
		
		void print() {
			cout << id << ". " << firstName << " " << lastName << endl;
		}
};