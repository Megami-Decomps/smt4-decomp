#ifndef SHARD_W8_X20_OBJ351878_H
#define SHARD_W8_X20_OBJ351878_H

#include "common.h"
#include <stddef.h>

/* An 0x18-byte slot whose first word is reset by Obj351878's initializer. */
typedef struct Obj351878Slot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 unk04[0x14];
} Obj351878Slot;

/* State block reset by smt4 FUN_00351878 / smt4a FUN_00425e74. */
typedef struct Obj351878 {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ s32 unk008; /* -1 = none */
    /* 0x00C */ u8 unk00C[0x8];
    /* 0x014 */ u32 unk014;
    /* 0x018 */ u32 unk018;
    /* 0x01C */ u8 unk01C[0x4];
    /* 0x020 */ u32 unk020;
    /* 0x024 */ u32 unk024;
    /* 0x028 */ u32 unk028;
    /* 0x02C */ u8 unk02C;
    /* 0x02D */ u8 unk02D[0x12B];
    /* 0x158 */ u32 unk158;
    /* 0x15C */ u8 unk15C;
    /* 0x15D */ u8 unk15D;
    /* 0x15E */ u8 unk15E[0x5A];
    /* 0x1B8 */ u32 unk1B8;
    /* 0x1BC */ u32 unk1BC;
    /* 0x1C0 */ u32 unk1C0;
    /* 0x1C4 */ u8 unk1C4[0x14];
    /* 0x1D8 */ Obj351878Slot slots[8];
    /* 0x298 */ u8 unk298[0x50];
    /* 0x2E8 */ u32 unk2E8;
    /* 0x2EC */ u32 unk2EC[8];
    /* 0x30C */ u8 unk30C[0x178];
    /* 0x484 */ u32 unk484;
    /* 0x488 */ u32 unk488;
    /* 0x48C */ u32 unk48C;
    /* 0x490 */ u32 unk490;
    /* 0x494 */ u32 unk494;
    /* 0x498 */ u32 unk498;
    /* 0x49C */ u32 unk49C;
    /* 0x4A0 */ u32 unk4A0;
    /* 0x4A4 */ u32 unk4A4;
} Obj351878;
typedef char Obj351878SlotsCheck[offsetof(Obj351878, slots) == 0x1D8 ? 1 : -1];
typedef char Obj351878ArrayCheck[offsetof(Obj351878, unk2EC) == 0x2EC ? 1 : -1];
typedef char Obj351878TailCheck[offsetof(Obj351878, unk4A4) == 0x4A4 ? 1 : -1];

#endif
