#include "common.h"

namespace {
struct PartyStatusView {
    /* 0x0000 */ u8 unk0000[0x4210];
    /* 0x4210 */ s16 unitIndex[5];
    /* 0x421A */ u8 unk421A[0x4ae5 - 0x421A];
    /* 0x4AE5 */ s8 labelShown[5];
    /* 0x4AEA */ u8 unk4AEA[2];
    /* 0x4AEC */ u32 labelColor[5];
    /* 0x4B00 */ u16 labelId[5];
    /* 0x4B0A */ u8 labelKind[5];
};
}

extern "C" {
void FUN_0023f328(void *work, s32 slot, s32 refreshIndex);

// Set the status label of a slot (id and kind), initialising its color from the unit index the first time.
void partyStatusSetSlotLabel(PartyStatusView *view, s32 slot, u16 id, u8 kind)
{
    if (view->labelShown[slot] == 0) {
        if (view->unitIndex[slot] < 0) {
            view->labelColor[slot] = 4;
        } else {
            view->labelColor[slot] = 0;
        }
    }
    view->labelShown[slot] = 1;
    view->labelId[slot] = id;
    view->labelKind[slot] = kind;
    FUN_0023f328(view, slot, 1);
}

} /* extern "C" */
