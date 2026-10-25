#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Effect00327900 {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 body[0x2c];
    /* 0xb8 */ u32 value;
};

struct Owner00327900 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ Effect00327900 effect;
};

struct Object00327900 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Owner00327900 *owner;
};

struct Table00327900 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 entry[1];
};

extern "C" {

extern Table00327900 DAT_0044fdc0;


/* Forwards the owner's effect (0x1c): its body (0x8c) and value (0xb8) with the entry at 0x38 of DAT_0044fdc0. */
void FUN_00327900(Object00327900 *object)
{
    Effect00327900 *effect = &object->owner->effect;
    FUN_0024330c(reinterpret_cast<u32 *>(effect->body), effect->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fdc0.entry), reinterpret_cast<EffectEditorOptions *>(&DAT_0044fdc0));
}

} /* extern "C" */
