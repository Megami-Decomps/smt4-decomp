#include "shard/W6_W6Match2_KeyedValueTable.h"

// Return the first occupied value whose two keys match, or zero.
extern "C" u32 keyedValueFindPair(const KeyedValueTable* table, s32 firstKey, s32 secondKey)
{
    for (s32 index = 0; index < 50; ++index) {
        const KeyedValueSlot* slot = &table->slots[index];
        if (slot->value != 0 && slot->firstKey == firstKey && slot->secondKey == secondKey) {
            return slot->value;
        }
    }
    return 0;
}
