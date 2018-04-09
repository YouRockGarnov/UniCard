#include "Component.h"


class PayCard : public Component{
public:
    template <typename t_user_id, typename t_currency>
    void pay_to(t_user_id user_id, t_currency count);

    auto get_count_of_money();

private:
    auto currency;
    auto count;
};

template<typename t_user_id, typename t_currency>
void PayCard::pay_to(t_user_id user_id, t_currency count) {
    //sending money
}


