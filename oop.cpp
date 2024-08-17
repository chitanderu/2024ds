#include <iostream>
#include <string>
using namespace std;

// 基础类：动物类
class Animal {
protected:
    string name;
    int age;

public:
    // 构造函数
    Animal(string n, int a) : name(n), age(a) {}

    // 虚函数：使得子类可以重写这个方法
    virtual void makeSound() const {
        cout << name << " makes a sound." << endl;
    }

    // 普通方法：展示动物信息
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// 派生类：狗类，继承自动物类
class Dog : public Animal {
private:
    string breed;

public:
    // 构造函数
    Dog(string n, int a, string b) : Animal(n, a), breed(b) {}

    // 重写makeSound方法
    void makeSound() const override {
        cout << name << " barks." << endl;
    }

    // 展示狗的信息
    void displayDogInfo() const {
        displayInfo();
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    // 创建一个Animal对象
    Animal animal("Generic Animal", 5);
    animal.displayInfo();
    animal.makeSound();

    // 创建一个Dog对象
    Dog dog("Buddy", 3, "Golden Retriever");
    dog.displayDogInfo();
    dog.makeSound();

    // 基类指针指向派生类对象
    Animal* animalPtr = &dog;
    animalPtr->makeSound(); // 调用的是Dog类的makeSound方法，体现了多态性

    return 0;
}