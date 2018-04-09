#include "../../../declarations/Cards/Components/Polis.h"

auto Polis::get_organization(){
    return organization;
}

template <typename t_number, typename t_organization>
Polis::Polis(t_number n, t_organization org) : Component(n), organization(org){};
