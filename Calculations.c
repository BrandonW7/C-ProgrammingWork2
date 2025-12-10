/*
 * Program Description:
 * This program performs the following tasks:
 * 1. Calculates and displays the volume and surface area of a box.
 * 2. Calculates the area of a circle with a given radius.
 * 3. Displays remainders of several modulus operations.
 * 4. Calculates the volume of a cube.
 * Each section is clearly labeled and includes comments explaining the logic.
 */

 #include <stdio.h>

 int main() {
     // Task 1: Volume and surface area of a box
     float height = 10.0;
     float length = 11.5;
     float width = 2.5;
 
     float volume_box = height * length * width;
     float surface_area = 2 * (length * width + length * height + width * height);
 
     printf("Volume of the box: %.2f cm^3\n", volume_box);
     printf("Surface area of the box: %.2f cm^2\n\n", surface_area);
 
     // Task 2: Area of a circle
     float radius = 4.8;
     float pi = 3.14;
     float area_circle = pi * radius * radius;
 
     printf("Area of the circle: %.2f cm^2\n\n", area_circle);
 
     // Task 3: Modulus operations
     printf("Modulus operations:\n");
     printf("2 %% 2 = %d\n", 2 % 2);
     printf("3 %% 2 = %d\n", 3 % 2);
     printf("5 %% 2 = %d\n", 5 % 2);
     printf("7 %% 3 = %d\n", 7 % 3);
     printf("100 %% 33 = %d\n", 100 % 33);
     printf("100 %% 7 = %d\n\n", 100 % 7);
 
     // Task 4: Volume of a cube
     float side = 2.8;
     float volume_cube = side * side * side;
 
     printf("Volume of the cube: %.2f m^3\n", volume_cube);
 
     return 0;
 }
 