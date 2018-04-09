#include "Components/PayCard.h"
#include "Components/Polis.h"
#include "Components/Passport.h"

class UniCard{
    template <typename t_serverID, typename t_userID, typename t_cardID>
    UniCard(t_serverID serverID, t_userID userID, t_cardID cardID);

private:
    PayCard payCard;
    Polis polis;
    Passport passport;

    auto serverID;
};


