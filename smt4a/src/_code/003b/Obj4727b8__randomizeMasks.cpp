#include "classes/Obj4727b8.h"

struct MaskEntryOwner {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u8 unk04[0x2c];
    /* 0x30 */ Obj4727b8Ref ref;
};

extern "C" {
s32 randomAdvanceShiftRegister(s32 range);

/* Gives every entry the complement of a random value in 0..3. */
void _ZN9Obj4727b814randomizeMasksEv(MaskEntryOwner *owner)
{
    Obj4727b8Entry *entry = owner->ref.table->entries;
    u32 count = owner->ref.counter->count;

    for (u32 i = 0; i < count; i++) {
        entry->mask = ~(randomAdvanceShiftRegister(0) % 4);
        entry++;
    }
}

} /* extern "C" */
