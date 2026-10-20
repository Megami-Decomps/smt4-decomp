#include "common.h"

extern "C" {

void loadSlotEnsureLoaded(s32 id);

/* Calls loadSlotEnsureLoaded with 0x15. */
void FUN_002a2cb4(void)
{
    loadSlotEnsureLoaded(0x15);
}

} /* extern "C" */
