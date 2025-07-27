#include "../Interfaces/Vehicle.h"

class Truck : public Vehicle {
private:
    double loadCapacity;
    std::ofstream fileTruck;
public:
    Truck() = default;
    Truck(uint32 id, const std::string& brand, uint32 year, double loadCapacity) : 
        Vehicle(id,brand,year),
        loadCapacity(loadCapacity)
        {}

    double getLoadCapacity() const;
    void setLoadCapacity(double tons);

    void displayInfo() const override;
    void saveToFile(std::ostream& os)  override;
};
