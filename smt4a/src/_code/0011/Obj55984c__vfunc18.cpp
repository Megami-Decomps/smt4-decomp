/* NON_MATCHING: Retail instruction scheduling/register allocation differs (33 retail versus 32 compiled rows). */
#include "classes/Obj55984c.h"

extern "C" {
s32 FUN_003014c6(const void *packet, u32 size);
s32 onlineBufferMagicCheck(const void *packet);
s32 FUN_00301502(const void *packet);
}

/* Validate the packet and route the status query to its child. */
u32 Obj55984c::vfunc18(const void *packet, u32 argument, u32 size)
{
    if (FUN_003014c6(packet, size) == 0) {
        return 0;
    }
    Obj55984cChild *target;
    if (onlineBufferMagicCheck(packet) != 0) {
        target = extra;
    } else {
        s32 index = FUN_00301502(packet);
        if (index < 0) {
            return 0;
        }
        target = childAt(index);
    }
    return target->vfunc18(packet, argument, size);
}
