#include "Vehicle.h"

class Motorbike : public Vehicle {
private:
    int engineCapacity;

public:
    Motorbike() = default;
    Motorbike(int id, const std::string& brand, int year, int engineCapacity);

    int getEngineCapacity() const;
    void setEngineCapacity(int cc);

    void displayInfo() const override;
    void saveToFile(std::ostream& os) const override;
};
