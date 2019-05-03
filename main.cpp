#include <iostream>
#include "complex.h"
#include "vector.h"
#include "Tiles.h"
#include "child.h"

using std::cout;
using std::endl;
int main() {
//4_1
    Complex cx1(5, 5);
    Complex cx2 = cx1;
    cx2.get_Complex();
//4_2
    Vector v1(1, 1);
    Vector v2 = v1;
    v2.get_Vector();
//4_3
    Tiles t1("SomeTiles", 1, 1, 1);
    Tiles t2 = t1;
    t1.get_Data();
//4_4
    child c1("Ivan", "Ivanov", 100);
    child c2 = c1;
    c2.output();
    return 0;
}