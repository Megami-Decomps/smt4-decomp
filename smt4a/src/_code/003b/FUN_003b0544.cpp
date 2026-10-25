#include "common.h"

extern "C" {

void eplSlotStartRequest(s32 mode);

/* Script command: runs eplSlotStartRequest in mode 4. */
u32 FUN_003b0544(void)
{
    eplSlotStartRequest(4);
    return 1;
}

} /* extern "C" */
