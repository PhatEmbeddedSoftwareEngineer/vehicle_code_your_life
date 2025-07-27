#include "../Interfaces/Vehicle.h"



class Car : public Vehicle {
private:
    uint32 seatCount;
    uint32 id;

protected:
    std::ofstream fileCar;
public:
    Car() = default;
    Car(uint32 id, const std::string& brand, uint32 year, uint32 seatCount) : 
        Vehicle(id,brand,year),
        seatCount(seatCount)
        {}

    uint32 getSeatCount() const;
    void setSeatCount(uint32 count);

    void displayInfo() const override;
    void saveToFile(std::ostream& os)  override;
};
