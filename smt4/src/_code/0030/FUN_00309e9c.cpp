#include "common.h"

extern "C" {

int FUN_002a780c(u32 value);
int asdMemFree(u32 *ptr);

void FUN_00309e9c(u32 *obj)
{
    FUN_002a780c(obj[0]);
    FUN_002a780c(obj[1]);
    FUN_002a780c(obj[2]);
    asdMemFree(obj);
}

} /* extern "C" */
