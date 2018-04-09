class ICard{
    virtual void authorization = 0;

    virtual void push_inf_to_mob_app(auto inf) = 0;
    virtual void pull_inf_from_mob_app() = 0;
};
