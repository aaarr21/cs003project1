

class species{
private:
    string _name, _gender;
    int _age;
    double _height, _weight;
public:
    species(){
        std::cout << "Eevaks are four-legged equines that can run." << std:: ednl;
    }
    void set_name(set_n){
        _name = set_n;
    }
    string get_name(get_n){
        return _name;
    }
    void set_gender(set_g){
        _gender = set_g;
    }
    string get_gender(){
        return _gender;
    }
    void set_age(set_a){
        _age = set_a;
    }
    int get_age(){
        return _age;
    }
    void set_height(set_h){
        _height = set_h;
    }
    double get_height(){
        return _height;
    }
    void set_weight(set_w){
        _weight = set_w;
    }
    double get_weight(){
        return _weight;
    }
}