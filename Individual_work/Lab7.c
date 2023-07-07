#include <stdio.h>
#include <math.h>
#include <windows.h>

int intersection_points(double x1, double y1, double r1,  double x2, double y2, double r2){
    //Calculating distance between centers
    double distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    //Return result according to condition, when circles intersect
    if (r1 == r2 && distance == 0)
        return -1;
    else if (distance <= r1 + r2 && distance >= fabs(r1 - r2)){
        if (distance < r1 + r2 || distance == fabs(r1 - r2))
            return 2;
        else
            return 1;
    }

}

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    double x1, y1, r1, x2, y2, r2;

    //Receive data
    printf("Введіть координати та радіуси кіл(x1, y1, r1, x2, y2, r2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    //Return result
    int result = intersection_points(x1, y1, r1, x2, y2, r2);
    printf("Кількість точок перетину: %d\n", result);

    return 0;
}
