/* Allocates a 16-byte object from the allocator's alloc slot and initialises it (owner, flag, vtable, value); returns NULL if allocation fails. */
#include "common.h"

extern "C" {

struct Allocator;

typedef struct {
    void *unk00;                                          /* 0x00 */
    void *unk04;                                          /* 0x04 */
    void *(*alloc)(Allocator *self, u32 size, u32 align); /* 0x08 */
} AllocatorVtbl;

struct Allocator {
    const AllocatorVtbl *vtbl; /* 0x00 */
};

typedef struct {
    const void *vtbl;     /* 0x00 */
    Allocator *allocator; /* 0x04 */
    u8 flag;              /* 0x08 */
    u32 value;            /* 0x0c */
} AllocObject;

extern u8 g_nwGfxLookAtTargetViewUpdaterVtable;

AllocObject *FUN_001ca6d0(Allocator *allocator, u32 value)
{
    AllocObject *obj = (AllocObject *)allocator->vtbl->alloc(allocator, sizeof(AllocObject), 4);

    if (obj != NULL) {
        obj->allocator = allocator;
        obj->flag = 0;
        obj->vtbl = &g_nwGfxLookAtTargetViewUpdaterVtable;
        obj->value = value;
    }
    return obj;
}

} /* extern "C" */
