/* NON_MATCHING: readable rewrite from retail disassembly compiles (217 vs 201 rows); retail also inlines a percent-bonus step on the gold whose percentage is constant 0 (folded away), and orders registers differently */
#include "common.h"

// Battle reward summary handed to the result screen (only the fields used here).
struct RewardInput {
    u32 itemIds[6];         // 0x00
    u32 itemCounts[6];      // 0x18
    u32 gold;               // 0x30
    s32 experience;         // 0x34
    u32 level;              // 0x38
    u8 unk3c;               // 0x3c
    u8 unk3d;               // 0x3d
};

// Result-screen accumulator.
struct ResultData {
    u8 unk0000[0x35b4];
    u32 totalExperience;            // 0x35b4
    u32 unitExperience[24];         // 0x35b8 (indexed by the unit's result slot)
    u32 itemIds[6];                 // 0x3618
    u32 itemCounts[6];              // 0x3630
    u32 gold;                       // 0x3650
    u8 unk3654[0xd641 - 0x3654];
    u8 unkd641;                     // 0xd641
    u8 unkd642;                     // 0xd642
};

struct UnitRecord {
    u8 unk00[0x34];
    u16 skills[8];          // 0x34
    u8 unk44[4];
    u8 growthType;          // 0x48
    u8 unk49;
    u8 resultSlot;          // 0x4a
};

struct PassiveRecord {
    u8 unk00[0x2f];
    u8 expBonus;            // 0x2f: percent bonus (0 = none)
};

struct PlayerData {
    u8 unk00[0x76];
    u8 growthType;          // 0x76
};

struct SlotTable {
    u8 unk0000[0x90f0];
    s8 slots[24];           // 0x90f0
    s8 activeParty[3];      // 0x9108
};

extern "C" {

extern ResultData* g_result;

SlotTable* gameGetSlotTable(void);
PlayerData* gameGetPlayerData(void);
u32 dataTable09Sub3GetRecord(u32 growthType, u32 level);
s32 playerPadTestBit(s32 bit);
UnitRecord* gameGetUnitRecord(s32 slot);
s32 flagWordTestBit(UnitRecord* unit, u32 bit);
PassiveRecord* passiveSkillLookupRecord(u32 skill);

// Adds a battle's rewards to the result screen: gold, dropped items (merged by id), the
// player's and every party member's experience share (skills with an experience bonus scale
// it, members out of the active party get 30%).
void FUN_00214568(RewardInput* reward)
{
    ResultData* result = g_result;
    SlotTable* slotTable = gameGetSlotTable();
    PlayerData* player = gameGetPlayerData();
    result->unkd641 = reward->unk3c;
    result->unkd642 = reward->unk3d;
    result->gold += reward->gold;
    for (s32 i = 0; i < 6; i++) {
        u32 id = reward->itemIds[i];
        u32 count = reward->itemCounts[i];
        if (id == 0 || count == 0) continue;
        for (s32 j = 0; j < 6; j++) {
            if (result->itemIds[j] == id) {
                result->itemCounts[j] += count;
                break;
            }
            if (result->itemIds[j] == 0) {
                result->itemIds[j] = id;
                result->itemCounts[j] = count;
                break;
            }
        }
    }

    s32 share = reward->experience / 4;
    if (share < 1 && reward->experience != 0) share = 1;
    s32 playerShare = (share * (s32)dataTable09Sub3GetRecord(player->growthType, reward->level)) / 100;
    if (playerShare < 1 && share != 0) playerShare = 1;
    if (playerPadTestBit(1) == 0 && playerPadTestBit(10) == 0) {
        result->totalExperience += playerShare;
    }

    for (s32 i = 0; i < 24; i++) {
        if (slotTable->slots[i] < 0) continue;
        UnitRecord* member = gameGetUnitRecord(slotTable->slots[i]);
        if (flagWordTestBit(member, 1) != 0 || flagWordTestBit(member, 10) != 0 || flagWordTestBit(member, 2) != 0) continue;
        s8 slot = slotTable->slots[i];
        bool active = slotTable->activeParty[0] == slot || slotTable->activeParty[1] == slot || slotTable->activeParty[2] == slot;
        UnitRecord* unit = gameGetUnitRecord(slot);
        f32 bonus = 1.0f;
        for (s32 k = 0; k < 8; k++) {
            u32 skill = unit->skills[k];
            if (skill == 0) continue;
            PassiveRecord* passive = passiveSkillLookupRecord(skill);
            if (passive != NULL && passive->expBonus != 0) {
                bonus = (f32)passive->expBonus * 0.01f * bonus;
            }
        }
        u32 scaled = (u32)(share * (s32)(bonus * 100.0f)) / 100;
        u32 amount = (scaled * dataTable09Sub3GetRecord(unit->growthType, reward->level)) / 100;
        if (amount == 0 && scaled != 0) amount = 1;
        if (!active) amount = (u32)((f32)amount * 0.3f);
        if ((s32)amount < 1 && share != 0) amount = 1;
        result->unitExperience[member->resultSlot] += amount;
    }
}

} /* extern "C" */
