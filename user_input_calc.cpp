# include <iostream>
using namespace std;

unsigned long error;

unsigned long Calc_Area(unsigned long s) {  //Area size cannot exceed 25 sqr m
  unsigned long result;
  if(s <= 25 && s > 0){
    result = s*s;
  }else{
    printf("\nArea size cannot exceed 25 sqr m and/or be less than zero\n");
  }
  return(result);
}

int main() {
    unsigned long side;
    unsigned long area;

    //UART_Init();
    //Initialize();

    printf("\n This program calculates areas of square-shaped rooms \n");

    area = Calc_Area(side);

    while(side != 0){
        printf("\nEnter room side:\n");
        scanf("%ld", &side);
        area = Calc_Area(side);
        if(area != 0){
            printf("\nArea of the room with side of %ld m is %ld sqr m\n", side, area);
        }
    }

    printf("\nEnd of program\n");

    return 0;
}

