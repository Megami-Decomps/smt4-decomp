/* NON_MATCHING: 259 lines (197 by shape): decides whether a battle enemy can be recruited (state flags, HP ratio,
 * chance from slot space and level), rewritten on the battle types with the masks read through a pointer to
 * g_btlMain (retail reloads them in the search loop). What remains: retail reads the mask at 0x573B40 from the same
 * g_btlMain base (+0x220, past BtlMainGlobalsA's 0x1D0 bytes: file data of the battle module, see the report), loads
 * the base after the first call, and gives the search and the roll other registers. */
#include "common.h"
#include "mapnavi/naviMain.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"
#include "battle/btlMain.h"
#include "battle/BtlEntryA.h"
#include "battle/BtlGlobals.h"
#include "util/Random.h"

/* The part of the save data read here. */
struct SaveDataView {
    /* 0x00000 */ u8 unk00000[0x27E3E];
    /* 0x27E3E */ u8 recruitStage;
};

#define BTL_FIRST_ENEMY 4
#define BTL_UNIT_END 0x36
#define BTL_DEVIL_FLAG_NO_RECRUIT 2
#define BTL_UNIT_FLAG_FIXED 0x80
#define RECRUIT_BIT_BONUS 0x3E

extern "C" {
/* Battle state bits that let every enemy be recruited without the HP and chance rolls (0x573B40, after g_btlMain:
 * retail reaches it from g_btlMain's base, so it is file data of the battle module). */
extern u64 DAT_00573b40;

SaveDataView *gameDataBlocksGetSaveData(void);
s32 gameFlagIsSet(s32 flag);
s32 gameSlotTableFindFree(void);
s32 gameDataFlagTestBit(s32 bit);

/* Chance (percent) from the player/devil level gap, limited by `ceiling`. */
static __inline s32 recruitLevelChance(s32 ceiling, const NkmEnemyRecordA *record)
{
    s32 chance = ((s32)gameGetPlayerData()->level - (s32)(record->level & 0x7FFF)) / 2 + 5;
    if (chance < 0)
        return 0;
    if (chance >= ceiling + 1)
        return ceiling;
    return chance;
}

/* Whether the battle's one remaining enemy agrees to join: flags it as rolled and, on success, as recruited. */
u32 battleTryRecruitEnemy(BtlMainStateA *state)
{
    const BtlMainGlobalsA *masks = &g_btlMain;
    if (playerHasFlagBit(1) != 0) {
        return 0;
    }
    if ((state->stateFlags64.bits & masks->fixedScore.mask) != 0) {
        return 0;
    }
    if (gameDataBlocksGetSaveData()->recruitStage <= 5 && (DAT_00573b40 & state->markerMasks.bits) == 0) {
        return 0;
    }
    if (gameFlagIsSet(0x416) != 0 && (DAT_00573b40 & state->markerMasks.bits) == 0) {
        return 0;
    }
    if (state->entryCounts.present > 1 || state->entryCounts.present == 0) {
        return 0;
    }
    for (s32 index = BTL_FIRST_ENEMY; index < BTL_UNIT_END; index++) {
        BtlCombatantEntryA *unit = &state->entries[index];
        if ((unit->flags & masks->combatantMasks.required) == 0 || (masks->exclusionMask & unit->flags) != 0 ||
            (unit->flags & masks->actorCategories[2]) == 0) {
            continue;
        }
        if (unit == NULL) {
            return 0;
        }
        NkmEnemyRecordA *record = nkmEnemyFindById(unit->data.id);
        if ((record->flags & BTL_DEVIL_FLAG_NO_RECRUIT) != 0) {
            return 0;
        }
        if ((masks->recruitMasks.recruited & unit->flags) != 0 || (unit->flags & masks->recruitMasks.recruitRolled) != 0) {
            return 0;
        }
        if ((unit->data.statusFlags & BTL_UNIT_FLAG_FIXED) != 0) {
            return 0;
        }
        if ((DAT_00573b40 & state->markerMasks.bits) == 0) {
            s32 hpPercent = unit->data.hp * 100 / unit->data.maxHp;
            s32 hpLimit = 15;
            if (gameDataFlagTestBit(RECRUIT_BIT_BONUS) != 0) {
                hpLimit = 25;
            }
            if (hpPercent >= hpLimit) {
                return 0;
            }
            unit->flags |= masks->recruitMasks.recruitRolled;

            u8 capacity = gameGetSlotTable()->count;
            s32 freeSlot = gameSlotTableFindFree();
            s32 chance;
            if (freeSlot < 4) {
                chance = 15;
            } else if (freeSlot == 4) {
                chance = 25;
            } else if (freeSlot == 5) {
                chance = 20;
            } else if (freeSlot == 6) {
                chance = 15;
            } else if (capacity - freeSlot >= 3) {
                chance = recruitLevelChance(15, record);
            } else {
                chance = recruitLevelChance(10, record);
            }
            if (gameDataFlagTestBit(RECRUIT_BIT_BONUS) != 0) {
                chance += 20;
            }
            if ((s32)lcgRandomRange(99) > chance) {
                return 0;
            }
        } else {
            unit->flags |= masks->recruitMasks.recruitRolled;
        }
        unit->flags |= masks->recruitMasks.recruited;
        return 1;
    }
    return 0;
}

} /* extern "C" */
