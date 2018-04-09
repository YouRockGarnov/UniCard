#include "Component.h"

class Passport : public Component {
public:
    template<typename t_serial_number, typename t_number, typename t_full_name, typename t_registration>
    Passport(t_serial_number sn, t_number n, t_full_name fn, t_registration r) : serial_number(sn), number(n),
                                                                                 full_name(fn), registration(r){}

    auto get_serial_number();
    auto get_full_name();
    auto get_registration();

private:
    auto serial_number;
    auto number;
    auto full_name;
    auto registration;
};
