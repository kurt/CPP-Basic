#include <iostream>

struct productStruct {
  int weight;
  double price;
};


struct MoreComplexStruct
{
   public:
   //MoreComplexClass(const productStruct &ps){};
   MoreComplexStruct(productStruct ps){};
  // ~MoreComplexClass(){};
   virtual int complex_foo(void);
   private:
   int complicated_foo(void);

};

int MoreComplexStruct::complex_foo(void){
    int variable = 99;
    return variable;
}

int complicated_foo(void){
    int variable = 222;
    return variable;
}

struct childMoreComplexStruct : public MoreComplexStruct
{
    public:
    childMoreComplexStruct(productStruct ps) : MoreComplexStruct(ps){};
};

int main(){
   productStruct ps;
   childMoreComplexStruct cmcc(ps);
   std::cout << cmcc.complex_foo() << "\n";
   // the next is private so it is not accessible
   //std::cout << cmcc.complicated_foo() << "\n"; 
}
