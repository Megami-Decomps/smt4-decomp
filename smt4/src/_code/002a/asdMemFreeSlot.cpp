#include "common.h"

extern "C" {

int asdMemFree(int ptr);

void asdMemFreeSlot(int *obj)
{
    if (*obj != 0) {
        asdMemFree(*obj);
        *obj = 0;
    }
    asdMemFree((int)obj);
}

} /* extern "C" */
