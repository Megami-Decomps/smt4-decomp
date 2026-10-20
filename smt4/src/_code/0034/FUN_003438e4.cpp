#include "common.h"

extern "C" {

int FUN_0023d02c(u32 texture);
int FUN_002b2368(void *object);
int asdMemFree(u32 ptr);

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
    /* 0x18 */ u8 unk18[0x48];
    /* 0x60 */ u32 extra;
} Filter4Poly;

extern u8 g_filter4PolyBaseVtable; /* 0x420798 */

/* Destructor: restores the base vtable and releases the texture, buffer and child. */
void FUN_003438e4(Filter4Poly *filter)
{
    filter->vtbl = &g_filter4PolyBaseVtable;
    if (filter->texture != 0) {
        FUN_0023d02c(filter->texture);
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
    FUN_002b2368(filter);
}

} /* extern "C" */
