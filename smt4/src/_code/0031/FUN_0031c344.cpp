/* NON_MATCHING: readable rewrite compiles (214 vs 144 rows); retail expands each stat case with its own copies of the clamp/add code and keeps the player/unit pointers in callee-saved registers */
#include "common.h"

struct ItemEffect {
    u8 unk00[0x60];
    u16 effectId;           // 0x60: 0x1f..0x23 raise one of the five stats by 3
};

extern "C" {

s32 playerPadTestBit(u32 bit);
s32 flagWordTestBit(void* unit, u32 bit);
void* gameGetUnitRecord(void);
void* gameGetPlayerData(void);
void FUN_00299370(s32 arg);
void unitRecalculateEffectiveStats(void* unit);

static s16* statAt(void* base, u32 offset)
{
    return reinterpret_cast<s16*>(reinterpret_cast<u8*>(base) + offset);
}

// Adds 3 (unless this is only a dry run) and keeps the stat below 1000.
static void raiseStat(s16* stat, s32 dryRun)
{
    if (dryRun == 0) *stat = *stat + 3;
    if (*stat >= 1000) *stat = 999;
}

// Raises one stat: the player's, or a unit's base and current value. Returns 1 when already capped.
static inline u8 raiseStatPair(void* player, void* unit, u32 playerOffset, u32 baseOffset, u32 currentOffset, s32 dryRun)
{
    u8 noEffect = 0;
    if (player != NULL) {
        s16* value = statAt(player, playerOffset);
        if (*value < 999) {
            raiseStat(value, dryRun);
        } else {
            noEffect = 1;
        }
    } else {
        s16* base = statAt(unit, baseOffset);
        noEffect = *base >= 0x3e7;
        if (!noEffect) raiseStat(base, dryRun);
        s16* current = statAt(unit, currentOffset);
        if (*current < 999) {
            raiseStat(current, dryRun);
        } else {
            noEffect = 1;
        }
    }
    return noEffect;
}

// Applies a stat-raising item to a party member (player when `member` < 0). Returns 1 when it
// had no effect (target unusable or stat already at the cap); `dryRun` only checks.
u8 FUN_0031c344(s32 member, ItemEffect* item, s32 dryRun)
{
    void* player = NULL;
    void* unit = NULL;
    s32 blocked;
    if (member < 0) {
        player = gameGetPlayerData();
        blocked = playerPadTestBit(1);
    } else {
        unit = gameGetUnitRecord();
        if (unit == NULL) return 1;
        blocked = flagWordTestBit(unit, 1);
    }
    if (blocked != 0) return 1;

    u8 noEffect = 0;
    switch (item->effectId) {
    case 0x1f:
        noEffect = raiseStatPair(player, unit, 0x12, 0x04, 0x20, dryRun);
        break;
    case 0x20:
        noEffect = raiseStatPair(player, unit, 0x16, 0x08, 0x24, dryRun);
        break;
    case 0x21:
        noEffect = raiseStatPair(player, unit, 0x14, 0x06, 0x22, dryRun);
        break;
    case 0x22:
        noEffect = raiseStatPair(player, unit, 0x18, 0x0a, 0x26, dryRun);
        break;
    case 0x23:
        noEffect = raiseStatPair(player, unit, 0x1a, 0x0c, 0x28, dryRun);
        break;
    default:
        return 1;
    }
    if (dryRun == 0 && noEffect == 0) {
        if (player != NULL) {
            FUN_00299370(0);
        } else {
            unitRecalculateEffectiveStats(unit);
        }
    }
    return noEffect;
}

} /* extern "C" */
