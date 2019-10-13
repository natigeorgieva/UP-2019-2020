#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float inputX, inputY;

    cout<<"Vuvedete X koordinata : ";
    cin>>inputX;

    cout<<"Vuvedete Y koordinata : ";
    cin>>inputY;

    bool inLeftCircle, inRightCircle, inTriangle;
    inLeftCircle = inRightCircle = inTriangle = false;


    ///Presmqtame radiusa na dadenata tochka sprqmo centura na lqvata okruzhnost
    float radiusLeftCircle = sqrt(pow(inputX+1, 2)+ pow(inputY, 2));

    ///Ako radiusa e kolkoto ili po-malko ot tozi na lqvata okruzhnost i
    ///tochkata se namira v lqvata poluokruzhnost
    if(radiusLeftCircle <= 1 && inputX >= -2 && inputX <= -1){
        inLeftCircle = true;
    }

    ///Presmqtame radiusa na dadenata tochka sprqmo centura na dqsnata okruzhnost
    float radiusRightCircle = sqrt(pow(inputX-1, 2)+ pow(inputY, 2));

    ///Ako radiusa e kolkoto ili po-malko ot tozi na dqsnata okruzhnost i
    ///tochkata se namira v dqsnata poluokruzhnost
    if(radiusRightCircle <= 1 && inputX >= 1 && inputX<= 2){
        inRightCircle = true;
    }

    ///Proverqvame dali tochkata lezhi v triugulnika
    if(inputY >= 1 && inputY <= (abs(inputX)+2) && inputX>=-1 && inputX<=1){
        inTriangle = true;
    }


    if(inLeftCircle|| inRightCircle || inTriangle){
        cout<<"Tochkata e v opisanata oblast!";
    }else{
        cout<<"Tochkata NE e v opisanata oblast!";

    }
    cout<<endl;

    return 0;
}
