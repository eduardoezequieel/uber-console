#include <iostream>
using namespace std;

class Driver {
	private:
		int id;
		string firstName;
		string lastName;
		string dui;
		string isss;
		string phone;
		static int counter;
		
	public:
	    // Params constructor
	    Driver(const string& firstName, const string& lastName, const string& dui, const string& isss, const string& phone) {
	        id = counter;
	        this->firstName = firstName;
	        this->lastName = lastName;
	        this->dui = dui;
	        this->isss = isss;
	        this->phone = phone;
	        counter++;
	    }
	
	    // Empty constructor
	    Driver() {
	        id = counter;
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
	
	    string getDui() const {
	        return dui;
	    }
	
	    string getIsss() const {
	        return isss;
	    }
	
	    string getPhone() const {
	        return phone;
	    }
	
	    // Setters
	    void setFirstName(const string& firstName) {
	        this->firstName = firstName;
	    }
	
	    void setLastName(const string& lastName) {
	        this->lastName = lastName;
	    }
	
	    void setDui(const string& dui) {
	        this->dui = dui;
	    }
	
	    void setIsss(const string& isss) {
	        this->isss = isss;
	    }
	
	    void setPhone(const string& phone) {
	        this->phone = phone;
	    }
	    
	    void print() {
		    cout << "Driver ID: " << id << endl;
		    cout << "First Name: " << firstName << endl;
		    cout << "Last Name: " << lastName << endl;
		    cout << "DUI: " << dui << endl;
		    cout << "ISSS: " << isss << endl;
		    cout << "Phone: " << phone << endl;
		}
};