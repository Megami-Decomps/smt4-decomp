/* NON_MATCHING: slot lookup omits retail's narrowed-index guard; rank-base caching, loop counters and clamp registers differ. */
#include "shard/W6_W6Match1_PartySlot.h"
#include "shard/Shard004B.h"

extern "C" {
PartySlotTableA *gameGetSlotTable(void);
const ItemRankDefinition *dataTable04FindById(u32);
s32 FUN_0035e458(u32);
s32 FUN_0035d89c(u32);
void FUN_004cd0c8(PartySlotA *, s16, u16 *);
void FUN_004cd4b8(PartySlotA *, s16);

u32 FUN_003e4b2c(u32 id, s32 targetLevel, s32 maximumIncrease)
{
    PartySlotA *slot = NULL;
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *candidate = &gameGetSlotTable()->slots[index];
        if (candidate->id == id) {
            slot = candidate;
            break;
        }
    }
    if (!slot || targetLevel <= slot->level)
        return 0;
    s32 increase = targetLevel - slot->level;
    if (maximumIncrease < increase)
        increase = maximumIncrease;
    u16 learned[8] = {};
    FUN_004cd0c8(slot, static_cast<s16>(increase), learned);
    ItemRankRecord *ranks = reinterpret_cast<ItemRankRecord *>(slot);
    s32 nextSlot = 0;
    while (nextSlot < 8 && ranks->items[nextSlot])
        ++nextSlot;
    for (s32 index = 0; index < 8 && learned[index]; ++index, ++nextSlot) {
        u32 skill = learned[index];
        if (slot && nextSlot < 8) {
            ranks->items[nextSlot] = skill;
            const ItemRankDefinition *definition = dataTable04FindById(skill);
            s32 rank = 0;
            if (definition && definition->category < 18)
                rank = ranks->categoryRanks[definition->category];
            s32 maximum = FUN_0035e458(skill);
            s32 minimum = FUN_0035d89c(skill);
            if (maximum < rank)
                rank = static_cast<s8>(maximum);
            else if (rank < minimum)
                rank = static_cast<s8>(minimum);
            ranks->ranks[nextSlot] = rank;
        }
    }
    FUN_004cd4b8(slot, static_cast<s16>(increase));
    return 1;
}
}
