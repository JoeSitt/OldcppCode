#include "MathTools.h"


int MathTools::solveQuadratic(double a, double b, double c, double roots[]){
  //int roots=0;
  if(b*b-4*a*c<0){
    throw NegativeDiscriminant;
    return -1;
  }
  roots[0]=((-1)*b-sqrt(b*b-4*a*c<0))/(2*a);
  roots[1]=((-1)*b+sqrt(b*b-4*a*c<0))/(2*a);
  if(roots[1]==roots[0]){
    return 1;
  }
  return 2;
}

int MathTools::intersectLineUnitCircle(double d, double e, double f, double xy[2][1]){
  double ans[];
  solveQuadratic( (d*d + e*e), 2*e*f,(f*f - d*d), ans[]);
  catch(NegativeDiscriminant){
    throw NoIntersection;
    return -1;
  }
  if(ans[1]==ans[0]){
    return 1;
  }
  return 2;
}

int MathTools::intersectLineUnitCircle(double d, double e, double f, double xy[2][2]){
  double ans[];
  solveQuadratic( (d*d + e*e), 2*e*f,(f*f - d*d), ans[]);
  catch(NegativeDiscriminant){
    throw NoIntersection;
    return -1;
  }
  if(ans[1]==ans[0]){
    return 1;
  }
  return 2;
}

void MathTools::roomDimensions(double Area, double Extra, double minRequiredLength,
    double& width, double& length){
    // l2 + El - A
    solveQuadratic( 1, Extra, -1*(Area), ans[]);
    catch(NegativeDiscriminant){
      throw CannotDetermineRoomDimensions;
      width= -1;
      if(ans[0]<minRequiredLength){
        throw CannotDetermineRoomDimensions;
        widtht= -1;
      }

      length= ans[0];
      width= ans[1];
    }

}
