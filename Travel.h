#include <iostream>
using namespace std;

class Travel {
	private:
		int id;
		bool finished;
		Client client;
		Taxi taxi;
		double cost;
		string departure;
		string destination;
		static int counter;
		
	public:
		// Params constructor
	    Travel(const Client& client, const Taxi& taxi, double cost, const string& departure, const string& destination) :
		id(counter),
		finished(false),
		client(client),
		taxi(taxi),
		cost(cost),
		departure(departure),
		destination(destination) {
			counter++;
    	}
		
		// Getters
	    int getId() const {
	        return id;
	    }
	
	    bool isFinished() const {
	        return finished;
	    }
	
	    Client getClient() const {
	        return client;
	    }
	
	    Taxi getTaxi() const {
	        return taxi;
	    }
	
	    double getCost() const {
	        return cost;
	    }
	
	    string getDeparture() const {
	        return departure;
	    }
	
	    string getDestination() const {
	        return destination;
	    }
	    
	    // Setters
	    void setFinished(bool isFinished) {
	        finished = isFinished;
	    }
	
	    void setClient(const Client& travelClient) {
	        client = travelClient;
	    }
	
	    void setTaxi(const Taxi& travelTaxi) {
	        taxi = travelTaxi;
	    }
	
	    void setCost(double travelCost) {
	        cost = travelCost;
	    }
	
	    void setDeparture(const string& travelDeparture) {
	        departure = travelDeparture;
	    }
	
	    void setDestination(const string& travelDestination) {
	        destination = travelDestination;
	    }
	    
	    // Método para imprimir los detalles del viaje
	    void print() const {
	        cout << "ID: " << id << endl;
	        cout << "Estado de finalización: " << (finished ? "Completado" : "Pendiente") << endl;
	        cout << "Cliente: " << client.getFirstName() << " " << client.getLastName() << endl; // Suponiendo que la clase Client tiene un método getName()
	        cout << "Taxi: " << taxi.getLicensePlate() << endl; // Suponiendo que la clase Taxi tiene un método getLicensePlate()
	        cout << "Costo: $" << cost << endl;
	        cout << "Salida: " << departure << endl;
	        cout << "Destino: " << destination << endl;
	    }
		
		
};