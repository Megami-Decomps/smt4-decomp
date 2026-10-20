#include "common.h"

extern "C" {

int asdMemFree(int ptr);

void FUN_00250d74(int ptr)
{
    if (ptr != 0) {
        asdMemFree(ptr);
    }
}

} /* extern "C" */
