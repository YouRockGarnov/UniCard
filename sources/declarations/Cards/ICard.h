class ICard{
public:
    virtual void authorization = 0;

    template <typename t_message>
    virtual void pull_inf_from_mob_app() = 0;

protected:
    virtual void push_inf_to_mob_app(t_message mes) = 0;
};
