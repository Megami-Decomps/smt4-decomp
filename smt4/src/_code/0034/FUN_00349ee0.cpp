#include "common.h"

extern "C" {

int FUN_002c6a10(void);

struct Object;
typedef struct ObjectVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(struct Object *object);
} ObjectVtbl;

typedef struct Object {
    /* 0x0 */ ObjectVtbl *vtbl;
} Object;

typedef struct Pool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object **listB;
    /* 0x08 */ Object **listA;
    /* 0x0C */ Object **listC;
    /* 0x10 */ int count;
} Pool;

/* Destroys the objects of the three parallel lists and frees the lists. */
void FUN_00349ee0(Pool *pool)
{
    Object *object;
    int i = 0;

    if (i < pool->count) {
        do {
            object = pool->listA[i];
            if (object != NULL) {
                object->vtbl->destroy(object);
            }
            object = pool->listB[i];
            if (object != NULL) {
                object->vtbl->destroy(object);
            }
            object = pool->listC[i];
            if (object != NULL) {
                object->vtbl->destroy(object);
            }
            i = i + 1;
        } while (i < pool->count);
    }
    pool->count = 0;
    if (pool->listA != NULL) {
        FUN_002c6a10();
    }
    if (pool->listB != NULL) {
        FUN_002c6a10();
    }
    if (pool->listC != NULL) {
        FUN_002c6a10();
    }
    pool->listA = NULL;
    pool->listB = NULL;
    pool->listC = NULL;
}

} /* extern "C" */
