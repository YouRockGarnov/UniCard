#include "Component.h"

class Passport : public Component {
public:
    auto get_serial_number();
    auto get_number();
    auto get_full_name();
    auto get_registration();

private:
    auto serial_number;
    auto number;
    auto full_name;
    auto registration;
};
