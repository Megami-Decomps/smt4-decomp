/* NON_MATCHING: repeated signed empty-slot checks and definition-result registers differ from retail. */
#include "shard/W6_W6Match1_PartySlot.h"

struct PartySortDefinition { u8 unk00[2]; u8 rank; u8 unk03[15]; u16 category; };
extern "C" {
PartySlotA *gameGetSlotRecord(s32 index);
const PartySortDefinition *FUN_00184310(u32 id);
s32 FUN_002909f8(const s32 *left, const s32 *right);

// Order populated party slots by descending category and rank, then the shared tie breaker.
s32 FUN_002ce730(const s32 *left, const s32 *right)
{
    if (*left < 0)
        return *right < 0 ? 0 : 1;
    if (*right < 0)
        return -1;
    PartySlotA *a = gameGetSlotRecord(*left);
    PartySlotA *b = gameGetSlotRecord(*right);
    s32 category = FUN_00184310(a->unk62)->category;
    s32 difference = FUN_00184310(b->unk62)->category - category;
    if (difference)
        return difference;
    if (*left < 0)
        return *right < 0 ? 0 : 1;
    if (*right < 0)
        return -1;
    a = gameGetSlotRecord(*left);
    b = gameGetSlotRecord(*right);
    s32 rank = FUN_00184310(a->unk62)->rank;
    difference = FUN_00184310(b->unk62)->rank - rank;
    if (difference)
        return difference;
    return FUN_002909f8(left, right);
}
}
