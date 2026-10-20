#include "shard/Shard0031.h"

extern "C" {

extern void vcallSlot12IfValid(Object *object);
extern void sysFatalBreak(void);

/* Releases the tagged object (bit 0 set: sysFatalBreak runs first) and clears the pointer. */
u32 taggedOwnerRelease2(TaggedOwner *owner)
{
    u32 tagged = owner->tagged;

    if ((tagged & ~1u) != 0) {
        if ((tagged & 1) != 0) {
            sysFatalBreak();
        }
        vcallSlot12IfValid((Object *)(owner->tagged & ~1u));
        owner->tagged = 0;
    }
    return 0;
}

} /* extern "C" */
