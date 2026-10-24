/* NON_MATCHING: adds a battle's rewards to the result tally (money, item drops by id, experience for the party and for each demon slot with the reduced share for non-participants); written from the decompilation, the float/int share arithmetic and slot lookups are approximated and not compared with retail */
#include "common.h"

#define REWARD_ITEM_SLOTS 6
#define REWARD_DEMON_SLOTS 0x18
#define REWARD_PARTY_SLOTS 0xC
#define REWARD_PLAYER_BIT_NO_EXP_A 1
#define REWARD_PLAYER_BIT_NO_EXP_B 10
#define REWARD_RESERVE_SHARE 0.3f
#define REWARD_BENCH_SHARE 0.8f
#define REWARD_SKILL_SCALE 0.01f

struct BattleRewards {
    /* 0x00 */ s32 experience;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 money;
    /* 0x0C */ s32 itemIds[REWARD_ITEM_SLOTS];
    /* 0x24 */ s32 itemCounts[REWARD_ITEM_SLOTS];
};

struct BattleTally {
    /* 0x0000 */ u8 unk0000[0x43F0];
    /* 0x43F0 */ s32 itemIds[REWARD_ITEM_SLOTS];
    /* 0x4408 */ s32 itemCounts[REWARD_ITEM_SLOTS];
    /* 0x4420 */ u8 unk4420[8];
    /* 0x4428 */ s32 money;
    /* 0x442C */ u8 unk442C[0x3444];
    /* 0x7870 */ struct { s32 experience; u8 unk[0x24]; } partyExperience[1];
};

struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x1C88];
    /* 0x1C88 */ s8 slotIds[REWARD_DEMON_SLOTS];
    /* 0x1CA0 */ s8 leaders[3];
};

struct DemonRecord {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 skills[8];
    /* 0x44 */ u8 unk44[0x20];
    /* 0x64 */ u16 growthType;
    /* 0x66 */ u8 experienceSlot;
};

struct SkillRecord {
    /* 0x00 */ u8 unk00[0x2F];
    /* 0x2F */ u8 bonus;
};

extern "C" {
extern u8 g_engineCleanupOwner[];

SlotTable *gameGetSlotTable(void);
void gameGetPlayerData(void);
DemonRecord *gameGetSlotRecord(void);
s32 playerHasFlagBit(u32 bit);
s32 FUN_0022fd80(s32 experience, u32 flag);
SkillRecord *dataTable41FindById(u32 id);
s32 bitsAt60Test(DemonRecord *record, u32 bit);
s32 dataTable9Type3GetClamped(u16 type, u32 flag);
DemonRecord *FUN_003e503c(u32 slot);
s32 actorIsActive(void);
s32 partySlotMatchesSelected(u32 slot);

/* Experience share of `base` for the slot's growth type, at least 1 when there is any base. */
static __inline u32 rewardShare(u32 base, u16 growthType)
{
    u32 share = (base * (u32)dataTable9Type3GetClamped(growthType, 0)) / 100;
    if (share == 0 && base != 0)
        share = 1;
    return share;
}

void FUN_0031e6f4(BattleRewards *rewards)
{
    BattleTally *tally = *reinterpret_cast<BattleTally **>(g_engineCleanupOwner + 4);
    SlotTable *slots = gameGetSlotTable();
    gameGetPlayerData();
    tally->money += rewards->money;

    for (s32 i = 0; i < REWARD_ITEM_SLOTS; i++) {
        s32 id = rewards->itemIds[i];
        s32 count = rewards->itemCounts[i];
        if (id == 0 || count == 0)
            continue;
        for (s32 j = 0; j < REWARD_ITEM_SLOTS; j++) {
            if (tally->itemIds[j] == id) {
                tally->itemCounts[j] += count;
                break;
            }
            if (tally->itemIds[j] == 0) {
                tally->itemIds[j] = id;
                tally->itemCounts[j] = count;
                break;
            }
        }
    }

    s32 experience = rewards->experience;
    if (playerHasFlagBit(REWARD_PLAYER_BIT_NO_EXP_A) == 0 && playerHasFlagBit(REWARD_PLAYER_BIT_NO_EXP_B) == 0)
        tally->partyExperience[0].experience += FUN_0022fd80(experience, 0);

    for (s32 slot = 0; slot < REWARD_DEMON_SLOTS; slot++) {
        if (slots->slotIds[slot] < 0)
            continue;
        DemonRecord *record = gameGetSlotRecord();
        if (bitsAt60Test(record, 1) != 0 || bitsAt60Test(record, 10) != 0)
            continue;

        bool leader = slots->leaders[0] == slots->slotIds[slot] || slots->leaders[1] == slots->slotIds[slot]
                      || slots->leaders[2] == slots->slotIds[slot];
        DemonRecord *current = gameGetSlotRecord();
        f32 skillScale = 1.0f;
        for (s32 s = 0; s < 8; s++) {
            u32 skill = current->skills[s];
            if (skill != 0) {
                SkillRecord *skillRecord = dataTable41FindById(skill);
                if (skillRecord != NULL && skillRecord->bonus != 0)
                    skillScale = (f32)skillRecord->bonus * REWARD_SKILL_SCALE * skillScale;
            }
        }
        u32 base = (u32)(experience * (s32)(skillScale * 100.0f)) / 100;
        u32 share = rewardShare(base, current->growthType);
        if (!leader)
            share = (u32)((f32)share * REWARD_RESERVE_SHARE);
        if ((s32)share < 1 && experience != 0)
            share = 1;
        *reinterpret_cast<s32 *>(reinterpret_cast<u8 *>(tally) + record->experienceSlot * 0x28 + 0x7898) += share;
    }

    for (u32 slot = 0; (s32)slot < REWARD_PARTY_SLOTS; slot++) {
        u32 index = slot & 0xFFFF;
        DemonRecord *partyRecord = FUN_003e503c(index);
        if (actorIsActive() == 0)
            continue;
        s32 selected = partySlotMatchesSelected(index);
        u32 share = (u32)(experience * dataTable9Type3GetClamped(partyRecord->growthType, 0)) / 100;
        if (share == 0 && experience != 0)
            share = 1;
        if (selected == 0)
            share = (u32)((f32)share * REWARD_BENCH_SHARE);
        if ((s32)share < 1 && experience != 0)
            share = 1;
        u32 target = slot + 0x19;
        if (target >= 0x25)
            target = 0x24;
        *reinterpret_cast<s32 *>(reinterpret_cast<u8 *>(tally) + target * 0x28 + 0x7870) += share;
    }
}

} /* extern "C" */
