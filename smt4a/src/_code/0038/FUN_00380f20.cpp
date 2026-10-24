/* NON_MATCHING: the third mask test and the marked-entry test are predicated here; retail branches (same as FUN_00380e34). */
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

struct SkillHp {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ u8 unk100[0x66];
    /* 0x166 */ u16 entryId;
    /* 0x168 */ u8 unk168[0xf0];
    /* 0x258 */ s32 hp;
    /* 0x25C */ s32 maxHp;
};

extern "C" {

extern const u64 g_battleMaskPresets[];

s32 scrGetArg(u32 index);
BtlMainStateA *btlGetMainState(void);
SkillHp *FUN_003f0e20(BtlMainStateA *battle, s32 index);
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
            (entry->flags & g_battleMaskPresets[1]) != 0 && entry->selection.marked != 0 && entry->id == id) {
            record = &battle->roster[i];
            break;
        }
    }
    SkillHp *skill = FUN_003f0e20(battle, record->combatant.parameterIndex);
    EntryRef *ref = FUN_003eca48(battle, skill->entryId);

    if (ref != NULL) {
        s32 passes = FUN_003ec668(battle, ref->slot, 2);

        if (skill->hp * 100 / skill->maxHp < 20 && passes != 0) {
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
