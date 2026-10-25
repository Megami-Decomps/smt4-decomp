#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Effect00321c48 {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 body[0x2c];
    /* 0xb8 */ u32 value;
};

struct Object00321c48 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect00321c48 *effect;
};

struct Entry00321c48 {
    /* 0x00 */ u8 data[0x70];
};

extern "C" {

extern Entry00321c48 DAT_0044fd18[];


/* Forwards the effect's body (0x8c) and value (0xb8) with entry 1 of DAT_0044fd18. */
void FUN_00321c48(Object00321c48 *object)
{
    Effect00321c48 *effect = object->effect;
    FUN_0024330c(reinterpret_cast<u32 *>(effect->body), effect->value, reinterpret_cast<EffectEditorOptions *>(&DAT_0044fd18[1]), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18));
}

} /* extern "C" */
