#include "shard/Shard0031.h"

struct PartySlotCapacity {
    SlotTable table;
    u8 unk1CA0[3];
    u8 capacity;
};

extern "C" {
SlotTable* gameGetSlotTable(void);

u8 FUN_004d0eec(void)
{
    const PartySlotCapacity* party = reinterpret_cast<const PartySlotCapacity*>(gameGetSlotTable());
    const SlotTable* slots = gameGetSlotTable();
    s32 occupied = 0;
    for (s32 index = 0; index < 24; ++index) {
        if (slots->slots[index] < 0) {
            break;
        }
        ++occupied;
    }
    s32 capacity = party->capacity;
    return occupied < capacity;
}
}
