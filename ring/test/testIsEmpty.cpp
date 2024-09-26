#include "ring.h"
auto testIsEmpty(int argc, char** argv) -> int {
    Ring<int> r(1);
    if (!r.isEmpty()) {
        return 1;
    } else {
        r.push(1);
        if (!r.isFull()) {
            return 1;
        }
    }
    return 0;
}
