#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
    double area;
    double a,b;
    if(R1.x <R2.x){
        if(R1.x+R1.w<R2.x ){
            return 0;
            }
        else{
            if(R1.y<R2.y){
				if(R1.y+R1.h<R2.y+R2.h){
					a = R1.x+R1.w-R2.x;
					b = R2.y+R2.h-(R1.y+R1.h);
					return a*b;
				}
				else{
					
				}
			}
			else if (R2.y<R1.y){

			}
			else{

			}
        }
	}
    else if(R2.x +R2.y< R1.x){
        if((R2.x+R2.w)-R1.x <= 0){
            return 0;
            }
        else{

		}
	}
    else{
        return 0;
    }
    
    



}
    



}