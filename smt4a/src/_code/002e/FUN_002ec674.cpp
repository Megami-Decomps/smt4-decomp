#include "common.h"

extern "C" {

s32 FUN_002fc046(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 member0C;
} Holder;

/* Returns the word at 0xC, or 0 when FUN_002fc046 reports that member as invalid. */
u32 FUN_002ec674(Holder *object)
{
    s32 invalid;

    invalid = FUN_002fc046((u8 *)object + 0xC);
    if (invalid != 0) {
        return 0;
    }
    return object->member0C;
}

} /* extern "C" */
