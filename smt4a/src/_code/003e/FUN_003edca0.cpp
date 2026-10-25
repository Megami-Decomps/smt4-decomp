/* NON_MATCHING: decides whether a battle enemy can be recruited (state flags, hp ratio, chance from slot space and level); written from the decompilation, the 64-bit mask tests and branch layout not compared with retail */
#include "common.h"
#include "mapnavi/naviMain.h"

struct BtlMask {
    u32 low;
    u32 high;
};

static __inline bool btlMaskHit(const BtlMask &flags, const BtlMask &mask)
{
    return (flags.low & mask.low) != 0 || (flags.high & mask.high) != 0;
}

struct BtlRecruitState {
    /* 0x0000 */ u8 unk0000[0x1FFC];
    /* 0x1FFC */ u8 *units;
    /* 0x2000 */ u8 unk2000[2];
    /* 0x2002 */ s16 enemyCount;
    /* 0x2004 */ u8 unk2004[0x259C];
    /* 0x45A0 */ BtlMask stateA;
    /* 0x45A8 */ BtlMask stateB;
};

struct DevilRecord {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 level;          /* bit 15 is a flag */
    /* 0x04 */ u8 unk04[0x12];
    /* 0x16 */ u16 flags;
};

struct SaveDataView {
    /* 0x00000 */ u8 unk00000[0x27E3E];
    /* 0x27E3E */ u8 recruitStage;
};

struct SlotTableView {
    /* 0x000 */ u8 unk000[0x1CA3];
    /* 0x1CA3 */ u8 capacity;
};

struct PlayerLevelView {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 level;
};

#define BTL_UNIT_STRIDE 0x408
#define BTL_FIRST_ENEMY 4
#define BTL_UNIT_END 0x36
#define BTL_DEVIL_FLAG_NO_RECRUIT 2
#define BTL_UNIT_FLAG_FIXED 0x80

extern "C" {
extern BtlMask DAT_00573978;   /* candidate unit */
extern BtlMask DAT_00573990;   /* enemy side */
extern BtlMask DAT_005739a0;   /* excluded units */
extern BtlMask DAT_005739b0;   /* flags set after a successful roll */
extern BtlMask DAT_005739c0;   /* flags set when the roll starts */
extern BtlMask DAT_00573a50;
extern BtlMask DAT_00573b40;

SaveDataView *gameDataBlocksGetSaveData(void);
s32 gameFlagIsSet(s32 flag);
s32 lcgRandomRange(u32 maximum);
DevilRecord *dataTable00FindById(u32 id);
SlotTableView *gameGetSlotTable(void);
s32 gameSlotTableFindFree(void);
PlayerLevelView *gameGetPlayerData(void);
s32 gameDataFlagTestBit(s32 bit);

#define RECRUIT_BIT_BONUS 0x3E

/* Chance (percent) from the player/devil level gap, limited by `ceiling`. */
static __inline s32 recruitLevelChance(s32 ceiling, const DevilRecord *record)
{
    s32 chance = ((s32)gameGetPlayerData()->level - (s32)(record->level & 0x7FFF)) / 2 + 5;
    if (chance < 0)
        return 0;
    if (chance >= ceiling + 1)
        return ceiling;
    return chance;
}

u32 FUN_003edca0(BtlRecruitState *state)
{
    if (playerHasFlagBit(1) != 0 || btlMaskHit(state->stateA, DAT_00573a50))
        return 0;

    SaveDataView *save = gameDataBlocksGetSaveData();
    bool stateBHit = btlMaskHit(state->stateB, DAT_00573b40);
    if (save->recruitStage < 6 && !stateBHit)
        return 0;
    if (gameFlagIsSet(0x416) != 0 && !stateBHit)
        return 0;
    if (state->enemyCount >= 2 || state->enemyCount == 0)
        return 0;

    for (s32 index = BTL_FIRST_ENEMY; index < BTL_UNIT_END; index++) {
        BtlMask *flags = (BtlMask *)(state->units + index * BTL_UNIT_STRIDE);
        BtlMask current = *flags;
        if (!btlMaskHit(current, DAT_00573978) || btlMaskHit(current, DAT_005739a0) || !btlMaskHit(current, DAT_00573990))
            continue;

        u32 *unitWords = (u32 *)flags;
        u16 devilId = *(u16 *)((u8 *)flags + 0x166);
        DevilRecord *record = dataTable00FindById(devilId);
        if ((record->flags & BTL_DEVIL_FLAG_NO_RECRUIT) != 0)
            return 0;
        if (btlMaskHit(*flags, DAT_005739b0) || btlMaskHit(*flags, DAT_005739c0))
            return 0;
        if ((unitWords[0x9D] & BTL_UNIT_FLAG_FIXED) != 0)
            return 0;

        if (!btlMaskHit(state->stateB, DAT_00573b40)) {
            s32 hpPercent = (s32)(unitWords[0x96] * 100) / (s32)unitWords[0x97];
            s32 hpLimit = gameDataFlagTestBit(RECRUIT_BIT_BONUS) != 0 ? 0x19 : 0xF;
            if (hpLimit <= hpPercent)
                return 0;
            flags->low |= DAT_005739c0.low;
            flags->high |= DAT_005739c0.high;

            u8 capacity = gameGetSlotTable()->capacity;
            s32 freeSlot = gameSlotTableFindFree();
            s32 chance;
            if (freeSlot < 4)
                chance = 0xF;
            else if (freeSlot == 4)
                chance = 0x19;
            else if (freeSlot == 5)
                chance = 0x14;
            else if (freeSlot == 6)
                chance = 0xF;
            else if ((s32)capacity - freeSlot >= 3)
                chance = recruitLevelChance(0xF, record);
            else
                chance = recruitLevelChance(10, record);
            if (gameDataFlagTestBit(RECRUIT_BIT_BONUS) != 0)
                chance += 0x14;
            if (chance < lcgRandomRange(99))
                return 0;
        } else {
            flags->low |= DAT_005739c0.low;
            flags->high |= DAT_005739c0.high;
        }
        flags->low |= DAT_005739b0.low;
        flags->high |= DAT_005739b0.high;
        return 1;
    }
    return 0;
}

} /* extern "C" */
