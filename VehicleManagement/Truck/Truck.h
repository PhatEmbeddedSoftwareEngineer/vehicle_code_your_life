#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double loadCapacity;

public:
    Truck() = default;
    Truck(int id, const std::string& brand, int year, double loadCapacity);

    double getLoadCapacity() const;
    void setLoadCapacity(double tons);

    void displayInfo() const override;
    void saveToFile(std::ostream& os) const override;
};
