#include "common.h"

extern "C" {

int bufferHandleRelease(u32 texture);
int asdMemFreeNonNull(void *object);
int asdMemFree(u32 ptr);
int asdOperatorDelete(u32 ptr);
extern u8 DAT_00420840;

typedef struct ObjectVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(void *object);
} ObjectVtbl;

typedef struct Child {
    /* 0x0 */ ObjectVtbl *vtbl;
} Child;

typedef struct Filter4Poly {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 buffer;
    /* 0x08 */ u32 texture;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ Child *child;
    /* 0x18 */ u8 unk18[0x4C];
    /* 0x64 */ u32 extra;
} Filter4Poly;

extern u8 g_filter4PolyBaseVtable; /* 0x420798 */

/* Destructor of the derived type: releases `extra`, then runs the base destructor body. */
void FUN_003486ec(Filter4Poly *filter)
{
    filter->vtbl = &DAT_00420840;
    if (filter->extra != 0) {
        asdOperatorDelete(filter->extra);
        filter->extra = 0;
    }
    filter->vtbl = &g_filter4PolyBaseVtable;
    if (filter->texture != 0) {
        bufferHandleRelease(filter->texture);
        filter->texture = 0;
    }
    if (filter->buffer != 0) {
        asdMemFree(filter->buffer);
        filter->buffer = 0;
    }
    if (filter->child != NULL) {
        filter->child->vtbl->destroy(filter->child);
        filter->child = NULL;
    }
    asdMemFreeNonNull(filter);
}

} /* extern "C" */
