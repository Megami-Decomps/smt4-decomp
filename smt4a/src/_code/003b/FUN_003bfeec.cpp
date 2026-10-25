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
extern Record DAT_0059ef10[];
}

extern "C" void FUN_003bfeec(Object *object)
{
    Inner *inner = object->inner;
    FUN_0031ab38(reinterpret_cast<u32 *>(inner->member), inner->value, reinterpret_cast<EffectEditorOptions *>(&DAT_0059ef10[1]), reinterpret_cast<EffectEditorOptions *>(DAT_0059ef10));
}
