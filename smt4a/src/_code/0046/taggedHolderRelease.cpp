#include "shard/Shard0046.h"

extern "C" {

typedef struct Tagged4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 tagged;
} Tagged4;

typedef struct TaggedHolder {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ Tagged4 *owner;
    /* 0x38 */ u8 unk38[0x18];
    /* 0x50 */ u8 unk50;
    /* 0x51 */ u8 unk51;
} TaggedHolder;

extern void vcallSlot12IfValid(Object *object);
extern void FUN_00195fc8(void);

/* Releases the tagged object (bit 0 set: FUN_00195fc8 runs first) once the enabled flags are set, then clears the flag at +0x50. */
void taggedHolderRelease(TaggedHolder *obj)
{
    Tagged4 *owner;

    if (obj->unk51 != 0 && obj->unk50 != 0) {
        owner = obj->owner;
        if ((owner->tagged & ~1u) != 0) {
            if ((owner->tagged & 1) != 0) {
                FUN_00195fc8();
            }
            vcallSlot12IfValid((Object *)(owner->tagged & ~1u));
            owner->tagged = 0;
        }
        obj->unk50 = 0;
    }
}

} /* extern "C" */
