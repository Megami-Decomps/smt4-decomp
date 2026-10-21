/* NON_MATCHING: retail uses `mov r3, r0` where armcc emits `mov ip, r0`. */
#include "common.h"

extern "C" {

struct Owner { u8 unk0000[0x3006]; s16 ids[12]; };

s16 uiFindValidIdOrdinal(const Owner *owner, s16 id)
{
    s16 found = -1;
    for (s32 i = 0; i < 12; i++) {
        s16 value = owner->ids[i];
        if (value >= 0) {
            found++;
        }
        if (value == id) {
            return found;
        }
    }
    return -1;
}

} /* extern "C" */
