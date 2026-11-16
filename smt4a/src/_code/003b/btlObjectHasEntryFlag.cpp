#include "common.h"

extern "C" {

struct Object { u8 unk00[0x62]; u16 id; };
struct Entry { u8 unk00[0xb3]; u8 flags; };
s32 btlIsDefeatSuppressed(Object *object);
Entry *devilGetRecord(u32 id);

s32 btlObjectHasEntryFlag(Object *object)
{
    if (object == NULL) {
        return 0;
    }
    if (btlIsDefeatSuppressed(object) == 0) {
        return 0;
    }
    Entry *entry = devilGetRecord(object->id);
    return entry != NULL ? ((entry->flags & 4) >> 2) : 0;
}

} /* extern "C" */
