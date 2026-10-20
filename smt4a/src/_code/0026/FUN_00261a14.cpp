#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 value;
} Scene;
extern Scene *DAT_0057f574;

/* Stores `value` in the byte at 0x30 of the scene. */
void FUN_00261a14(u8 value)
{
    DAT_0057f574->value = value;
}

} /* extern "C" */
