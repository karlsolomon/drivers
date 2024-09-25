#include "ring.h"
auto testPush(int argc, char** argv) -> int {
    Ring<int> r(10);
    Ring<int>::RING_ERR_E ret = r.push(1);
    return ret;
}
