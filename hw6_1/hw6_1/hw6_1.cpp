#include <iostream>
#include <string>
using namespace std;

class Television {

private:
   string model;
   int price;

public:
   static int numberOfTVs;
   //매개변수가 없는 생성자 

   Television() {
      model = "MyTv";
      price = 0;
      numberOfTVs++;
   }
   //모델명을 매개변수로 받고 가격을 0으로 초기화하되, 생성자3을 호출하여 초기화.
   Television(string s) {
      this->Television::Television(s, 0);
      numberOfTVs++;
   }

   Television(string s, int p) {
      model = s;
      price = p;
      numberOfTVs++;
   }

   //복사 생성자 정의
   Television(const Television& copy) {
      model = copy.model;
      price = copy.price;
   }

   void SetModel(string s) {
      model = s;
   }
   string GetModel() {
      return model;
   }
   void SetValue(int p) {
      price = p;
   }
   int GetValue() {
      return price;
   }

   double getTax(double tax) {
      return price * tax;
   }

   void discount() {
      price = price * 0.9;
   }

   void discount(double disValue) {
      price = price * disValue;
   }

   void print() {
      cout << "모델명 : " << model << " 가격 : " << price << endl;
   }

    static int numberOfTVs() {
       return numberOfTVs;
   }
   
};
int Television::numberOfTVs = 0;

int main(void) {
   cout << "hw6_1 : 이예지" << endl;

   cout << "생성된 텔레비젼 수 :" << Television::numberOfTVs() << endl;

   Television tv1;
   Television tv2("lgTv");
   Television tv3("samsung", 1000000);

   tv1.print();
   tv2.print();
   tv3.print();

   cout << "생성된 텔레비젼 수 :" << Television::numberOfTVs() << endl;
   return 0;
}