#include <iostream>

struct productStruct {
  int weight;
  double price;
};


class MoreComplexClass
{
   public:
   //MoreComplexClass(const productStruct &ps){};
   MoreComplexClass(productStruct ps){};
   ~MoreComplexClass(){};
   virtual int complex_foo(void);

};

int MoreComplexClass::complex_foo(void){
    int variable = 99;
    return variable;
}

class childMoreComplexClass : public MoreComplexClass
{
    public:
    childMoreComplexClass(productStruct ps) : MoreComplexClass(ps){};
    

};

int main(){
   //productStruct ps;
   childMoreComplexClass cmcc(productStruct ps);
}
