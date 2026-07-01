#include <iostream>
/* double getTotal(double price[], int size);
double getAverage(double total, int size);
int main(){
  double price[]={40,60,30,20,50};
  int size=sizeof(price)/sizeof(price[0]);
  double total=getTotal(price, size);
  double average=getAverage(total, size);
  std::cout<<"the total is"<<total<<'\n';
  std::cout<<"so the average is: "<<average;


  return 0;
}
double getTotal(double price[], int size){
  double total=0;
  for(int i=0; i<size; i++){
    total+=price[i];
  }
  return total;
}
double getAverage(double total, int size){
  double average=total/size;
  return average;

}
*/
double gettotal(double prices[], int size);
int main(){
  double prices[]={5.00,4.00,10.00,9.00,15.00};
  int size=sizeof(prices)/sizeof(prices[0]);
  std::cout<<"the totla is: "<<gettotal(prices, size);
  return 0;
}
double gettotal(double prices[], int size){
  double total=0;
  for(int i=0; i<size; i++){
    total+=prices[i];
  }
  return total;
}