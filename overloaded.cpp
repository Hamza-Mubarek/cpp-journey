#include <iostream>
auto& out=std::cout;
auto& in=std::cin;
using tex_t = std::string;
void baking();
void baking (tex_t topping1);
void baking(tex_t topping1, tex_t topping2);
int main(){

 baking();
  baking("peperoni");
 baking("peperoni", "mushroom");

 return 0;
}
void baking(){
    out<< "here is your pizza\n";
}
void baking(tex_t topping1){
   out << "here is your "<< topping1<<"pizza\n";
}
 void baking(tex_t topping1, tex_t topping2){
    out <<"here is your "<<topping1<<" and "<<topping2<<" pizza\n";
 }

