#include <iostream>
#include <string>
using namespace std;

class Television {

private:
   string model;
   int price;

public:
   static int numberOfTVs;
   //�Ű������� ���� ������ 

   Television() {
      model = "MyTv";
      price = 0;
      numberOfTVs++;
   }
   //�𵨸��� �Ű������� �ް� ������ 0���� �ʱ�ȭ�ϵ�, ������3�� ȣ���Ͽ� �ʱ�ȭ.
   Television(string s) {
      this->Television::Television(s, 0);
      numberOfTVs++;
   }

   Television(string s, int p) {
      model = s;
      price = p;
      numberOfTVs++;
   }

   //���� ������ ����
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
      cout << "�𵨸� : " << model << " ���� : " << price << endl;
   }

    static int numberOfTVs() {
       return numberOfTVs;
   }
   
};
int Television::numberOfTVs = 0;

int main(void) {
   cout << "hw6_1 : �̿���" << endl;

   cout << "������ �ڷ����� �� :" << Television::numberOfTVs() << endl;

   Television tv1;
   Television tv2("lgTv");
   Television tv3("samsung", 1000000);

   tv1.print();
   tv2.print();
   tv3.print();

   cout << "������ �ڷ����� �� :" << Television::numberOfTVs() << endl;
   return 0;
}