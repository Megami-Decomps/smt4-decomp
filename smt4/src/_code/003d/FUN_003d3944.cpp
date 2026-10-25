/* NON_MATCHING: armcc merges the three battle-flag tests into one `tst #324` where retail keeps tst/tsteq/tsteq, shares the table-40 lookup between the unit kinds differently, and uses r6 instead of r7 for the zero constant (retail also saves r3 and r8/r9). */
#include "common.h"

#define BTL_FLAG_SKIP_BGM_KIND 0x00000004ull
#define BTL_FLAG_FIXED_ENCOUNTER 0x00000040ull
#define BTL_FLAG_NO_MUSIC_CHANGE 0x00000100ull
#define BTL_ENTRY_BOSS_LOCK 0x08000000
#define BTL_ENTRY_FORCED_KIND 0x04000000

/* The unit data the entry points at: its kind and the id within that kind. */
struct BtlEntryUnit {
    /* 0x000 */ u8 unk000[0x14C];
    /* 0x14C */ s16 kind;
    /* 0x14E */ s16 id;
};

/* One song/slot record of the entry (id and a value). */
struct BtlEntrySlot {
    /* 0x0 */ s32 id;
    /* 0x4 */ s32 value;
};

/* The battle entry being set up (observed fields). */
struct BtlSetupEntry {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ u8 unk010[0xC];
    /* 0x01C */ u32 unk01C;
    /* 0x020 */ u8 unk020[8];
    /* 0x028 */ BtlEntryUnit *unit;
    /* 0x02C */ u8 unk02C[0x540];
    /* 0x56C */ u32 unk56C;
    /* 0x570 */ u32 unk570;
    /* 0x574 */ u32 unk574;
    /* 0x578 */ u8 unk578[0xC];
    /* 0x584 */ u32 unk584;
    /* 0x588 */ u32 unk588;
    /* 0x58C */ u32 unk58C;
    /* 0x590 */ u8 unk590[4];
    /* 0x594 */ u32 musicKind;
    /* 0x598 */ u8 unk598[4];
    /* 0x59C */ u8 unk59C;
    /* 0x59D */ u8 unk59D[0xB];
    /* 0x5A8 */ BtlEntrySlot slots[0x85];
};

/* The battle state (observed fields). */
struct BtlState {
    /* 0x0000 */ u8 unk0000[0x84];
    /* 0x0084 */ u32 unk84;
    /* 0x0088 */ u8 unk88[0x58];
    /* 0x00E0 */ u32 entryFlags;
    /* 0x00E4 */ u8 unk0E4[0x43BC];
    /* 0x44A0 */ u64 flags;
    /* 0x44A4 */ u8 unk44A4[0x538];
    /* 0x49DC */ u32 musicId;
};

/* The sound-effect record for the current table entry (observed fields). */
struct BtlSoundRecord {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u16 first;
    /* 0x14 */ u16 second;
};

/* A record of data table 40 (observed field). */
struct Table40Record {
    /* 0x00 */ u8 unk00[0x57];
    /* 0x57 */ u8 musicKind;
};

/* A record of data table 8 sub-table 1 (observed field). */
struct Table08Record {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 table40Id;
};

struct BtlMainFlags {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 flags;
};

extern "C" {

extern BtlMainFlags *g_btlMain;
extern u32 DAT_00435d18;

void FUN_002569ac(BtlState **battle, u32 value);
void btlEntryValuesCopy(BtlState **battle, BtlSetupEntry *entry);
Table40Record *dataTable40FindById(s32 id);
Table08Record *dataTable08Sub1GetRecord(s32 id);
void entryInvalidateStateTable(BtlState *state);
void entryTableInvalidate(u32 table);
void FUN_003da890(u32 table);
void FUN_003d9d74(u32 table);
void FUN_003cee94(BtlState **battle, BtlSetupEntry *entry);
void FUN_003db378(u32 table);
s32 FUN_0027e6f4(BtlState *state, s32 flag);
BtlSoundRecord *FUN_00227ecc(u32 table, s32 flag);
void FUN_0023e52c(BtlState **battle, BtlSetupEntry *entry, u32 first, u32 second);
void FUN_003cc944(BtlState **battle, BtlSetupEntry *entry, s32 flag);
void modelSetResetSlots(u32 table);
void bgmSwitchCurrent(BtlState *state, u32 musicId);

/* Takes the music kind of the table-40 record `id` unless it is none or the default. */
static inline void chooseMusicKind(BtlSetupEntry *entry, s32 id)
{
    if (id > 0) {
        Table40Record *record = dataTable40FindById(id);
        u32 kind = 0;

        if (record != NULL) {
            kind = record->musicKind;
        }
        if (record != NULL && kind != 1 && kind != 0) {
            entry->musicKind = kind;
        }
    }
}

/* Resets a battle entry, picks the music kind of its unit and starts the entry's audio. */
void FUN_003d3944(BtlState **battle, BtlSetupEntry *entry, u32 unused3, u32 unused4)
{
    s32 i;

    entry->unk570 = 0;
    entry->unk574 = 0;
    entry->unk00C = 0;
    entry->unk584 = 0;
    entry->unk588 = 0;
    entry->unk58C = 0;
    entry->unk56C = 0;
    entry->unk01C = 0;
    for (i = 0; i < 0x85; i++) {
        entry->slots[i].id = -1;
        entry->slots[i].value = 0;
    }
    entry->unk59C = 0;
    FUN_002569ac(battle, (*battle)->unk84);
    btlEntryValuesCopy(battle, entry);
    entry->musicKind = 0;
    if ((((*battle)->flags & BTL_FLAG_SKIP_BGM_KIND) == 0 && ((*battle)->flags & BTL_FLAG_FIXED_ENCOUNTER) == 0 &&
         ((*battle)->flags & BTL_FLAG_NO_MUSIC_CHANGE) == 0) &&
        ((*battle)->entryFlags & BTL_ENTRY_BOSS_LOCK) == 0) {
        if (((*battle)->entryFlags & BTL_ENTRY_FORCED_KIND) != 0) {
            entry->musicKind = 0x16;
        } else {
            if (entry->unit->kind == 2 || entry->unit->kind == 3) {
                chooseMusicKind(entry, entry->unit->id);
            } else if (entry->unit->kind == 8) {
                s32 id = dataTable08Sub1GetRecord(entry->unit->id)->table40Id;

                if (id != 0) {
                    chooseMusicKind(entry, id);
                }
            }
        }
    }
    entryInvalidateStateTable(*battle);
    entryTableInvalidate(DAT_00435d18);
    FUN_003da890(DAT_00435d18);
    if (entry->musicKind == 9) {
        FUN_003d9d74(DAT_00435d18);
    }
    FUN_003cee94(battle, entry);
    FUN_003db378(DAT_00435d18);
    {
        BtlSoundRecord *sound = FUN_00227ecc(DAT_00435d18, FUN_0027e6f4(*battle, 1) >= 0);

        if (sound != NULL) {
            FUN_0023e52c(battle, entry, sound->first, sound->second);
        } else {
            FUN_0023e52c(battle, entry, 0xFFFF, 0);
        }
    }
    FUN_003cc944(battle, entry, 0);
    modelSetResetSlots(DAT_00435d18);
    g_btlMain->flags = (g_btlMain->flags & 0xFEFFFFFF) | 0x4000;
    switch ((u16)entry->unit->kind) {
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 11:
        bgmSwitchCurrent(*battle, (*battle)->musicId);
        break;
    default:
        break;
    }
}

} /* extern "C" */
