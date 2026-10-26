#include "common.h"
#include "code/Code0023_Smt4a.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 phase;
    /* 0x24 */ u8 unk24[0x18];
    /* 0x3C */ u32 flags;
} Holder;

/* Returns 1 when the low 7 bits of `flags` are 0x18 or 1 and the phase is 3 or 7. */
u32 FUN_0023ad2c(Holder *object)
{
    u32 kind;

    kind = object->flags & 0x7F;
    if ((kind == 0x18 || kind == 1) && (object->phase == 3 || object->phase == 7)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
