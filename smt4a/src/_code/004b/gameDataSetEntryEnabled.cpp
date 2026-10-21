#include "common.h"

extern "C" {

/* A game object whose byte 3 holds a flag in bit 6. */
typedef struct FlagObject {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 unk03a : 6;
    /* 0x03 */ u8 enabled : 1;
    /* 0x03 */ u8 unk03b : 1;
} FlagObject;

FlagObject *gameDataGetTableEntry(s32 id, u32 arg1, bool arg2);

/* Looks the object up and sets its enabled flag to `enabled`. */
void gameDataSetEntryEnabled(s32 id, u32 arg1, bool enabled)
{
    FlagObject *object = gameDataGetTableEntry(id, arg1, enabled);

    object->enabled = enabled;
}

} /* extern "C" */
