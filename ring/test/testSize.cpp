#include "ring.h"
int testSize(int argc, char** argv) {
    Ring<int> r(10);
    return !(10 == r.size());
}
