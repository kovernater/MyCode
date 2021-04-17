#include "MyString.h"
#include "Garage.h"

class VehicleAllocator
{
private:
    Vehicle **vehicles;
    size_t size = 0;
    

public:
    VehicleAllocator();
    ~VehicleAllocator();
    Vehicle& operator[](size_t index);
    Vehicle* createVehicle();
    void set_size(size_t size);
    void allocate();
};