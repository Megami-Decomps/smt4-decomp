/* NON_MATCHING: global reset/load ordering now matches; work/global-address registers and subordinate loop-counter registers are exchanged. */
#include "common.h"

struct ResetEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ f32 values[4];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 unk35[3];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3c;
    /* 0x3D */ u8 unk3d[3];
    /* 0x40 */ s32 index;
};

struct ResetSubEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ f32 values[4];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1c;
    /* 0x1D */ u8 unk1d[3];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 index;
};

struct ResetEntryWork {
    /* 0x0000 */ u32 unk0000;
    /* 0x0004 */ u8 unk0004[8];
    /* 0x000C */ u16 unk000c;
    /* 0x000E */ u16 unk000e;
    /* 0x0010 */ u8 active;
    /* 0x0011 */ u8 unk0011[3];
    /* 0x0014 */ ResetEntry entries[64];
    /* 0x1114 */ ResetSubEntry secondary[9];
    /* 0x12A0 */ ResetSubEntry tertiary[3];
};

struct ResetEntryGameState {
    /* 0x000 */ u8 unk000[0x214];
    /* 0x214 */ u32 unk214;
};

typedef char ResetEntrySizeCheck[sizeof(ResetEntry) == 0x44 ? 1 : -1];
typedef char ResetSubEntrySizeCheck[sizeof(ResetSubEntry) == 0x2c ? 1 : -1];
typedef char ResetEntryWorkSizeCheck[sizeof(ResetEntryWork) == 0x1324 ? 1 : -1];

extern "C" {
extern ResetEntryWork *DAT_00447e10;
extern ResetEntryGameState g_gameState;
}

static __inline void resetSubEntry(ResetSubEntry *entry)
{
    entry->active = 0;
    entry->unk01 = 0;
    entry->unk02 = 0;
    entry->values[0] = 0;
    entry->values[1] = 0;
    entry->values[2] = 0;
    entry->values[3] = 0;
    entry->unk14 = 0;
    entry->unk18 = 0;
    entry->unk1c = 0;
    entry->unk20 = 0;
    entry->unk24 = 0;
    entry->index = -1;
}

// Reset the main entry bank and its two subordinate banks.
extern "C" void FUN_001e3284()
{
    g_gameState.unk214 = 0;
    ResetEntryWork *work = DAT_00447e10;
    work->unk0000 = 0;
    work->unk000c = 0;
    work->unk000e = 0;
    work->active = 1;
    for (s32 index = 0; index < 64; ++index) {
        ResetEntry *entry = &work->entries[index];
        entry->active = 0;
        entry->unk01 = 0;
        entry->unk04 = 0;
        entry->unk08 = 0;
        entry->unk0c = 0;
        entry->unk10 = 0;
        entry->values[0] = 0;
        entry->values[1] = 0;
        entry->values[2] = 0;
        entry->values[3] = 0;
        entry->unk24 = 0;
        entry->unk28 = 0;
        entry->unk34 = 0;
        entry->unk38 = 0;
        entry->unk3c = 0;
        entry->unk2c = 0;
        entry->index = -1;
        entry->unk30 = 0;
    }
    for (s32 index = 0; index < 9; ++index)
        resetSubEntry(&DAT_00447e10->secondary[index]);
    for (s32 index = 0; index < 3; ++index)
        resetSubEntry(&DAT_00447e10->tertiary[index]);
}
