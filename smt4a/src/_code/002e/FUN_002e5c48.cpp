#include "common.h"

extern "C" {

void loadSlotEnsureLoaded(s32 id);

/* Calls loadSlotEnsureLoaded with 0x46. */
void FUN_002e5c48(void)
{
    loadSlotEnsureLoaded(0x46);
}

} /* extern "C" */
