#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Effect003c5c34 {
    /* 0x00 */ u8 unk00[0xb8];
    /* 0xb8 */ u32 value;
    /* 0xbc */ u8 unkbc[0x68];
    /* 0x124 */ u8 body[0x10];
};

struct Object003c5c34 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect003c5c34 *effect;
};

struct Table003c5c34 {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u8 entry[1];
};

extern "C" {

extern Table003c5c34 DAT_0059ee68;


/* Forwards the effect's body (0x124) and value (0xb8) with the entry at 0x70 of DAT_0059ee68. */
void FUN_003c5c34(Object003c5c34 *object)
{
    Effect003c5c34 *effect = object->effect;
    FUN_0031ab38(reinterpret_cast<u32 *>(effect->body), effect->value, reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68.entry), reinterpret_cast<EffectEditorOptions *>(&DAT_0059ee68));
}

} /* extern "C" */
