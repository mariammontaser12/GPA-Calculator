#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << " Hello to GPA calculator for Faculty of PortSaid Engineering "<<endl<< " ** Dear Student ** "<<endl;
cout << "..............................................................."<<endl;
 cout << " - Enter number of your subjects: "<<endl;
 cin>>n;
 double yourGrade;
 double totalPoints=0;
 int creditHours;
 int totalHours=0;
 for (int i=0;i<n;i++)
 {
     cout << "Enter your grade for subject" <<" "<<i+1<<endl;
     cin>>yourGrade;
     cout << " Enter credit hours for your subject "<< i+1 <<" : "<<endl;
     cin>>creditHours;
     double points;
     if (yourGrade>=93 && yourGrade<=100)
     {
         points=4;
     }
    else if (yourGrade>=89 && yourGrade<=92)
     {
         points=3.7;
     }
    else if (yourGrade>=84 && yourGrade<=88)
     {
         points=3.3;
     }
    else if (yourGrade>=80 && yourGrade<=83)
     {
         points=3.0;
     }
    else if (yourGrade>=76 && yourGrade<=79)
     {
         points=2.7;
     }
    else if (yourGrade>=73 && yourGrade<=75)
     {
         points=2.3;
     }
    else if (yourGrade>=70 && yourGrade<=72)
     {
         points=2.0;
     }
    else if (yourGrade>=67 && yourGrade<=69)
     {
         points=1.7;
     }
    else if (yourGrade>=64 && yourGrade<=66)
     {
         points=1.3;
     }
    else if (yourGrade>=60 && yourGrade<=63)
     {
         points=1.0;
     }
     else
     {
         points=0;
     }
     totalHours += creditHours;
     totalPoints += points*creditHours;

 }
    double GPA = totalPoints / totalHours;
    cout << "Your GPA is: " << GPA << endl;
   cout <<"I wish you all the best"<<endl;

    return 0;
}
