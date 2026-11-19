/* NON_MATCHING: register allocation differs: retail spills the member record and keeps the item loop base/limit (r5/r6) in registers and loads the divide-by-100 reciprocal later; logic matches. */
#include "common.h"
#include "mapnavi/naviMain.h"
#include "gamedata/SkillDataRecord.h"
#include "sys/RuntimeObjects.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"

/* Battle reward input: base experience and the enemy level it came from. */
struct RewardSource {
    s32 experience;
    s32 level;
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
void gameGetPlayerData(void);
s32 FUN_0022fd80(s32 experience, s32 level);
s32 bitsAt60Test(SlotRecordA *record, u32 bit);
s32 dataTable9Type3GetClamped(u32 growthType, s32 level);

/* Distribute the battle's experience to the pool and to every party member that is in the fight. */
void FUN_00331c60(RewardSource *source)
{
    RewardTotals *totals = g_engineCleanupOwner.totals;
    SaveSlotTableA *slotTable = gameGetSlotTable();
    gameGetPlayerData();
    s32 experience = source->experience;
    s32 level = source->level;
    if (playerHasFlagBit(1) == 0 && playerHasFlagBit(10) == 0)
        totals->entries[0].total += FUN_0022fd80(experience, level);
    for (s32 slot = 0; slot < 24; slot++) {
        if (slotTable->party[slot] < 0)
            continue;
        SlotRecordA *record = gameGetSlotRecord(slotTable->party[slot]);
        if (bitsAt60Test(record, 1) != 0 || bitsAt60Test(record, 10) != 0 || bitsAt60Test(record, 2) != 0)
            continue;
        SlotRecordA *member = gameGetSlotRecord(slotTable->party[slot]);
        f32 multiplier = 1.0f;
        for (s32 i = 0; i < 8; i++) {
            if (member->skills[i] != 0) {
                ItemRecord *item = reinterpret_cast<ItemRecord *>(dataTable41FindById(member->skills[i]));
                if (item != 0 && item->experienceRate != 0)
                    multiplier = item->experienceRate * 0.01f * multiplier;
            }
        }
        u32 baseShare = static_cast<u32>(experience * static_cast<s32>(multiplier * 100.0f)) / 100;
        u32 share = baseShare * dataTable9Type3GetClamped(member->level, level) / 100;
        if (share == 0 && baseShare != 0)
            share = 1;
        if (share == 0 && experience != 0)
            share = 1;
        totals->entries[1 + record->tableIndex].total += share;
    }
    for (u32 i = 0; i < 12; i++) {
        PartySlotA *actor = partyGetSlotPreferredFirst(static_cast<u16>(i));
        if (actorIsActive(actor) == 0)
            continue;
        s32 matches = partySlotMatchesSelected(actor);
        u32 share = static_cast<u32>(experience * dataTable9Type3GetClamped(actor->record.level, level)) / 100;
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
