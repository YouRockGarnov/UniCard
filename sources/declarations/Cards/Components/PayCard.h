#include "Component.h"


class PayCard : public Component{
public:
    template <typename t_count, typename t_currency>
    PayCard(t_count co, t_currency cu) : currency(cu), count(co) {}

    template <typename t_user_id, typename t_count>
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


