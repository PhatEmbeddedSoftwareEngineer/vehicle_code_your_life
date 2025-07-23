#include "Vehicle.h"

class Car : public Vehicle {
private:
    int seatCount;

public:
    Car() = default;
    Car(int id, const std::string& brand, int year, int seatCount);

    int getSeatCount() const;
    void setSeatCount(int count);

    void displayInfo() const override;
    void saveToFile(std::ostream& os) const override;
};
