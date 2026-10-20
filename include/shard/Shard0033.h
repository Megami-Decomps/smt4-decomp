/* Structs shared by the helper functions in code shard 0033. */
#ifndef SHARD_SHARD0033_H
#define SHARD_SHARD0033_H

#include "common.h"

#include "shard/Shard0031.h"

/* g_menuState */
/* g_menuState */
typedef struct MenuState {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 mode;
    /* 0x18 */ u16 value;
    /* 0x1A */ u8 unk1A[0x292];
    /* 0x2AC */ u32 unk2AC;
    /* 0x2B0 */ u8 unk2B0;
    /* 0x2B1 */ u8 unk2B1;
} MenuState;

/* Object at DAT_00588fd0+4. */
/* Object at DAT_00588fd0+4. */
/* Object at DAT_00588fd0+4. */
/* Object at DAT_00588fd0+4. */
/* Object at DAT_00588fd0+4. */
/* Object at DAT_00588fd0+4. */
/* Object at DAT_00588fd0+4. */
/* Object at DAT_00588fd0+4. */
typedef struct ObjB {
    /* 0x00 */ u8 unk00[0x274];
    /* 0x274 */ u8 block274[4];
    /* 0x278 */ u8 unk278[0x88];
    /* 0x300 */ u8 block300[4];
    /* 0x304 */ u8 unk304[0xFD8];
    /* 0x12DC */ u8 block12DC[4];
    /* 0x12E0 */ u8 unk12E0[0x88];
    /* 0x1368 */ s32 state;
    /* 0x136C */ u8 unk136C[0x12];
    /* 0x137E */ u8 unk137E;
    /* 0x137F */ u8 unk137F;
    /* 0x1380 */ u8 unk1380[0x1];
    /* 0x1381 */ u8 unk1381;
    /* 0x1382 */ u8 unk1382[0x2];
    /* 0x1384 */ u8 unk1384;
    /* 0x1385 */ u8 unk1385[0x7];
    /* 0x138C */ s16 unk138C;
    /* 0x138E */ u8 unk138E[0x5A2];
    /* 0x1930 */ u32 unk1930;
    /* 0x1934 */ u8 unk1934[0x9C];
    /* 0x19D0 */ u8 block19D0[8];
    /* 0x19D8 */ u32 unk19D8;
    /* 0x19DC */ u32 unk19DC;
    /* 0x19E0 */ u32 unk19E0;
    /* 0x19E4 */ u32 unk19E4;
    /* 0x19E8 */ u8 unk19E8[0x618];
    /* 0x2000 */ u32 unk2000;
    /* 0x2004 */ u32 unk2004;
    /* 0x2008 */ u32 unk2008;
    /* 0x200C */ u16 unk200C;
    /* 0x200E */ u8 unk200E[0x5];
    /* 0x2013 */ u8 unk2013;
    /* 0x2014 */ u8 unk2014[0x1];
    /* 0x2015 */ u8 unk2015;
    /* 0x2016 */ u8 unk2016;
    /* 0x2017 */ u8 unk2017[0x5];
    /* 0x201C */ u32 unk201C;
    /* 0x2020 */ u32 unk2020;
    /* 0x2024 */ u8 unk2024[0x1];
    /* 0x2025 */ u8 unk2025;
    /* 0x2026 */ u8 unk2026[0xE];
    /* 0x2034 */ u32 unk2034;
    /* 0x2038 */ u8 unk2038[0x20];
    /* 0x2058 */ u8 unk2058;
    /* 0x2059 */ u8 unk2059[0x3];
    /* 0x205C */ u32 unk205C;
    /* 0x2060 */ u32 unk2060;
    /* 0x2064 */ u32 unk2064;
    /* 0x2068 */ u8 unk2068[0x40];
    /* 0x20A8 */ u32 unk20A8;
    /* 0x20AC */ u8 unk20AC;
    /* 0x20AD */ u8 unk20AD;
    /* 0x20AE */ u8 unk20AE[0x2];
    /* 0x20B0 */ u8 unk20B0;
    /* 0x20B1 */ u8 unk20B1;
    /* 0x20B2 */ u8 unk20B2[0x1F];
    /* 0x20D1 */ u8 unk20D1;
    /* 0x20D2 */ u8 unk20D2[0x2];
    /* 0x20D4 */ u8 block20D4[4];
    /* 0x20D8 */ u8 unk20D8[0x18];
    /* 0x20F0 */ u8 unk20F0;
} ObjB;

typedef struct ObjBRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ObjB *instance;
} ObjBRef;

/* Object at DAT_0057f27c+4. */
typedef struct Obj7EC {
    /* 0x00 */ u8 unk00[0x7EC];
    /* 0x7EC */ u32 unk7EC;
    /* 0x7F0 */ u32 unk7F0;
} Obj7EC;

typedef struct Obj7ECRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj7EC *instance;
} Obj7ECRef;

typedef struct Entry4 {
    /* 0x00 */ u32 value;
} Entry4;

typedef struct Entry8 {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
} Entry8;

typedef struct Entry18 {
    /* 0x00 */ u8 data[0x18];
} Entry18;

typedef struct Flags0C0C {
    /* 0x00 */ u8 unk00[0x3];
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1C;
    /* 0x1D */ u8 unk1D[0x3];
    /* 0x20 */ s16 unk20;
    /* 0x22 */ u8 unk22[0xBEA];
    /* 0xC0C */ u8 flags[0x40];
    /* 0xC4C */ u8 flags2[0x40];
    /* 0xC8C */ u8 unkC8C[0x40];
    /* 0xCCC */ u32 bits[8];
    /* 0xCEC */ u8 unkCEC[0x20];
    /* 0xD0C */ u32 bits2[8];
    /* 0xD2C */ u8 unkD2C[0x64];
    /* 0xD90 */ s16 halves[0x20];
    /* 0xDD0 */ u8 unkDD0[0xA1];
    /* 0xE71 */ u8 unkE71;
    /* 0xE72 */ u8 unkE72[0x71E];
    /* 0x1590 */ u32 words1590[8];
    /* 0x15B0 */ u8 unk15B0[0x14];
    /* 0x15C4 */ f32 unk15C4;
} Flags0C0C;

typedef struct Node40 {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ struct Node40 *next;
} Node40;

typedef struct NodeList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *buffer;
    /* 0x08 */ Node40 *head;
} NodeList;

typedef struct NodeAC {
    /* 0x00 */ u8 unk00[0xAC];
    /* 0xAC */ struct NodeAC *next;
} NodeAC;

typedef struct NodeAC_Owner {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ NodeAC *head;
} NodeAC_Owner;

typedef struct Handles10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 handleA;
    /* 0x14 */ u32 handleB;
} Handles10;

typedef struct Resource28 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ Handles10 *handles;
    /* 0x2C */ void *unk2C;
    /* 0x30 */ void *unk30;
} Resource28;

typedef struct Entry28 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14[0x14];
} Entry28;

typedef struct Item1C {
    /* 0x00 */ u8 data[0x1C];
} Item1C;

typedef struct InfoTable {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 count;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ Entry28 *entries;
} InfoTable;

typedef struct InfoHolder {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 kind;
    /* 0x0E */ u8 unk0E[0x8E];
    /* 0x9C */ InfoTable *info;
    /* 0xA0 */ Item1C *items;
} InfoHolder;

#endif
