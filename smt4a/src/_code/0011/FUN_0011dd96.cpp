#include "common.h"

extern "C" {

void onlineJobSetStateReady(u32 value);

/* Calls onlineJobSetStateReady with the word `*valueRef` (the first argument is unused). */
void FUN_0011dd96(u32 unused, u32 *valueRef)
{
    onlineJobSetStateReady(*valueRef);
}

} /* extern "C" */
