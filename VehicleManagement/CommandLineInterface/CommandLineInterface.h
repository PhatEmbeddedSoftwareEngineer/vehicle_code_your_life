class VehicleManager;

class CommandLineInterface {
public:
    void run(VehicleManager& manager);
private:
    void showMenu();
    void handleUserChoice(VehicleManager& manager, int choice);
};
