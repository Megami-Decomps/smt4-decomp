#include "common.h"

extern "C" {

int asdMemFree(int ptr);

void FUN_002b2368(int ptr)
{
    if (ptr != 0) {
        asdMemFree(ptr);
    }
}

} /* extern "C" */
