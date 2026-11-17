#ifndef SMT4_GFX_BATCHVERTEX_H
#define SMT4_GFX_BATCHVERTEX_H

#include "common.h"

typedef struct BatchVertex {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 w;
    /* 0x10 */ s32 color;
} BatchVertex; /* 0x14 */

#endif
