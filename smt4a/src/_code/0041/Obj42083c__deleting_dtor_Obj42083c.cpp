#include "shard/Shard0041.h"

extern "C" {

extern u8 g_filter4PolyBaseVtable;
extern u8 DAT_00557cd8;
extern void FUN_002a1ca0(u32 handle);
extern void asdOperatorDeleteB(u32 ptr);
extern void asdMemFree(u32 ptr);
extern void asdOperatorDelete(FilterObj *obj);

/* Destroys the extended filter object: frees the extra block, then runs the base destruction. */
void _ZN9Obj42083cD0Ev(FilterObj *obj)
{
    obj->vtbl = &DAT_00557cd8;
    if (obj->extra != 0) {
        asdOperatorDeleteB(obj->extra);
        obj->extra = 0;
    }
    obj->vtbl = &g_filter4PolyBaseVtable;
    if (obj->handle != 0) {
        FUN_002a1ca0(obj->handle);
        obj->handle = 0;
    }
    if (obj->buffer != 0) {
        asdMemFree(obj->buffer);
        obj->buffer = 0;
    }
    if (obj->child != NULL) {
        obj->child->vtbl->release(obj->child);
        obj->child = NULL;
    }
    asdOperatorDelete(obj);
}

} /* extern "C" */
