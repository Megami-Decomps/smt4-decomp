#include "classes/Obj4222ac.h"
#include "classes/Obj42233c.h"

/* The pool of live effect objects: up to 16 in use, 4 of them of the first kind. */
struct EffectObjectPool {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
    /* 0x14 */ s32 firstKindCount;
    /* 0x18 */ Obj422318 *slots[32];
};

extern "C" {
void callbackOwnerCreateOrReuseAndAssociateCallback(Obj422318 *object, u32 callback);

/* Creates an effect object of the given kind in a free slot of the pool and starts it. Returns it, or NULL when full. */
Obj422318 *effectPoolCreateObject(EffectObjectPool *pool, s32 kind, u32 callback)
{
    if (pool->count >= 16) {
        return NULL;
    }
    s32 slot = 0;
    for (; slot < 32; ++slot) {
        if (pool->slots[slot] == NULL)
            break;
    }
    switch (kind) {
    case 0:
        if (pool->firstKindCount >= 4) {
            return NULL;
        }
        pool->slots[slot] = new Obj4222ac();
        break;
    case 1:
        pool->slots[slot] = new Obj42233c();
        break;
    }
    callbackOwnerCreateOrReuseAndAssociateCallback(pool->slots[slot], callback);
    pool->slots[slot]->start();
    pool->slots[slot]->child->vfunc08();
    pool->count++;
    return pool->slots[slot];
}
}
