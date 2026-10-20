/* NON_MATCHING: the pool pointer and the lock address are held in swapped callee-saved registers (r4/r6). */
#include "common.h"

extern "C" {

typedef struct PoolObject PoolObject;
typedef struct PoolObjectVtbl {
    /* 0x00 */ void *unk00[13];
    /* 0x34 */ void (*destroy)(PoolObject *self);
} PoolObjectVtbl;
struct PoolObject {
    /* 0x00 */ union {
        PoolObjectVtbl *vtbl;
        PoolObject *nextFree;    /* while in the free list */
    };
};

typedef struct Pool {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ PoolObject *freeList;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ int liveCount;
    /* 0x30 */ u8 lock[4];
} Pool;

typedef struct Globals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Pool *pool;
} Globals;

extern Globals DAT_0044e650;

void nn_os_CriticalSection_Enter(void *cs);
void nn_os_CriticalSection_Leave(void *cs);

/* Destroys `object` and returns it to the global pool's free list under the pool lock. */
void FUN_0035658c(PoolObject *object)
{
    Pool *pool;
    void *lock;

    object->vtbl->destroy(object);
    pool = DAT_0044e650.pool;
    lock = pool->lock;
    nn_os_CriticalSection_Enter(lock);
    object->nextFree = pool->freeList;
    pool->freeList = object;
    pool->liveCount--;
    nn_os_CriticalSection_Leave(lock);
}

} /* extern "C" */
