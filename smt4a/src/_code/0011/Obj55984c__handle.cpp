/* NON_MATCHING: Online child dispatch is complete; indexed childAt emits a single indexed LDR instead of retail ADD followed by LDR. */
#include "classes/Obj55984c.h"

extern "C" {
s32 FUN_003014c6(const void *buffer, u32 size);
s32 onlineBufferMagicCheck(const void *buffer);
s32 FUN_00301502(const void *buffer);
}

/* Route a valid online buffer to its indexed child or the special handler. */
extern "C" s32 _ZN9Obj55984c6handleEPKvjj(Obj55984c *owner, const void *buffer, u32 argument, u32 size)
{
    if (!FUN_003014c6(buffer, size)) {
        return 0;
    }
    Obj55984cChild *child;
    if (onlineBufferMagicCheck(buffer)) {
        child = owner->extraChild();
    } else {
        s32 index = FUN_00301502(buffer);
        if (index < 0) {
            return 0;
        }
        child = owner->childAt(index);
    }
    return child->handle(buffer, argument, size);
}
