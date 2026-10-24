#include "common.h"

/* The scalable parameters of an effect block (only the floats this function scales). */
struct Params003133b8 {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 f64;
    /* 0x68 */ f32 f68;
    /* 0x6c */ u8 unk6c[8];
    /* 0x74 */ f32 f74;
    /* 0x78 */ u8 unk78[4];
    /* 0x7c */ f32 f7c;
    /* 0x80 */ u8 unk80[4];
    /* 0x84 */ f32 f84;
    /* 0x88 */ u8 unk88[0x40];
    /* 0xc8 */ f32 fc8;
    /* 0xcc */ u8 unkcc[0xc];
    /* 0xd8 */ f32 fd8;
    /* 0xdc */ u8 unkdc[4];
    /* 0xe0 */ f32 fe0;
    /* 0xe4 */ f32 fe4;
};

struct Object003133b8 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Params003133b8 *target;
    /* 0x24 */ const Params003133b8 *source;
};

extern "C" {

/* Sets the target's parameters to the source's scaled by the factor. */
void effParamsScaleCopy(Object003133b8 *object, f32 scale)
{
    Params003133b8 *target = object->target;
    const Params003133b8 *source = object->source;

    target->f64 = source->f64 * scale;
    target->f68 = source->f68 * scale;
    target->f74 = source->f74 * scale;
    target->f7c = source->f7c * scale;
    target->f84 = source->f84 * scale;
    target->fc8 = source->fc8 * scale;
    target->fd8 = source->fd8 * scale;
    target->fe0 = source->fe0 * scale;
    target->fe4 = source->fe4 * scale;
}

} /* extern "C" */
