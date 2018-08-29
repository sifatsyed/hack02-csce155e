/**
 * Author: Sifat Syed
 *
 * This program calculates the air distance between
 * two locations usding the formulae :
 * d = arccos (sin(ϕ1) sin(ϕ2) + cos(ϕ1) cos(ϕ2) cos(∆)) · R
 * I just added this line. 
 */
 
 #include<stdlib.h>
 #include<stdio.h> 
 #include<math.h>
 
 
 
 
 #define R 6371.0
 #define M_PI 3.14159265358979323846
 
 
  int main(int argc, char **argv) {

	double  latitudeOfA, latitudeOfB, 
			longitudeOfA, longitudeOfB,
			differenceOfLongitudes, airDistance, 
			latitudeRadiansA, latitudeRadiansB, 
			longitudeRadiansA, longitudeRadiansB, 
			sinOfLatitudes, cosOfLatitudes;

	printf("Enter the latitudes of location A:\n");
	scanf("%lf", &latitudeOfA);

	printf("Enter the longitude of location A:\n");
	scanf("%lf", &longitudeOfA);



	printf("Enter the latitude of location B:\n");
	scanf("%lf", &latitudeOfB);

	printf("Enter the longitude of location B:\n");
	scanf("%lf", &longitudeOfB);

	latitudeRadiansA = (latitudeOfA/180.0) * (M_PI);

	latitudeRadiansB = (latitudeOfB/180.0) * (M_PI);

	longitudeRadiansA = (longitudeOfA/180.0) * (M_PI);

	longitudeRadiansB = (longitudeOfB/180.0) * (M_PI);

	differenceOfLongitudes = longitudeRadiansB - longitudeRadiansA; 

	sinOfLatitudes = sin(latitudeRadiansA) * sin(latitudeRadiansB);

	cosOfLatitudes = cos(latitudeRadiansA) * cos(latitudeRadiansB);

	airDistance = (acos(sinOfLatitudes +  cosOfLatitudes * cos(differenceOfLongitudes)) * R);

	printf("Origin:(%lf), (%lf)\n", latitudeOfA, longitudeOfA);
	
	printf("Destination: (%lf), (%lf)\n", latitudeOfB, longitudeOfB);
	
	printf("Air Distance is %lf kms. \n",airDistance);

	return 0;
  }

  
 

  
 
 
  
	
	
	
	
  
  

  
   
   
  
 
