#include "common.h"

extern "C" {

void cullVolumeTableClear(void);

/* Forwards to cullVolumeTableClear, the function that follows it. */
void FUN_00244ac8(void)
{
    cullVolumeTableClear();
}

} /* extern "C" */
