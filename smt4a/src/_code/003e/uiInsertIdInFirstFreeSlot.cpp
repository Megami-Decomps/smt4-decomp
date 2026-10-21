#include "common.h"

extern "C" {

struct Owner { u8 unk0000[0x2214]; s16 ids[42]; };

void uiInsertIdInFirstFreeSlot(Owner *owner, s16 id)
{
    for (s32 i = 0; i < 42; i++) {
        s16 value = owner->ids[i];
        if (value == id) {
            return;
        }
        if (value <= 0) {
            owner->ids[i] = id;
            return;
        }
    }
}

} /* extern "C" */
