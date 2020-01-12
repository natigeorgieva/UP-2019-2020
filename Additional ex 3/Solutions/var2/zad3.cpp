#include <iostream>
#include <math.h>
using namespace std;


const int MAX_SIZE = 20, SCORE = 3;

class Laptop
{
private:
    float size;
    string brand;
    float scores[SCORE]; /// Цели числа ама накрая искат оценката да е 7.5 XD

public:
    float getSize()
    {
        return size;
    }
    string getBrand(){return brand;}
    const float* getScores()
    {
        return scores;
    }

    void setSize(float _size)
    {
        size=_size;
    }
    void setBrand(string _brand)
    {
        brand= _brand;
    }
    void setScores(const float _scores[])
    {
        for(int i = 0 ; i<SCORE; i++)
            scores[i]=_scores[i];
    }

    void isSame(Laptop _l);
    void print();
};

void Laptop::isSame(Laptop _l)
{
    if(brand == _l.brand && size == _l.size)
    {
        for(int i = 0; i< SCORE; i++)
        {
            scores[i] = (scores[i]+_l.scores[i])/2;
        }
    }
}

void Laptop::print(){
    cout<<"Brand : "<<brand<<endl;
    cout<<"Size : "<<size<<endl;
    for(int i = 0; i < SCORE; i++){
        cout<<scores[i]<<" ";
    }

    cout<<endl;
}


int main(){
float arr1[] = {5, 5, 5},
      arr2[] = {1, 1, 1},
      arr3[] = {2, 3, 4};

Laptop original;
original.setBrand("Asus");
original.setScores(arr1);
original.setSize(15.6);

Laptop test1;
test1.setBrand("Asus1");
test1.setScores(arr2);
test1.setSize(15.6);

original.isSame(test1);
original.print();
Laptop test2;
test2.setBrand("Asus");
test2.setScores(arr3);
test2.setSize(15.6);
original.isSame(test2);
original.print();
}


