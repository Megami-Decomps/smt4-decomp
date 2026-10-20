#include "common.h"

extern "C" {

int asdMemFree(void *ptr);
int nw_gfx_res_ResGraphicsFile_Cleanup(int *resource);

struct PooledObject;
struct Pool;

typedef struct PoolVtbl {
    /* 0x0 */ void *unk0[3];
    /* 0xC */ void (*free)(struct Pool *pool, struct PooledObject *object);
} PoolVtbl;

typedef struct Pool {
    /* 0x0 */ PoolVtbl *vtbl;
} Pool;

typedef struct PooledObjectVtbl {
    /* 0x0 */ void (*destroy)(struct PooledObject *object);
} PooledObjectVtbl;

typedef struct PooledObject {
    /* 0x0 */ PooledObjectVtbl *vtbl;
    /* 0x4 */ Pool *pool;
} PooledObject;

typedef struct Obj {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ PooledObject *first;
    /* 0x08 */ PooledObject *second;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ int resource;
    /* 0x14 */ void *buffer;
} Obj;

u32 gfxObjectDestroy(Obj *obj, u32 a, u32 b, int c)
{
    PooledObject *pooled;
    int resource;

    pooled = obj->first;
    if (pooled != NULL) {
        pooled->vtbl->destroy(pooled);
        pooled->pool->vtbl->free(pooled->pool, pooled);
        obj->first = NULL;
    }
    pooled = obj->second;
    if (pooled != NULL) {
        pooled->vtbl->destroy(pooled);
        pooled->pool->vtbl->free(pooled->pool, pooled);
        obj->second = NULL;
    }
    resource = obj->resource;
    if (resource != 0) {
        nw_gfx_res_ResGraphicsFile_Cleanup(&resource);
    }
    asdMemFree(obj->buffer);
    asdMemFree(obj);
    return 1;
}

} /* extern "C" */
