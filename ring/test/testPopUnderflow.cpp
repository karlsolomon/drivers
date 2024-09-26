#include "ring.h"
auto testPopUnderflow(int argc, char** argv) -> int {
    Ring<int> r(10);
    Ring<int>::RING_ERR_E ret = r.pop(0);
    return !(ret == Ring<int>::RING_ERR_E::ERR_EMPTY);
}
