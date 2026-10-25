#include "common.h"
#include "shard/W6_W6Match3_FormatBuffer.h"

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
extern Global57f110 g_campCec;

/* Stores `value` and sets the mode to 2 on the held object, if there is one. */
void campCecSetObjectValue(u8 value)
{
    Object *object;

    object = g_campCec.object;
    if (g_campCec.object != NULL) {
        g_campCec.object->value = value;
        object->mode = 2;
    }
}

} /* extern "C" */
