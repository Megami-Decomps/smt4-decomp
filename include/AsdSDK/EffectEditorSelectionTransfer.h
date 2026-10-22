#ifndef ASDSDK_EFFECTEDITORSELECTIONTRANSFER_H
#define ASDSDK_EFFECTEDITORSELECTIONTRANSFER_H

#include "common.h"

struct EffectEditorSelectionData {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u32 flags;
    /* 0x6c */ u8 unk6c[0x24];
};
struct EffectEditorSelectionTransfer {
    /* 0x000 */ EffectEditorSelectionData working;
    /* 0x090 */ u8 unk090[0xd0];
    /* 0x160 */ u8 saved[0x80];
};
struct EffectEditorOptions {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 index;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ const void *options;
    /* 0x18 */ u32 limit;
};

#endif
