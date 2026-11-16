#ifndef GFX_MATERIALPARAMETERWORK_H
#define GFX_MATERIALPARAMETERWORK_H
#include "common.h"
#include <stddef.h>

struct UniformContext;

/* Four float parameters uploaded together as one vertex uniform. */
struct MaterialParameterVector {
    /* 0x00 */ f32 values[4];
};

/* The part of a model's work area that caches its uploaded parameter uniform. */
struct MaterialParameterWork {
    /* 0x0000 */ u8 unk0000[0x530];
    /* 0x0530 */ UniformContext *handle;
    /* 0x0534 */ u8 unk0534[0xca4];
    /* 0x11D8 */ MaterialParameterVector parameters; /* last uploaded values */
    /* 0x11E8 */ s8 dirty;                           /* forces the next upload */
};
typedef char MaterialParameterWorkLayoutCheck[
    offsetof(MaterialParameterWork, handle) == 0x530 &&
    offsetof(MaterialParameterWork, parameters) == 0x11d8 &&
    offsetof(MaterialParameterWork, dirty) == 0x11e8 ? 1 : -1];

#endif
