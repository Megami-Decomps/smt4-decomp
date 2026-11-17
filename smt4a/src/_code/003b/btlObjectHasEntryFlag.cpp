#include "gamedata/DevilRecordA.h"

extern "C" {

struct Object { u8 unk00[0x62]; u16 id; };
s32 btlIsDefeatSuppressed(Object *object);

s32 btlObjectHasEntryFlag(Object *object)
{
    if (object == NULL) {
        return 0;
    }
    if (btlIsDefeatSuppressed(object) == 0) {
        return 0;
    }
    DevilRecordA *entry = devilGetRecord(object->id);
    return entry != NULL ? ((entry->extraFlags & 4) >> 2) : 0;
}

} /* extern "C" */
