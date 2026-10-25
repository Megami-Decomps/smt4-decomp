#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Effect003ca9bc {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 body[0x2c];
    /* 0xb8 */ u32 value;
};

struct Owner003ca9bc {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ Effect003ca9bc effect;
};

struct Object003ca9bc {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Owner003ca9bc *owner;
};

struct Table003ca9bc {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 entry[1];
};

extern "C" {

extern Table003ca9bc DAT_0059ef10;


/* Forwards the owner's effect (0x1c): its body (0x8c) and value (0xb8) with the entry at 0x38 of DAT_0059ef10. */
void effectEditorApplySecondaryOwnerOptions(Object003ca9bc *object)
{
    Effect003ca9bc *effect = &object->owner->effect;
    FUN_0031ab38(reinterpret_cast<u32 *>(effect->body), effect->value, reinterpret_cast<EffectEditorOptions *>(DAT_0059ef10.entry), reinterpret_cast<EffectEditorOptions *>(&DAT_0059ef10));
}

} /* extern "C" */
