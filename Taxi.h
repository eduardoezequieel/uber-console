#include <iostream>
using namespace std;

class Taxi {
	private:
		int id;
		Driver driver;
		string licensePlate;
		string model;
		int year;
		bool isOnATravel;
		string category;
		string engine;
		static int counter;
		
	public:
		// Params constructor
		Taxi(const Driver& driver, const string& licensePlate, const string& model, int year, const string& engine) : 
		id(counter), 
		driver(driver), 
		licensePlate(licensePlate), 
		model(model), 
		year(year), 
		engine(engine),
		isOnATravel(false) {
		    if(year >= 2010 && year <= 2014) {
		    	category = "Tradicional";
			} else if(year >= 2015) {
				category = "Ejecutiva";
			}
		    counter++;
		}
		
		// Getters
		int getId() const {
	        return this->id;
	    }
	
		Driver getDriver() const {
	        return this->driver;
	    }
	
	    string getLicensePlate() const {
	        return this->licensePlate;
	    }
	
	    string getModel() const {
	        return this->model;
	    }
	
	    int getYear() const {
	        return this->year;
	    }
	
	    bool getIsOnATravel() const {
	        return this->isOnATravel;
	    }
	
	    string getCategory() const {
	        return this->category;
	    }
	
	    string getEngine() const {
	        return this->engine;
	    }
	    
	    // Setters
	    void setDriver(const Driver& driver) {
	        this->driver = driver;
	    }
	
	    void setLicensePlate(const string& licensePlate) {
	        this->licensePlate = licensePlate;
	    }
	
	    void setModel(const string& model) {
	        this->model = model;
	    }
	
	    void setYear(int year) {
	        this->year = year;
	        
	        if(year >= 2010 && year <= 2014) {
		    	category = "Tradicional";
			} else if(year >= 2015){
				category = "Ejecutiva";
			}
	    }
	
	    void setEngine(const string& engine) {
	        this->engine = engine;
	    }
	    
	    // Methods
	    
	    void print() {
		    cout << "Taxi ID: " << id << endl;
		    cout << "Driver data: " << driver.getFirstName() << " " << driver.getLastName() << endl;
		    cout << "License plate: " << licensePlate << endl;
		    cout << "Model: " << model << endl;
		    cout << "Esta en viaje: " << isOnATravel << endl;
		    cout << "Categoria: " << category << endl;
		    cout << "Motor: " << engine << endl;
		}
	
};