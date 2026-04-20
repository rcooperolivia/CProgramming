#include <iostream>
using namespace std;

class Character{
    public:
    Character( int hp = 100) : hp(hp){
        cout << "Character's constructor" << endl;
    }

    // private:
    // //

    // protected:
    int hp;
};

class Elf : virtual public Character{
    public:
    Elf(){
        cout << "I am an elf!" << endl;
    }

    void think(){
        cout << "la la la la la la" << endl;
    }


    private:
    //


    protected:
    //
};

class Warrior : virtual public Character{
    public:
    Warrior(){
        cout << "I am an warrior!" << endl;
    }

    void fight(){
        cout << "Slash!!!" << endl;
    }


    private:
    //


    protected:
    //
};

class ElfWarrior : public Elf, public Warrior {
    public:
    ElfWarrior(int hp) : Character(hp){
        //
    }

    private:
    //


    protected:
    //
};

int main(void){
    ElfWarrior elfi(100);

    elfi.fight();
    elfi.think();

    cout << elfi.hp << endl;

    ElfWarrior legolas(150);

    return 0;
}