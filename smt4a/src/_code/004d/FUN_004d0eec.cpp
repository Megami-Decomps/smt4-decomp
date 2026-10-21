/* NON_MATCHING: only the final signed comparison is commuted (capacity > occupied instead of occupied < capacity), with corresponding condition codes. */
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
    return occupied < party->capacity;
}
}
