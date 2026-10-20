#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x000 */ u8 unk000[0x14C];
    /* 0x14C */ u32 value;
} Object;

typedef struct Global57f110 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object *object;
} Global57f110;
extern Global57f110 DAT_0057f110;

/* Stores `value` in the word at 0x14C of the held object, if there is one. */
void FUN_002e2404(u32 value)
{
    if (DAT_0057f110.object != NULL) {
        DAT_0057f110.object->value = value;
    }
}

} /* extern "C" */
