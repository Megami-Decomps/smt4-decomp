#include "gamedata/KeyedSaveSlots.h"

extern "C" {

/* Looks up the cached value for `key` in the 16-slot table; an unused slot is picked when the key is absent. */
u32 FUN_001f4da0(u32 key)
{
    KeyedSlot *selected = keyedSlotFind(key);

    if (selected->key == 0) {
        return 0;
    }
    return selected->value;
}

} /* extern "C" */
