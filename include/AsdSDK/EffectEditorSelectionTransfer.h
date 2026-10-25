#ifndef ASDSDK_EFFECTEDITORSELECTIONTRANSFER_H
#define ASDSDK_EFFECTEDITORSELECTIONTRANSFER_H

#include "common.h"

struct EffectEditorOptions {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 index;
    /* 0x10 */ u32 flags;
    /* 0x14 */ const void *options;
    /* 0x18 */ u32 limit;
};
struct EffectEditorOptionNode : EffectEditorOptions {
    /* 0x1c */ u32 argument;
    /* 0x20 */ u8 unk20[0x14];
    /* 0x34 */ EffectEditorOptionNode *next;
};
typedef char EffectEditorOptionLayoutCheck[
    sizeof(EffectEditorOptions) == 0x1c &&
    __INTADDR__(&((EffectEditorOptions *)0)->flags) == 0x10 &&
    __INTADDR__(&((EffectEditorOptionNode *)0)->argument) == 0x1c &&
    __INTADDR__(&((EffectEditorOptionNode *)0)->next) == 0x34 &&
    sizeof(EffectEditorOptionNode) == 0x38 ? 1 : -1];

#endif
