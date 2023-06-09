#include <iostream>
using namespace std;

class Client {
	private:
		int id;
		string firstName;
		string lastName;
		static int counter;
		
	public:
		// Params constructor
		Client(const string& firstName, const string& lastName) :
		id(counter),
		firstName(firstName),
		lastName(lastName) {
	        id = counter;
	        this->firstName = firstName;
	        this->lastName = lastName;
	        counter++;
	    }
		
		// Getters		
		int getId() const {
        	return id;
	    }
	
	    string getFirstName() const {
	        return firstName;
	    }
	
	    string getLastName() const {
	        return lastName;
	    }
		
		// Setters
		void setFirstName(const string& firstName) {
        	this->firstName = firstName;
	    }
	
	    void setLastName(const string& lastName) {
	        this->lastName = lastName;
	    }
		
		void print() {
			cout << id << ". " << firstName << " " << lastName << endl;
		}
};