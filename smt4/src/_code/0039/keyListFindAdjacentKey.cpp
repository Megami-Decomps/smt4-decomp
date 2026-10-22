#include "common.h"

extern "C" {

/* One slot of the ordered key list. */
typedef struct KeyListSlot {
    /* 0x00 */ u16 used;
    /* 0x02 */ s16 key;
} KeyListSlot;

typedef struct KeyListOwner {
    /* 0x00000 */ u8 unk00000[0x60];
    /* 0x00060 */ s8 currentKey;
    /* 0x00061 */ u8 unk00061[0x12183];
    /* 0x121E4 */ KeyListSlot slots[32];
    /* 0x12264 */ s32 slotCount;
} KeyListOwner;

/* Returns the key before (direction 1) or after (direction -1) the current key in the list, or 0 at either end. */
s32 keyListFindAdjacentKey(KeyListOwner *owner, s32 direction)
{
    for (s32 i = 0; i < owner->slotCount; i++) {
        if (owner->slots[i].used != 0 && owner->slots[i].key == owner->currentKey) {
            if (direction == 1) {
                if (i - 1 < 0) {
                    return 0;
                }
                return owner->slots[i - 1].key;
            }
            if (direction == -1) {
                if (i + 1 >= owner->slotCount) {
                    return 0;
                }
                return owner->slots[i + 1].key;
            }
        }
    }
    return 0;
}

} /* extern "C" */
