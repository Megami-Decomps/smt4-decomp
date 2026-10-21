#include "common.h"

extern "C" {

struct FlagObject {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 unk03a : 6;
    /* 0x03 */ u8 enabled : 1;
    /* 0x03 */ u8 unk03b : 1;
};

FlagObject *gameDataGetTableEntry(s32 id, u32 table, bool enabled);

/* Sets the enabled flag on a table entry. */
void gameDataSetEntryEnabled(s32 id, u32 table, bool enabled)
{
    FlagObject *object = gameDataGetTableEntry(id, table, enabled);
    object->enabled = enabled;
}

}
