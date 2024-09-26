#include "../inc/ring.h"

auto testPushOverflow(int argc, char** argv) -> int {
    Ring<int>::RING_ERR_E ret = Ring<int>::RING_ERR_E::ERR_OK;
    Ring<int> r(1);
    ret = r.push(1);
    if (ret != Ring<int>::RING_ERR_E::ERR_OK) {
        return ret;
    }
    ret = r.push(2);
    return ret != Ring<int>::RING_ERR_E::ERR_FULL;
}
