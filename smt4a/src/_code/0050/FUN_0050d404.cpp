/* NON_MATCHING: register allocation only: retail keeps the owner in r3 and the second loop's index in ip; built swaps them. */
#include "common.h"

struct Slot0050d404 {
    /* 0x0 */ u32 key;
    /* 0x4 */ u32 value;
};

struct Owner0050d404 {
    /* 0x000 */ u8 unk000[0x218];
    /* 0x218 */ Slot0050d404 slots[9];
};

extern "C" {

/* Sets the value stored under the key in the owner's nine slots (the owner is the object 12 bytes
 * before this one): an existing key's old value is returned; a new key takes the first free slot (-1)
 * and returns 0. */
u32 FUN_0050d404(u8 *self, u32 key, u32 value)
{
    Owner0050d404 *owner = (Owner0050d404 *)(self - 12);
    for (s32 i = 0; i < 9; i++) {
        if (owner->slots[i].key == key) {
            u32 old = owner->slots[i].value;
            owner->slots[i].value = value;
            return old;
        }
    }
    u32 old = 0;
    for (s32 i = 0; i < 9; i++) {
        if (owner->slots[i].key == 0xffffffff) {
            owner->slots[i].key = key;
            owner->slots[i].value = value;
            break;
        }
    }
    return old;
}

} /* extern "C" */
