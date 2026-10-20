#include "common.h"

extern "C" {

typedef struct RefSlot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 a;
    /* 0x08 */ void *ref;
    /* 0x0C */ u32 b;
    /* 0x10 */ u32 c;
} RefSlot;

extern void *sharedRefAddRef(void *ref);

/* Fills the slot: takes a reference on `ref` when given, and stores the two values and the third read through `source`. */
void refSlotInit(RefSlot *slot, void *ref, u32 a, u32 b, const u32 *source)
{
    if (ref != NULL) {
        ref = sharedRefAddRef(ref);
    }
    slot->b = b;
    slot->a = a;
    slot->ref = ref;
    slot->c = *source;
}

} /* extern "C" */
