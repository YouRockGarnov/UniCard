#include "Component.h"

class Polis : public Component{
public:
    template <typename t_number, typename t_organization>
    Polis(t_number n, t_organization org);

    auto get_organization();

private:
    auto organization;
};
