#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "triangle.h"
#include "circle.h"


int main() {
    Rectangle R1("R1", 2.0, 3.0);
    Rectangle R2("R2", 3.0, 4.0);
    Rectangle R3;
    Square S1("S1", 5.0);
    Triangle T1("T1", 3, 4, 5);
    Circle C1("C1", 7);

    R1.Info();
    std::cout << std::endl;
    R2.Info();
    std::cout << std::endl;
    R3.Info();
    std::cout << std::endl;
    S1.Info();
    std::cout << std::endl;
    T1.Info();
    std::cout << std::endl;
    C1.Info();
    std::cout << std::endl;

    std::cout << "Wykorzystanie wskaźnika" << std::endl;
    Figure *pointer_s = &S1;
    Figure *pointer_r = &R1;
    Figure *pointer_t = &T1;
    Figure *pointer_c = &C1;
    std::cout << std::endl;
    pointer_s->Info();
    std::cout << std::endl;
    pointer_r->Info();
    std::cout << std::endl;
    pointer_t->Info();
    std::cout << std::endl;
    pointer_c->Info();
    std::cout << std::endl;

    std::cout << "Wykorzystanie referencji" << std::endl;
    Figure &ref_s = S1;
    Figure &ref_r = R1;
    Figure &ref_t = T1;
    Figure &ref_c = C1;
    std::cout << std::endl;
    ref_s.Info();
    std::cout << std::endl;
    ref_r.Info();
    std::cout << std::endl;
    ref_t.Info();
    std::cout << std::endl;
    ref_c.Info();
}
