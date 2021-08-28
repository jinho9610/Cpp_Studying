#include <iostream>

using namespace std;

class Animal
{
private: // 접근 지시자 정의하지 않으면 디폴트는 private
    int food;
    int weight;

public:
    void set_animal(int _food, int _weight)
    {
        food = _food;
        weight = _weight;
    }

    void increase_food(int inc)
    {
        food += inc;
        weight += (inc / 3); // 먹었으니 무게도 증가
    }

    void view_stat()
    {
        cout << "이 동물의 food    : " << food << endl;
        cout << "이 동물의 weight  : " << weight << endl;
    }
};

int main()
{
    Animal animal;
    animal.set_animal(100, 50);
    animal.increase_food(30);

    animal.view_stat();

    return 0;
}