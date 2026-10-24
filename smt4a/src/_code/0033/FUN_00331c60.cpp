/* NON_MATCHING: register allocation differs: retail spills the member record and keeps the item loop base/limit (r5/r6) in registers and loads the divide-by-100 reciprocal later; logic matches. */
#include "common.h"

/* Battle reward input: base experience and the enemy level it came from. */
struct RewardSource {
    s32 experience;
    s32 level;
};

/* A party member's slot record (accessed fields). */
struct SlotRecord {
    u8 unk00[0x34];
    u16 itemIds[8];     // 0x34
    u8 unk44[0x20];
    u16 growthType;     // 0x64
    u8 unk66;           // 0x66: reward slot the member's share goes to
};

struct ItemRecord {
    u8 unk00[0x2F];
    u8 experienceRate;  // 0x2F
};

/* The reward totals: entries of 0x28 bytes starting at 0x7870 (0 = pool, 1.. = members, 0x24 = overflow). */
struct RewardTotals {
    u8 unk0000[0x7870];
    struct {
        s32 total;
        u8 unk04[0x24];
    } entries[0x25];
};

struct RewardOwner {
    u32 unk00;
    RewardTotals *totals;   // 0x04
};

extern "C" {
extern RewardOwner g_engineCleanupOwner;
s8 *gameGetSlotTable(void);
void gameGetPlayerData(void);
s32 playerHasFlagBit(u32 bit);
s32 FUN_0022fd80(s32 experience, s32 level);
SlotRecord *gameGetSlotRecord(s32 slot);
s32 bitsAt60Test(SlotRecord *record, u32 bit);
ItemRecord *dataTable41FindById(u32 id);
s32 dataTable9Type3GetClamped(u32 growthType, s32 level);
void *FUN_003e503c(u32 index);
s32 actorIsActive(void *actor);
s32 partySlotMatchesSelected(void *actor);

/* Distribute the battle's experience to the pool and to every party member that is in the fight. */
void FUN_00331c60(RewardSource *source)
{
    RewardTotals *totals = g_engineCleanupOwner.totals;
    s8 *slotTable = gameGetSlotTable();
    gameGetPlayerData();
    s32 experience = source->experience;
    s32 level = source->level;
    if (playerHasFlagBit(1) == 0 && playerHasFlagBit(10) == 0)
        totals->entries[0].total += FUN_0022fd80(experience, level);
    for (s32 slot = 0; slot < 24; slot++) {
        if (slotTable[0x1C88 + slot] < 0)
            continue;
        SlotRecord *record = gameGetSlotRecord(slotTable[0x1C88 + slot]);
        if (bitsAt60Test(record, 1) != 0 || bitsAt60Test(record, 10) != 0 || bitsAt60Test(record, 2) != 0)
            continue;
        SlotRecord *member = gameGetSlotRecord(slotTable[0x1C88 + slot]);
        f32 multiplier = 1.0f;
        for (s32 i = 0; i < 8; i++) {
            if (member->itemIds[i] != 0) {
                ItemRecord *item = dataTable41FindById(member->itemIds[i]);
                if (item != 0 && item->experienceRate != 0)
                    multiplier = item->experienceRate * 0.01f * multiplier;
            }
        }
        u32 baseShare = static_cast<u32>(experience * static_cast<s32>(multiplier * 100.0f)) / 100;
        u32 share = baseShare * dataTable9Type3GetClamped(member->growthType, level) / 100;
        if (share == 0 && baseShare != 0)
            share = 1;
        if (share == 0 && experience != 0)
            share = 1;
        totals->entries[1 + record->unk66].total += share;
    }
    for (u32 i = 0; i < 12; i++) {
        void *actor = FUN_003e503c(static_cast<u16>(i));
        if (actorIsActive(actor) == 0)
            continue;
        s32 matches = partySlotMatchesSelected(actor);
        u32 share = static_cast<u32>(experience * dataTable9Type3GetClamped(*reinterpret_cast<u16 *>(static_cast<u8 *>(actor) + 100), level)) / 100;
        if (share == 0 && experience != 0)
            share = 1;
        if (matches == 0)
            share = static_cast<u32>(static_cast<f32>(share) * 0.8f);
        if (static_cast<s32>(share) < 1 && experience != 0)
            share = 1;
        s32 index = i + 25;
        if (index > 36)
            index = 36;
        totals->entries[index].total += share;
    }
}
}
