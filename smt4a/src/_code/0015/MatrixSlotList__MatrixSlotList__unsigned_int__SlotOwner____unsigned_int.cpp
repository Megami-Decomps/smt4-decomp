/* NON_MATCHING: the sentinel and vector reserve's pointer/capacity arithmetic use different registers. */
#include "gfx/MatrixSlots.h"
#include "nw/math/MTX34.h"
#include <vector>
#include "stl/MacroMax.h"

/* Embedded state with a constructor (_ZN9SlotStateC1Ev). */
struct SlotState {
    SlotState();

    u8 unk00[0x80];
};

struct SlotCursor {
    SlotCursor() : unk00(0), unk04(-1), unk06(-1) {}

    /* 0x00 */ u32 unk00;
    /* 0x04 */ s16 unk04;
    /* 0x06 */ s16 unk06;
};

struct MatrixSlotList {
    MatrixSlotList(u32 a, SlotOwner *owner, u32 c);

    /* 0x00 */ std::vector<nw::math::MTX34> matrices;
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
    : unk0c(a), unk14(c), unkA8(-1), unkAC(0), unkB0(0)
{
    enum { MATRIX_CAPACITY = 1024 };
    unk10 = owner->data;
    matrices.reserve(MATRIX_CAPACITY);
    for (s32 i = 0; i < 8; i++) {
        slots[i] = itemGroupHasEnabledItem(owner, i);
    }
}
