#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

class Client
{
private:
    int id;
    string name;

public:
    Client(int id, string name){
        this->id = id;
        this->name = name;

    };
    int getid(){return id;}
    string getname(){return name;}


    ~Client(){};
};

class Songs//utilizado para hacer la lista enlazada depende simple o doble
{
private:
    shared_ptr<Client> puntero;
    int duration;
    string name;
public:

    Songs(string name, int duration){};
    ~Songs(){};
    void setClient(shared_ptr<Client> subject){
        puntero = subject;
    };

    string getClient(){
        return puntero->getname();
    }
    int getduration(){return duration;}
    string getname(){return name;}


};







int main(){



    return 0;
}