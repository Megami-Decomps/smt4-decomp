#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Inner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 member[0x58];
    /* 0x8C */ s32 value;
};

struct Object {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Inner *inner;
};

struct Record {
    u8 unk00[0x38];
};

extern "C" {
extern Record DAT_0059eea0[];
}

extern "C" void FUN_003cc8f4(Object *object)
{
    Inner *inner = object->inner;
    FUN_0031ab38(reinterpret_cast<u32 *>(inner->member), inner->value, reinterpret_cast<EffectEditorOptions *>(&DAT_0059eea0[1]), reinterpret_cast<EffectEditorOptions *>(DAT_0059eea0));
}
