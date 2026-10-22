/* Structs shared by the helper functions in code shard 0032. */
#ifndef SHARD_SHARD0032_H
#define SHARD_SHARD0032_H

#include "common.h"
#include <stddef.h>

/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
typedef struct Menu32 {
    /* 0x00 */ u8 unk00[0x368];
    /* 0x368 */ u8 block368[4];
    /* 0x36C */ u8 unk36C[0x88];
    /* 0x3F4 */ u32 unk3F4;
    /* 0x3F8 */ u32 unk3F8;
    /* 0x3FC */ u8 unk3FC[0x570];
    /* 0x96C */ u8 block96C[4];
    /* 0x970 */ u8 unk970[0x1ACC];
    /* 0x243C */ s32 mode;
    /* 0x2440 */ u8 unk2440[0x1434];
    /* 0x3874 */ u32 unk3874;
    /* 0x3878 */ u8 unk3878[0x4];
    /* 0x387C */ s32 unk387C;
    /* 0x3880 */ s32 unk3880;
    /* 0x3884 */ u32 unk3884;
    /* 0x3888 */ u32 unk3888;
    /* 0x388C */ u8 unk388C[0x27];
    /* 0x38B3 */ u8 unk38B3;
    /* 0x38B4 */ u8 unk38B4;
    /* 0x38B5 */ u8 unk38B5[0x4];
    /* 0x38B9 */ u8 unk38B9;
    /* 0x38BA */ u8 unk38BA[0x4F6];
    /* 0x3DB0 */ u8 unk3DB0;
    /* 0x3DB1 */ u8 unk3DB1[0xD5E];
    /* 0x4B0F */ u8 unk4B0F;
    /* 0x4B10 */ u32 unk4B10;
    /* 0x4B14 */ u16 unk4B14;
    /* 0x4B16 */ u16 unk4B16;
    /* 0x4B18 */ u8 unk4B18[0x1];
    /* 0x4B19 */ u8 unk4B19;
    /* 0x4B1A */ u8 unk4B1A;
    /* 0x4B1B */ u8 unk4B1B;
    /* 0x4B1C */ u8 unk4B1C;
    /* 0x4B1D */ u8 unk4B1D[0x1];
    /* 0x4B1E */ s16 unk4B1E;
    /* 0x4B20 */ u8 unk4B20;
    /* 0x4B21 */ u8 unk4B21[0x3];
    /* 0x4B24 */ u32 unk4B24;
    /* 0x4B28 */ u32 unk4B28;
} Menu32;

/* Global settings block (g_gfxSettings). */
typedef struct Settings5B {
    /* 0x00 */ u8 unk00[0x2];
    /* 0x02 */ s8 value;
    /* 0x03 */ u8 unk03[0x5];
    /* 0x08 */ u32 flags;
} Settings5B;

/* Work area of a job that keeps a pool of sub-jobs; `current` selects one. */
typedef struct JobPool {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 jobs[38];
    /* 0xA4 */ s32 current;
} JobPool;

typedef struct Entry2C {
    /* 0x00 */ u8 data[0x2C];
} Entry2C;

/* Global block (DAT_006306f8). */
typedef struct FlagsAt6C {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ u8 value;
} FlagsAt6C;

/* Entry whose flags byte at +0x20 uses bit 0x10 as a transient mark. */
typedef struct MarkEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 flags;
} MarkEntry;

/* Table entry a unit record is built from. */
typedef struct UnitTemplate {
    /* 0x00 */ u8 unk00[0x6];
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u16 stat0;
    /* 0x1A */ u16 stat1;
    /* 0x1C */ u8 unk1C[0x2];
    /* 0x1E */ u16 stat2;
    /* 0x20 */ u16 stat3;
    /* 0x22 */ u16 stat4;
    /* 0x24 */ u16 stat5;
    /* 0x26 */ u16 stat6;
    /* 0x28 */ u8 unk28[0x18];
    /* 0x40 */ u16 skills[8];
    /* 0x50 */ u8 unk50[0x50];
    /* 0xA0 */ u16 name[9];
} UnitTemplate;

/* A 300-byte unit record built from a table entry. */
typedef struct UnitRecord {
    /* 0x00 */ u16 stats[7];
    /* 0x0E */ u8 unk0E[0x2];
    /* 0x10 */ u16 unk10;
    /* 0x12 */ u8 unk12[0xA];
    /* 0x1C */ u16 unk1C;
    /* 0x1E */ u16 unk1E;
    /* 0x20 */ u16 stats2[5];
    /* 0x2A */ u16 unk2A;
    /* 0x2C */ u16 unk2C;
    /* 0x2E */ u8 unk2E[0x2];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34[0x18];
    /* 0x4C */ u16 name[9];
    /* 0x5E */ u8 unk5E[0x4];
    /* 0x62 */ u16 id;
    /* 0x64 */ u16 unk64;
    /* 0x66 */ u8 unk66[0xC6];
} UnitRecord;

/* Party manager data (gameGetSlotTable). */
/* Party manager data (gameGetSlotTable). */
typedef struct SummarySource {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u16 stats[7];
    /* 0x12 */ u8 unk12[0x3E];
    /* 0x50 */ u16 name[9];
    /* 0x62 */ u8 unk62[0x4];
    /* 0x66 */ s16 unk66;
    /* 0x68 */ u8 unk68[0x1C3B];
    /* 0x1CA3 */ s8 unk1CA3;
    /* 0x1CA4 */ u8 unk1CA4[0xFA8];
    /* 0x2C4C */ s16 unk2C4C;
    /* 0x2C4E */ u16 unk2C4E;
} SummarySource;

/* Summary of the player character, filled by playerSummaryFill. */
typedef struct PlayerSummary {
    /* 0x00 */ u16 stats[7];
    /* 0x0E */ u16 name[9];
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 unk21[0x7];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C[0x4];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34[0x2];
    /* 0x36 */ s16 unk36;
    /* 0x38 */ s16 unk38;
    /* 0x3A */ s16 unk3A;
    /* 0x3C */ s16 unk3C[3];
    /* 0x42 */ u8 unk42[0x2];
    /* 0x44 */ s16 unk44;
} PlayerSummary;

typedef struct Lookup62_64 {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 unk62;
    /* 0x64 */ s16 unk64;
} Lookup62_64;

typedef struct StateAtF4 {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u16 *unk08;
    /* 0x0C */ u32 *unk0C;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ u8 image[1];
    /* 0x25 */ u8 unk25[0x27];
    /* 0x4C */ u32 scriptProcess;
    /* 0x50 */ void *buf50;
    /* 0x54 */ void *buf54;
    /* 0x58 */ void *unk58;
    /* 0x5C */ u32 unk5C;
    union {
        /* 0x60 */ u8 unk60[0x94];
        struct {
            s32 (*callbacks[36])(struct StateAtF4 *state);
            s32 previousMode;
        } dispatch;
    };
    /* 0xF4 */ s32 mode;
    /* 0xF8 */ s32 phase;
    /* 0x0FC */ u8 unk0FC[0x12];
    /* 0x10E */ u8 imageActive;
    /* 0x10F */ u8 unk10F;
    /* 0x110 */ u8 unk110[0x3C];
    /* 0x14C */ u32 unk14C;
    union {
        /* 0x150 */ u8 unk150[0x1C];
        /* 0x150 */ s32 frameCounter;
    };
    /* 0x16C */ u8 unk16C[0xE];
    /* 0x17A */ u8 unk17A[0xF];
    /* 0x189 */ u8 unk189;
} StateAtF4;
typedef char StateAtF4DispatchOffsetCheck[
    offsetof(StateAtF4, dispatch.callbacks) == 0x60 &&
    offsetof(StateAtF4, dispatch.previousMode) == 0xF0 &&
    offsetof(StateAtF4, frameCounter) == 0x150 &&
    sizeof(StateAtF4) == 0x18C ? 1 : -1];

typedef struct FlagAt4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
} FlagAt4;

typedef struct ScriptState {
    /* 0x00 */ u8 unk00[0x3B];
    /* 0x3B */ u8 unk3B;
    /* 0x3C */ u8 unk3C[0x6C];
    /* 0xA8 */ u32 result;
} ScriptState;

typedef struct ScriptRef {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ ScriptState *state;
} ScriptRef;

typedef char CampCecEditALayoutCheck[sizeof(StateAtF4) == 0x18C ? 1 : -1];

typedef char CampCecEditAOffsets[offsetof(StateAtF4, image) == 0x24 && offsetof(StateAtF4, imageActive) == 0x10E && offsetof(StateAtF4, unk10F) == 0x10F && offsetof(StateAtF4, unk14C) == 0x14C ? 1 : -1];

#endif
