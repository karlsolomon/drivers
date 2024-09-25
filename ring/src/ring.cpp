#include "../inc/ring.h"

#include <cassert>
#include <cstring>

auto inline Ring::pushc(void* data) -> Ring::ERR_E {
    ERR_E err = ERR_OK;
    memcpy(&this->buf[this->head], data, this->elemSize);
    this->n++;
    this->tail = (this->tail + 1) % this->size;
    return ERR_OK;
}
auto Ring::push(void* data, uint32_t size) -> Ring::ERR_E {
    assert(data != nullptr);
    assert(size > 0);
    Ring::ERR_E err = ERR_OK;
    if (this->n + size > this->size) {
        err = ERR_FULL;
    } else {
        for (uint32_t i = 0; i < size; i++) {
            err = pushc(data);
        }
    }
    return err;
}
auto Ring::pop(void* data) -> Ring::ERR_E {
    ERR_E err = ERR_OK;
    if (this->n == 0) {
        err = ERR_EMPTY;
    } else {
        memcpy(data, &this->buf[this->tail], this->elemSize);
        this->n--;
        this->head = (this->head + 1) % this->size;
    }
    return err;
}
