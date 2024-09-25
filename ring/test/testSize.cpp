#include "ring.h"
auto testSize(int argc, char** argv) -> int {
    Ring<int> r(10);
    return !(10 == r.size());
}
