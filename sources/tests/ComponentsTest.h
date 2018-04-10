#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../declarations/Cards/Components/Passport.h"
#include "../declarations/Cards/Components/Polis.h"
#include "../declarations/Cards/Components/PayCard.h"
#include <string>

TEST(PassportTest, ComponentsTest){
    std::string seria = "2213";
    std::string number = "171301";
    std::string full_name = "Garnov Yuri";
    std::string registration = "Heaven";

    Passport pass(seria, number, full_name, registration);

    ASSERT_EQ(pass.get_full_name(), full_name);
    ASSERT_EQ(pass.get_serial_number(), seria);
    ASSERT_EQ(pass.get_number(), number);
    ASSERT_EQ(pass.get_registration(), registration);
}

TEST (PolisTest, ComponentsTest){
    std::string number = "123";
    std::string org = "MIT";

    Polis pol(number, org);

    ASSERT_EQ(pol.get_number(), number);
    ASSERT_EQ(pol.get_organization(), org);
}

TEST (PayCardTest, ComponentsTest){
    std::string currency = "RUB";
    int count = 100500;
    PayCard payCard(currency, count);

    ASSERT_EQ(payCard.get_count_of_money(), count);
}