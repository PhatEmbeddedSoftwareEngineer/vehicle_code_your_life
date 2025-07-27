#include "../Interfaces/Vehicle.h"

class Motorbike : public Vehicle {
private:
    int engineCapacity;
    std::ofstream fileMotorBike;
public:
    Motorbike() = default;
    Motorbike(int id, const std::string& brand, int year, int engineCapacity) : 
            Vehicle(id,brand,year), 
            engineCapacity(engineCapacity){}

    int getEngineCapacity() const;
    void setEngineCapacity(uint32 cc);

    void displayInfo() const override;
    void saveToFile(std::ostream& os) override;
};
