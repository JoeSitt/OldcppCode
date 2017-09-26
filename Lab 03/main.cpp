#include "MathTools.h"
#include <string>
#include <iostream>

void run(){
  int choice;
  double a,b,c,d;
  double ans[2];
  MathTools tool;
  while(choice!=4){
    std::cout<<"\n1 for a quadratic equation to be solved\n    2 a line to be intersected with a unit circle\n    3 ballroom calc\n    4 Quit\n    ";
    try{
      std::cin>>choice;
      if(choice==1){
        std::cout << "if 'Ax^2 + bx +c' was a representation of you function, please enter in A, then b, then c\n" << std::endl;
        std::cin >> a;
        std::cin>> b;
        std::cin >> c;
        tool.solveQuadratic(a,b,c,ans);
      }
      if(choice==2){

      }
      if(choice==3){

      }
    }
    catch(NegativeDiscriminant& e  ){
      std::cout << "The discriminant was negative, there were no roots" << std::endl;
    }
    catch(NoIntersection& e){
      std::cout << "There were no intersections" << std::endl;
    }
    catch(CannotDetermineRoomDimensions& e){
      std::cout << "there were no possible ballroom dimensions for the provided info" << std::endl;
    }
  }
}

main(){
  run();
  return 42;
}
