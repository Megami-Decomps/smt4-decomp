/* NON_MATCHING: capacity helper fixes saved bases; clamp zero comparison is conditional and member-state update scratch registers are exchanged. */
#include "common.h"
#include "shard/dataTableCountRecordStages.h"

struct PartyMemberList {
    u8 unk00[0x34];
    u16 ids[8];
    s8 states[8];
};
extern "C" {
PartyMemberList *gameGetPlayerData();
s32 gameDataFlagTestBit(u32 flag);

static __inline s32 partyMemberCapacity(void)
{
    s32 capacity = 4;
    if (gameDataFlagTestBit(0x77))
        capacity = 5;
    if (gameDataFlagTestBit(0x78))
        ++capacity;
    if (gameDataFlagTestBit(0x79))
        ++capacity;
    if (gameDataFlagTestBit(0x7a))
        ++capacity;
    if (capacity > 8)
        return 8;
    return capacity;
}

// Increase an existing member's count to its limit, or add it to the first unlocked empty slot.
void FUN_003e0174(u32 id)
{
    PartyMemberList *party = gameGetPlayerData();
    s32 capacity = partyMemberCapacity();
    for (s32 i = 0; i < capacity; ++i) {
        if (party->ids[i] == id) {
            s32 limit = dataTableCountRecordStages(id);
            s8 state = party->states[i];
            if (state < limit)
                party->states[i] = state + 1;
            return;
        }
    }
    for (s32 i = 0; i < capacity; ++i) {
        if (party->ids[i] == 0) {
            party->ids[i] = (u16)id;
            party->states[i] = 1;
            return;
        }
    }
}
}
