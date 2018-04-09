#include "Components/PayCard.h"
#include "Components/Polis.h"
#include "Components/Passport.h"
#include "ICard.h"

class UniCard : public ICard{
public:
    template <typename t_serverID, typename t_userID, typename t_cardID>
    UniCard(t_serverID s, t_userID u, t_cardID c, const Passport& pas, const Polis& pol, const PayCard& pc) :
        serverID(s), userID(u), cardID(c), passport(pas), polis(pol), payCard(pc){}

    void authorization();


private:
    PayCard payCard;
    Polis polis;
    Passport passport;

    auto serverID;
    auto userID;
    auto cardID;
};


