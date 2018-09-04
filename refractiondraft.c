
 #include<stdlib.h>
 #include<stdio.h> 
 #include<math.h>
 
 #define refractiveIndexAir 1
 #define M_PI 3.14159265358979323846
  
  int main(int argc, char **argv) {
	  
	  double incidenceAngle = 0, refractionAngle = 0, refractiveIndexMedium = 0, refractionAngleRadians = 0 ;
	  
	  printf("Enter the Angle of Incidence\n");
	  scanf("%lf", &incidenceAngle);
	  printf("Enter Refractive Index of the second medium\n");
	  scanf("%lf", &refractiveIndexMedium);
	  

	  
	  if(incidenceAngle>=(-180) && incidenceAngle<=180) {
		  
		 if(refractiveIndexMedium > 1) { 
		 refractionAngleRadians * refractiveIndexMedium
	 
	     	refractionAngle = (refractionAngleRadians * 180 ) / M_PI;	 
	   
	  printf("Angle of Incidence: %.2f degrees\n", incidenceAngle);
	  printf("Index of Refraction: %.3f\n", refractiveIndexMedium);
      printf("Angle of Refraction: %.2f degrees\n", refractionAngle);
	 
	  }	 
	  }
	  else {
		  printf("Invalid angle(must be [-180, 180]\n");
	  }
	  
	  return 0; 
	  
  }
  