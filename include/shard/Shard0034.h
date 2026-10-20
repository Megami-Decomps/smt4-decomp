/* Structs shared by the helper functions in code shard 0034. */
#ifndef SHARD_SHARD0034_H
#define SHARD_SHARD0034_H

#include "common.h"

#include "shard/Shard0031.h"

typedef struct ChildNode {
    /* 0x00 */ u8 unk00[0x5];
    /* 0x05 */ u8 kind;
    /* 0x06 */ u8 unk06[0x2];
    /* 0x08 */ void *data;
} ChildNode;

typedef struct ChildOwner4 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ ChildNode *child;
} ChildOwner4;

typedef struct Target40 {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ f32 value;
} Target40;

/* Scales a value onto up to two targets (+0x40 of each). */
/* Scales a value onto up to two targets. */
typedef struct Fader {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 count;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4C */ Target40 *targetA;
    /* 0x50 */ Target40 *targetB;
    /* 0x54 */ u8 unk54[0x20];
    /* 0x74 */ f32 scale;
    /* 0x78 */ f32 value;
} Fader;

typedef struct Work8C {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ u8 flag;
} Work8C;

typedef struct Work16 {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u8 value;
} Work16;

typedef struct Owner0E {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ u16 name[9];
} Owner0E;

typedef struct BitsHolder {
    /* 0x00 */ u8 unk00[0x55];
    /* 0x55 */ u8 bits[8];
} BitsHolder;

typedef struct Obj80 {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
} Obj80;

typedef struct Obj80Ref {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj80 *instance;
} Obj80Ref;

typedef struct SwapSlot {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 value;
} SwapSlot;

typedef struct Parent78 {
    /* 0x00 */ u8 unk00[0x678];
    /* 0x678 */ u32 unk678;
} Parent78;

typedef struct Link0C {
    /* 0x00 */ u8 unk00[0x5E6];
    /* 0x5E6 */ u16 unk5E6;
} Link0C;

#include "shard/Shard0033.h"
#include "shard/Shard0032.h"

typedef struct Flag8 {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 unk04;
} Flag8;

typedef struct LinkEntry10 {
    /* 0x00 */ void *obj;
    /* 0x04 */ u8 unk04[0xC];
} LinkEntry10;

typedef struct BtlStateB {
    /* 0x00 */ u8 unk00[0x2002];
    /* 0x2002 */ s16 unk2002;
    /* 0x2004 */ u8 unk2004[0x2];
    /* 0x2006 */ s16 unk2006;
    /* 0x2008 */ u8 unk2008[0x14];
    /* 0x201C */ Flag8 flags201C[12];
    /* 0x207C */ u8 unk207C[0x1F4];
    /* 0x2270 */ void *unk2270;
    /* 0x2274 */ u8 unk2274[0x1C];
    /* 0x2290 */ s32 unk2290;
    /* 0x2294 */ s32 unk2294;
    /* 0x2298 */ void *unk2298;
    /* 0x229C */ u8 unk229C[0x18];
    /* 0x22B4 */ u8 unk22B4;
    /* 0x22B5 */ u8 unk22B5[0x7];
    /* 0x22BC */ u32 unk22BC;
    /* 0x22C0 */ u8 unk22C0[0x84];
    /* 0x2344 */ u16 table2344[9];
    /* 0x2356 */ s16 unk2356;
    /* 0x2358 */ u8 unk2358[0x48];
    /* 0x23A0 */ s32 unk23A0;
    /* 0x23A4 */ u32 table23A4[0x10];
    /* 0x23E4 */ u8 unk23E4[0x21D4];
    /* 0x45B8 */ u8 unk45B8;
    /* 0x45B9 */ u8 unk45B9[0x6B7];
    /* 0x4C70 */ s16 unk4C70;
    /* 0x4C72 */ s16 unk4C72;
    /* 0x4C74 */ u8 unk4C74[0xC];
    /* 0x4C80 */ s32 unk4C80;
    /* 0x4C84 */ u8 unk4C84[0x4];
    /* 0x4C88 */ u32 words[0x10];
    /* 0x4CC8 */ u8 unk4CC8[0x18];
    /* 0x4CE0 */ s32 unk4CE0;
    /* 0x4CE4 */ s32 unk4CE4;
    /* 0x4CE8 */ u32 unk4CE8;
    /* 0x4CEC */ u8 unk4CEC[0x44];
    /* 0x4D30 */ s32 table4D30[12];
    /* 0x4D60 */ u8 unk4D60[0x14];
    /* 0x4D74 */ s32 unk4D74;
    /* 0x4D78 */ LinkEntry10 entries4D78[12];
    /* 0x4E38 */ u8 unk4E38[0x20];
    /* 0x4E58 */ s32 unk4E58;
    /* 0x4E5C */ s32 unk4E5C;
} BtlStateB;

typedef struct PlayerData {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u8 unk0E[0xE];
    /* 0x1C */ s16 unk1C;
    /* 0x1E */ s16 unk1E;
    /* 0x20 */ u8 unk20[0xA];
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ u8 unk2E[0x2];
    /* 0x30 */ s32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u8 unk44[0x1A];
    /* 0x5E */ u16 unk5E;
    /* 0x60 */ s16 unk60;
    /* 0x62 */ u16 unk62;
} PlayerData;

typedef struct Holder48 {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 unk48;
} Holder48;

typedef struct Holder48Ref {
    /* 0x00 */ Holder48 *holder;
} Holder48Ref;

typedef struct JobWork0 {
    /* 0x00 */ s32 *first;
} JobWork0;

typedef struct JobWork34 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ void *unk34;
} JobWork34;

typedef struct Owner2DC {
    /* 0x00 */ u8 unk00[0x2DC];
    /* 0x2DC */ u8 sub[4];
} Owner2DC;

typedef struct KindRef {
    /* 0x00 */ u32 id;
    /* 0x04 */ s32 kind;
} KindRef;

typedef struct FlagRec {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 flag;
} FlagRec;

typedef struct ViewCursor {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 cursor;
} ViewCursor;

#endif
