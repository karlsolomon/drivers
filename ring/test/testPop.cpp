#include "ring.h"
int testPop(int argc, char** argv) {
    Ring<int> r(10);
    Ring<int>::RING_ERR_E ret = r.push(1);
    int a = 0;
    ret = r.pop(&a);
    return ret;
}
