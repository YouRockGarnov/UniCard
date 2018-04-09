#include "UniCard.h"

class CivilUC : public UniCard{
public:
    template <typename t_serverID, typename t_userID, typename t_cardID>
    CivilUC(t_serverID s, t_userID u, t_cardID c, const Passport& pas, const Polis& pol, const PayCard& pc) :
    UniCard(s, u, c, pas, pol, pc) {}

    auto get_location();
};