#include "gamedata/GameDataEntries.h"

extern "C" {

/* A game object whose byte 3 holds a flag in bit 6. */
typedef struct FlagObject {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 unk03a : 6;
    /* 0x03 */ u8 enabled : 1;
    /* 0x03 */ u8 unk03b : 1;
} FlagObject;

/* Looks the object up and sets its enabled flag to `enabled`. */
void gameDataSetEntryEnabled(u32 groupId, u32 itemId, bool enabled)
{
    FlagObject *object = reinterpret_cast<FlagObject *>(gameDataGetTableEntry(groupId, itemId));

    object->enabled = enabled;
}

} /* extern "C" */
