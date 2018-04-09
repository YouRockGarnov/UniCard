#include "UniCard.h"

class ArmoredUC : public UniCard{
public:
    ArmoredUC();

private:
    auto get_encrypted_message();
    auto put_enrypted_message(auto mess);
    auto encrypt(auto mess);
    auto decipher(auto mess);
};
