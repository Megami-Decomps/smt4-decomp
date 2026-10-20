/* battle/Filter/Filter4Poly.c: the four-polygon screen filter. */
#ifndef BATTLE_FILTER_FILTER4POLY_H
#define BATTLE_FILTER_FILTER4POLY_H

#include "common.h"

/* A polymorphic object: slot 1 of its vtable destroys it. */
typedef struct Filter4PolyChild {
    /* 0x00 */ void (**vtable)(struct Filter4PolyChild *self);
} Filter4PolyChild;

typedef struct Filter4Poly {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ void *dataA;               /* heap block */
    /* 0x08 */ void *object;              /* released with its own destroyer */
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ Filter4PolyChild *child;
    /* 0x18 */ void *dataB;               /* heap block */
} Filter4Poly;

#endif
