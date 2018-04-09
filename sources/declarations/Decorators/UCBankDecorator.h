#include "../Cards/ICard.h"

class UCBankDecorator : public ICard{
public:
    UCBankDecorator(std::shared_ptr<ICard> c) :
            unicard(c){}

private:
    std::shared_ptr<ICard> unicard;
};