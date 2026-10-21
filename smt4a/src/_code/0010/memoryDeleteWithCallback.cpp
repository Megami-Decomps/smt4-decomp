#include "common.h"

extern "C" {

void asdOperatorDeleteC(void* memory);

void memoryDeleteWithCallback(void (*deleter)(void*), void* memory)
{
    if (deleter != 0) {
        deleter(memory);
    } else {
        asdOperatorDeleteC(memory);
    }
}

}
