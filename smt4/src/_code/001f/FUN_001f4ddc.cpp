#include "common.h"

namespace {
struct PartyStatusView {
    /* 0x0000 */ u8 unk0000[0x38F4];
    /* 0x38F4 */ s16 unitIndex[5];
    /* 0x38FE */ u8 unk38FE[0x5925 - 0x38FE - 0x0];
    /* 0x5925 */ s8 labelShown[5];
    /* 0x592A */ u8 unk592A[2];
    /* 0x592C */ u32 labelColor[5];
    /* 0x5940 */ u16 labelId[5];
    /* 0x594A */ u8 labelKind[5];
};
}

extern "C" {
void partyStatusRefreshSlot(void *work, s32 slot, s32 refreshIndex);

// Set the status label of a slot (id and kind), initialising its color from the unit index the first time.
void FUN_001f4ddc(PartyStatusView *view, s32 slot, u16 id, u8 kind)
{
    if (view->labelShown[slot] == 0) {
        if (view->unitIndex[slot] < 0) {
            view->labelColor[slot] = 7;
        } else {
            view->labelColor[slot] = 0;
        }
    }
    view->labelShown[slot] = 1;
    view->labelId[slot] = id;
    view->labelKind[slot] = kind;
    partyStatusRefreshSlot(view, slot, 1);
}

} /* extern "C" */
