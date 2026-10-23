#ifndef GFX_NAMEDEFFECTATTACHMENT_H
#define GFX_NAMEDEFFECTATTACHMENT_H

#include "common.h"
#include <stddef.h>

struct EffectJointEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 index;
    /* 0x0C */ void *effect;
};

struct NamedEffectAttachment {
    /* 0x00 */ s32 count;
    /* 0x04 */ EffectJointEntry **entries;
};

struct EffectAttachmentPosition {
    f32 x, y, z, w;
};

typedef char NamedEffectAttachmentLayoutCheck[
    sizeof(EffectJointEntry) == 0x10 &&
    offsetof(EffectJointEntry, index) == 8 &&
    offsetof(EffectJointEntry, effect) == 0x0C &&
    sizeof(NamedEffectAttachment) == 8 &&
    offsetof(NamedEffectAttachment, entries) == 4 &&
    sizeof(EffectAttachmentPosition) == 0x10 ? 1 : -1];

#endif
