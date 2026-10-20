#include "common.h"

extern "C" {

int asdMemFreeSlot(u32 value);
int asdMemFree(u32 *ptr);

void FUN_00309e9c(u32 *obj)
{
    asdMemFreeSlot(obj[0]);
    asdMemFreeSlot(obj[1]);
    asdMemFreeSlot(obj[2]);
    asdMemFree(obj);
}

} /* extern "C" */
