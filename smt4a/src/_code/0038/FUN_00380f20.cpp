/* NON_MATCHING: hpPercent helper matches the ldm hp/maxHp load (37 diff lines); remaining: third mask test and marked-entry test are predicated (changing BtlEntryA::marked to s8 drops this to 2 diff lines but regresses 5 other units in usercheck). */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

/* The tail of a roster record that a finished entry clears. */
struct RosterRecordClear {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 unk48;
    /* 0x4C */ u32 unk4c;
    /* 0x50 */ u8 unk50[0x5c];
    /* 0xAC */ u32 unkAc;
};

struct EntryRef {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s8 slot;
};

/* Current HP as a percentage of the maximum (same helper as FUN_00372b80). */
static __inline s32 hpPercent(s32 hp, s32 maxHp)
{
    return hp * 100 / maxHp;
}

extern "C" {

extern const u64 g_battleMaskPresets[];

s32 scrGetArg(u32 index);
EntryRef *FUN_003eca48(BtlMainStateA *battle, u32 id);
s32 FUN_003ec668(BtlMainStateA *battle, s32 slot, s32 kind);
void FUN_003f2638(BtlMainStateA *battle, s32 kind, BattleRosterRecordA *record, s32 flag);

/* Script command: finds the first eligible, marked reserve entry with the script id and ends it:
 * low-health entries (under 20%) whose slot test passes get kind 2, the others kind 1; its roster record is then cleared. */
u32 FUN_00380f20(void)
{
    s32 id = scrGetArg(0);
    BtlMainStateA *battle = btlGetMainState();
    u64 active = g_battleMaskPresets[0];
    BattleRosterRecordA *record = NULL;

    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA *entry = &battle->entries[i];

        if ((entry->flags & active) != 0 && (entry->flags & g_battleMaskPresets[3]) == 0 &&
            (entry->flags & g_battleMaskPresets[1]) != 0 && entry->data.marked != 0 && entry->data.id == id) {
            record = &battle->roster[i];
            break;
        }
    }
    BtlCombatantEntryA *skill = btlMainFindEntryByListedId(battle, record->combatant.parameterIndex);
    EntryRef *ref = FUN_003eca48(battle, skill->data.id);

    if (ref != NULL) {
        s32 passes = FUN_003ec668(battle, ref->slot, 2);

        if (hpPercent(skill->data.hp, skill->data.maxHp) < 20 && passes != 0) {
            FUN_003f2638(battle, 2, record, 0);
        } else {
            FUN_003f2638(battle, 1, record, 0);
        }
        RosterRecordClear *clear = reinterpret_cast<RosterRecordClear *>(record);
        clear->unk48 = 0;
        clear->unk4c = 0;
        clear->unkAc = 0;
    }
    return 1;
}

} /* extern "C" */
