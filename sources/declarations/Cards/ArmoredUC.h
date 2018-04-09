#include "UniCard.h"

class ArmoredUC : public UniCard{
public:
    template <typename t_serverID, typename t_userID, typename t_cardID>
    ArmoredUC(t_serverID s, t_userID u, t_cardID c, const Passport& pas, const Polis& pol, const PayCard& pc) :
            UniCard(s, u, c, pas, pol, pc) {}

    template <typename t_message>
    auto pull_inf_from_mob_app(t_message mess){
        //deciphering and doing some actions
    }

protected:
    template <typename t_message>
    virtual void send_encrypted_message(t_message mess) final {
        //server.put(encrypt(mess));
    }

private:
    template <typename t_message>
    auto encrypt(t_message mess){
        //a very hard algorithm of encrypting
    }

    template <typename t_message>
    auto decipher(t_message mess){
        //a very hard algorithm of deciphering
    }
};
