#include "common.h"

extern "C" {

extern u8 *questGetRuntimeStatus(u32 questId);
extern u32 FUN_00250ec0(u32 questId);

/* Read a runtime quest flag, or query its completion state. */
u32 questReadRuntimeFlag(u32 questId, u32 selector)
{
    u32 result = 0;
    const u8 *status = questGetRuntimeStatus(questId);
    switch (selector) {
    case 0: result = *status & 1; break;
    case 1: result = (*status & 2) >> 1; break;
    case 2: result = (*status & 4) >> 2; break;
    case 4: result = (*status & 0x10) >> 4; break;
    case 5: result = FUN_00250ec0(questId); break;
    case 3: result = (*status & 8) >> 3; break;
    }
    return result;
}

} /* extern "C" */
