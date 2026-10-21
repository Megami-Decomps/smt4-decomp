#include "common.h"

extern "C" {

struct Object { u8 unk00[0x62]; u16 id; };
struct Entry { u8 unk00[0xb3]; u8 flags; };
s32 FUN_00291e14(Object *object);
Entry *FUN_00184310(u32 id);

s32 btlObjectHasEntryFlag(Object *object)
{
    if (object == NULL) {
        return 0;
    }
    if (FUN_00291e14(object) == 0) {
        return 0;
    }
    Entry *entry = FUN_00184310(object->id);
    return entry != NULL ? ((entry->flags & 4) >> 2) : 0;
}

} /* extern "C" */
