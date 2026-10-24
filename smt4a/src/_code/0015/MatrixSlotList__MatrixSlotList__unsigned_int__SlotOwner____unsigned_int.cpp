/* NON_MATCHING: needs the rename of _ZN14MatrixSlotListC1EjP9SlotOwnerj to its constructor name (rename_S2.tsv); with it the body differs from retail only in register choice (new capacity in r6/alloc result in r4 instead of r4/r6) and the order of three stores. */
#include "common.h"
#include <vector>
#include "stl/MacroMax.h"

struct Matrix34 {
    f32 m[12];
};

struct SlotOwner;

/* Embedded state with a constructor (_ZN9SlotStateC1Ev). */
struct SlotState {
    SlotState();

    u8 unk00[0x80];
};

extern "C" {
u8 FUN_0016b034(SlotOwner *owner, u32 index);
}

struct SlotCursor {
    SlotCursor() : unk00(0), unk04(-1), unk06(-1) {}

    /* 0x00 */ u32 unk00;
    /* 0x04 */ s16 unk04;
    /* 0x06 */ s16 unk06;
};

struct MatrixSlotList {
    MatrixSlotList(u32 a, SlotOwner *owner, u32 c);

    /* 0x00 */ std::vector<Matrix34> matrices;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ void *unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 slots[8];
    /* 0x20 */ SlotState state;
    /* 0xA0 */ SlotCursor cursor;
    /* 0xA8 */ s16 unkA8;
    /* 0xAC */ u32 unkAC;
    /* 0xB0 */ u32 unkB0;
};

/* A list of up to 1024 matrices plus the eight slot values the owner reports. */
MatrixSlotList::MatrixSlotList(u32 a, SlotOwner *owner, u32 c)
    : unk0c(a), unk14(c), unkAC(0), unkB0(0)
{
    unk10 = (u8 *)owner + 16;
    unkA8 = -1;
    matrices.reserve(1024);
    for (s32 i = 0; i < 8; i++) {
        slots[i] = FUN_0016b034(owner, i);
    }
}
