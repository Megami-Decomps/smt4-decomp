#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Effect003bfe9c {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 body[0x2c];
    /* 0xb8 */ u32 value;
};

struct Object003bfe9c {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect003bfe9c *effect;
};

struct Table003bfe9c {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u8 entry[1];
};

extern "C" {

extern Table003bfe9c DAT_0059ee68;


/* Forwards the effect's body (0x8c) and value (0xb8) with the entry at 0x70 of DAT_0059ee68. */
void FUN_003bfe9c(Object003bfe9c *object)
{
    Effect003bfe9c *effect = object->effect;
    FUN_0031ab38(reinterpret_cast<u32 *>(effect->body), effect->value, reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68.entry), reinterpret_cast<EffectEditorOptions *>(&DAT_0059ee68));
}

} /* extern "C" */
