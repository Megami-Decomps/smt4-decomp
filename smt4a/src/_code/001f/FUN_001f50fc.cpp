#include "gamedata/KeyedSaveSlots.h"

extern "C" {

/* Stores `value` in the save data slot keyed `key`, using the first free slot when no slot has that key. */
void FUN_001f50fc(s32 key, s32 value)
{
    KeyedSlot *slot = keyedSlotFind(key);
    if (slot->key == 0) {
        slot->key = key;
    }
    slot->value = value;
}

} /* extern "C" */
