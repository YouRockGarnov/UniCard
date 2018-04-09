#include "../../../declarations/Cards/Components/PayCard.h"

auto PayCard::get_count_of_money() {
    return count;
}

template<typename t_user_id, typename t_currency>
void PayCard::pay_to(t_user_id user_id, t_currency count) {
    //sending money
}

