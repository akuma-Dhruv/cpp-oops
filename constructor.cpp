#inculde<iostream>
using namespace std;

class chair{
int price;
public:
    int itemno;
    int stockno;
    chair(int id)
    {//c1
        itemno=id;

    }
    chair(int id,int price)
    {//c2
        itemno=id;
        this->price=price;

    }
    chair(int id,int p,int stockno)
    {//c3
        itemno=id;
        price=p;
        this->stockno=stockno;
    }
~chair()
{
    //d1
}

void update price(int p)
{
    price=p;
}
};
int main(void)
{

    chair it1;//generate an error as no constructor with such parameters found
    chair it2(14);
    chair *it3= new chair(15,15);
    chair t(it2);//copy constructor will be called
    delete it3;//we need to us e this to deallocate assigned memory

}






