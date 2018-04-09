

class Component{
public:
    template <typename t_number>
    Component(t_number _number) : number(_number){}

    auto get_number();

protected:
    int number;
};
