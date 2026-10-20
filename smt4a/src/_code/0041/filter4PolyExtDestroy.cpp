#include "shard/Shard0041.h"

extern "C" {

extern u8 g_filter4PolyBaseVtable;
extern u8 DAT_00557cd8;
extern void FUN_002a1ca0(u32 handle);
extern void FUN_002e3494(u32 ptr);
extern void asdMemFree(u32 ptr);
extern void FUN_002e3328(FilterObj *obj);

/* Destroys the extended filter object: frees the extra block, then runs the base destruction. */
void filter4PolyExtDestroy(FilterObj *obj)
{
    obj->vtbl = &DAT_00557cd8;
    if (obj->extra != 0) {
        FUN_002e3494(obj->extra);
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
    FUN_002e3328(obj);
}

} /* extern "C" */
