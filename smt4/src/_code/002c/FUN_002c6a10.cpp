#include "common.h"

extern "C" {

int asdMemFree(int ptr);

void FUN_002c6a10(int ptr)
{
    if (ptr != 0) {
        asdMemFree(ptr);
        return;
    }
}

} /* extern "C" */
