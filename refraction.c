/**
 * Author: Sifat Syed
 *
 * This program computes the angle of refraction, θ2 given the angle of incidence,
 * θ1 and the index of refraction of the medium, n2. We’ll assume that the first
 * medium is always air and so n1 = 1.
 * We’ll use Snells's Law to find the angle of refraction:
 *             n1 sin θ1 = n2 sin θ2
 */
 
 #include<stdlib.h>
 #include<stdio.h> 
 #include<math.h>
 
 #define refractiveIndexAir 1
 #define M_PI 3.14159265358979323846
  
  int main(int argc, char **argv) {
	  
	  double incidenceAngle = 0, refractionAngle = 0, refractiveIndexMedium = 0, 
	  refractionAngleRadians = 0, incidenceAngleRadians ;
	  
	  printf("Enter the Angle of Incidence\n");
	  scanf("%lf", &incidenceAngle);
	  printf("Enter Refractive Index of the second medium\n");
	  scanf("%lf", &refractiveIndexMedium);
	  

	  
	  if(incidenceAngle>=(-180) && incidenceAngle<=180) {
		  
		 if(refractiveIndexMedium > 1) { 
		 
		  incidenceAngleRadians= (incidenceAngle/180.0) * M_PI;
		 
		  refractionAngleRadians = asin(((refractiveIndexAir* sin(incidenceAngleRadians))/ refractiveIndexMedium));
          
		  refractionAngle = (refractionAngleRadians * 180.0 ) / M_PI;	 
	   
	  printf("Angle of Incidence: %.2f degrees\n", incidenceAngle);
	  printf("Index of Refraction: %.3f\n", refractiveIndexMedium);
      printf("Angle of Refraction: %f degrees\n", refractionAngle);
	 
	  }	
	  }
	  else {
		  printf("Invalid angle(must be [-180, 180]\n");
	  }
	  
	  return 0; 
	  
	  
  }
  
		  
		  
	  
	  
	  
	  
	  
	  