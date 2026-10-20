#include "common.h"

extern "C" {

int asdMemFree(int ptr);

void asdMemFreeIfNotNull(int ptr)
{
    if (ptr != 0) {
        asdMemFree(ptr);
    }
}

} /* extern "C" */
