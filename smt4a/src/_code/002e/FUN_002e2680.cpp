#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x000 */ u8 unk000[0x1A0];
    /* 0x1A0 */ u32 mode;
    /* 0x1A4 */ u8 value;
} Object;

typedef struct Global57f110 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object *object;
} Global57f110;
extern Global57f110 DAT_0057f110;

/* Stores `value` and sets the mode to 2 on the held object, if there is one. */
void FUN_002e2680(u8 value)
{
    Object *object;

    object = DAT_0057f110.object;
    if (DAT_0057f110.object != NULL) {
        DAT_0057f110.object->value = value;
        object->mode = 2;
    }
}

} /* extern "C" */
