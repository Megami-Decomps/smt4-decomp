/* NON_MATCHING: compiler uses a writeback slot pointer and a paired final store instead of retail's separate address calculations. */
#include "common.h"
#include "battle/BattleUnit.h"

struct UnitValueSlot {
    s32 key; // 0x00: a negative key and zero value mark an unused slot
    u32 value; // 0x04
};
struct UnitValueTable {
    u8 unk000[0x5b8];
    UnitValueSlot slots[0x85]; // 0x5b8
};

// Store a key/value pair in the unit's first unused value slot.
extern "C" void FUN_004e5a40(u32 unitId, s32 key, u32 value)
{
    UnitValueTable *unit = reinterpret_cast<UnitValueTable *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(unitId)));
    for (s32 i = 0; i < 0x85; ++i) {
        UnitValueSlot *slot = &unit->slots[i];
        if (slot->key < 0 && slot->value == 0) {
            slot->key = key;
            slot->value = value;
            return;
        }
    }
}
