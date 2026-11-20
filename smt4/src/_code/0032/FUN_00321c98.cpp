#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Inner {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ u8 member[0x2C];
    /* 0xB8 */ s32 value;
};

struct Object {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Inner *inner;
};

struct Record {
    u8 unk00[0x38];
};

extern "C" {
extern Record g_effectEditorOwnerOptions[];
}

extern "C" void FUN_00321c98(Object *object)
{
    Inner *inner = object->inner;
    effectEditorApplyOwnerOptionsPair(reinterpret_cast<u32 *>(inner->member), inner->value, reinterpret_cast<EffectEditorOptions *>(&g_effectEditorOwnerOptions[1]), reinterpret_cast<EffectEditorOptions *>(g_effectEditorOwnerOptions));
}
