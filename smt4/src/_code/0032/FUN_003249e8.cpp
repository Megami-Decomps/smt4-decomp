#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Inner {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ s32 value;
    /* 0xBC */ u8 unkBC[0x2C];
    /* 0xE8 */ u8 member[1];
};

struct Object {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Inner *inner;
};

struct Record {
    u8 unk00[0x38];
};

extern "C" {
extern Record DAT_0044fd18[];
}

extern "C" void FUN_003249e8(Object *object)
{
    Inner *inner = object->inner;
    FUN_0024330c(reinterpret_cast<u32 *>(inner->member), inner->value, reinterpret_cast<EffectEditorOptions *>(&DAT_0044fd18[2]), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18));
}
