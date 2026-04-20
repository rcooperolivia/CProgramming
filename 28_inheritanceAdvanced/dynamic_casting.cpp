#include <iostream>
using namespace std;

//abstract class (too general)
class Weapon{
    public:
    virtual void use() = 0; // this is an abstract method
    // which makes it an abstract class
    //therefore no variables of this class
};

class Gun :public Weapon{
    public:
    void use() override{ // don't really need to be virtual anymore 
        //virtual in base class
        cout << "BANG!" << endl;
    }

    private:
    //

    protected:
    //
};

class MachineGun : public Gun{
    public:
    MachineGun() : magazine(20){}

    void use() override {//override protects from mispelled methods etc
        while (magazine --){
            cout << "BANG!";
        }
        cout << "\n";
        magazine = 20;
    }
    private:
    int magazine;

    protected:
    //
};


class Bazooka : public Gun{
    public:
    void use() override{
        cout << "KABOOM! " << endl;
    }
};

class Knife: public Weapon {
    //knife is no one's baby
    // well except weapon
    public:
    Knife(bool stainless = 0) : is_stainless(stainless){

    }

    void use() override{
        cout << "SLASH! " << endl;
    }

    bool getStainless() const{
        return is_stainless;
    }

    private:
    bool is_stainless;

    protected:
    //
};

class Player {
    public:
        void use(Weapon& weapon){
            //dynamic casting
            Knife* knife = dynamic_cast<Knife*>(&weapon);

            if (!knife){
                std::cout << "Not a knife\n";

            }
            else{
                if (knife -> getStainless()){
                    std::cout << "Stainless steel knife, can use it!\n";
                    weapon.use();
                }
                else {
                    std::cout <<"Not stainless, can't use it\n";
                }

            }
        
    }

    

    private:
    //

    protected:
    //
};

int main(void){
    Gun gun;
    MachineGun mg;

    mg.use();

    cout << "Array\n";
    Gun* guns[2] = {&gun, &mg};

    for (int i = 0; i < 2; i++){
        guns[i]->use();
    }

    cout << "Player\n";
    Player player;
    player.use(gun);
    player.use(mg);
    Bazooka bazooka;
    player.use(bazooka);
    Knife knife(true);
    player.use(knife);
    // for (int i = 0; i <2; i++){
    //     player.use(guns[i]);
    // }

    return 0;
}