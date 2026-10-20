/* Small global blocks the shard functions read and write one field at a time. Offsets are from
 * those accesses; the meaning of each word is not known yet. */
#ifndef SHARD_GLOBALBLOCKS_H
#define SHARD_GLOBALBLOCKS_H

#include "common.h"

/* Global at 0x5B3D54. */
typedef struct Block5b3d54 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[0x4];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1C[0x4];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24[0x4];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u8 unk30[0x4];
    /* 0x34 */ u32 unk34;
} Block5b3d54;
extern Block5b3d54 DAT_005b3d54;

/* Global at 0x5B4000. */
typedef struct Block5b4000 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} Block5b4000;
extern Block5b4000 DAT_005b4000;

/* Global at 0x5B40B4. */
typedef struct Block5b40b4 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[0x4];
    /* 0x10 */ u32 unk10;
} Block5b40b4;
extern Block5b40b4 DAT_005b40b4;

/* Global at 0x61978C: only the bytes at 0x1E4..0x1E6 are used. */
typedef struct Block61978c {
    /* 0x000 */ u8 unk000[0x1E4];
    /* 0x1E4 */ u8 unk1E4;
    /* 0x1E5 */ u8 unk1E5;
    /* 0x1E6 */ u8 unk1E6;
} Block61978c;
extern Block61978c DAT_0061978c;

/* Global at 0x5891D8. */
typedef struct Block5891d8 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06;
    /* 0x07 */ s8 unk07;
    /* 0x08 */ s8 unk08;
    /* 0x09 */ s8 unk09;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ s8 unk0D;
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
} Block5891d8;
extern Block5891d8 DAT_005891d8;

/* Global at 0x5B4474. */
typedef struct Block5b4474 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} Block5b4474;
extern Block5b4474 DAT_005b4474;

/* Global at 0x5C0AA0. */
typedef struct Block5c0aa0 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ s8 unk02;
    /* 0x03 */ u8 unk03[0x19];
    /* 0x1C */ u32 unk1C;
} Block5c0aa0;
extern Block5c0aa0 DAT_005c0aa0;

/* Global at 0x5B3BF4. */
typedef struct Block5b3bf4 {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04[0x40];
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u8 unk48[0x34];
    /* 0x7C */ u32 unk7C;
} Block5b3bf4;
extern Block5b3bf4 DAT_005b3bf4;

/* Global at 0x5B4464. */
typedef struct Block5b4464 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 unk08;
} Block5b4464;
extern Block5b4464 DAT_005b4464;

/* Global at 0x5C0AC8. */
typedef struct Block5c0ac8 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} Block5c0ac8;
extern Block5c0ac8 DAT_005c0ac8;

#endif
