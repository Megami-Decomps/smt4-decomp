/* NON_MATCHING: retail converts the float id once before the first call and keeps it in s17; here the conversion is placed after btlGetMainState and registers/switch offsets shift. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/BattleUnitSlot.h"

struct BtlMainState;

/* The rate for a stat step in -3..3. */
static __inline f32 stepRate(const f32 *table, s32 step)
{
    s32 index = step + 3;
    return table[index];
}

extern "C" {
extern const f32 DAT_00439a94[7];
extern const f32 DAT_00439ab0[7];
extern u32 g_btlScriptUnit;
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id);

/* Rate multiplier for a script's damage kind (7-11) applied to the listed combatant, with the extra boosts for kinds 7 and 8. */
f32 FUN_0022a690(s32 kind, f32 listedId)
{
    f32 rate = 1.0f;
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
    s32 other = 0;
    s32 stat = entry ? entry->stat[kind] : 0;
    s32 negatedStat = -stat;
    entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
    switch (kind) {
    case 7:
    case 8:
        rate = stepRate(DAT_00439a94, stat);
        if (entry->groupMask & 0x10)
            rate = DAT_00439a94[6];
        break;
    case 10:
        rate = stepRate(DAT_00439a94, negatedStat);
        break;
    case 11:
        rate = stepRate(DAT_00439ab0, stat);
        entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
        if (entry)
            other = entry->effects.unk08a;
        rate = stepRate(DAT_00439ab0, other) * rate;
        break;
    case 9:
        rate = stepRate(DAT_00439ab0, negatedStat);
        entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
        if (entry)
            other = entry->effects.unk08a;
        rate = stepRate(DAT_00439ab0, -other) * rate;
        break;
    }
    if (!(reinterpret_cast<BtlEntry *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)))->flags & 0x200)) {
        if (kind == 8) {
            entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
            if (entry && entry->effects.primaryAlternate > 0)
                rate *= 2.5f;
            entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
            if (entry && entry->effects.unk08c > 0)
                rate *= 1.25f;
            entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
            if (entry && entry->effects.secondaryAlternate > 0)
                rate *= 3.0f;
        } else if (kind == 7) {
            entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
            if (entry && entry->effects.primary > 0)
                rate *= 2.5f;
            entry = btlMainFindEntryByListedId(btlGetMainState(), (s32)listedId);
            if (entry && entry->effects.secondary > 0)
                rate *= 3.0f;
        }
    }
    return rate;
}
}
