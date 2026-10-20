#include "common.h"

extern "C" {

typedef struct Object003fcc94 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 id;
    /* 0x08 */ s32 mode;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ u32 words[6];
    /* 0x28 */ void *buffer;
    /* 0x2c */ u8 unk2c[0x10];
    /* 0x3c */ u8 flagA;
    /* 0x3d */ u8 flagB;
} Object003fcc94;

extern u32 g_aocSystem;

void asdMemFree(void *block);
void aocClearFlagD_C(u32 aoc, s32 id);
void aocClearFlagD_10(u32 aoc, s32 id);
void FUN_003fc1b0(Object003fcc94 *object, s32 id);
void FUN_003fcd20(Object003fcc94 *object, s32 id);

/* Frees the object's buffer and clears its words and flags, then clears the AOC flag for its id (mode 6 uses flag D_10 instead of D_C). */
void FUN_003fcc94(Object003fcc94 *object)
{
    if (object->buffer != NULL) {
        asdMemFree(object->buffer);
        object->words[0] = 0;
        object->words[1] = 0;
        object->words[2] = 0;
        object->words[3] = 0;
        object->words[4] = 0;
        object->words[5] = 0;
        object->buffer = NULL;
        object->flagA = 0;
        object->flagB = 0;
    }
    if (object->mode != 6) {
        aocClearFlagD_C(g_aocSystem, object->id);
        FUN_003fcd20(object, -object->id);
        return;
    }
    aocClearFlagD_10(g_aocSystem, object->id);
    FUN_003fc1b0(object, object->id);
}

} /* extern "C" */
