#include "common.h"

/* A pooled controller: slots 0/1 are its destructors, slot 3 its per-frame update. */
class PoolController {
public:
    virtual ~PoolController();
    virtual void start();
    virtual void update();
    /* 0x04 */ s32 kind;
    /* 0x08 */ u8 flags; // bit 0 = still running
};

struct ControllerPoolIV {
    u8 unk00[0x10];
    s32 count;                  // 0x10
    s32 firstKindCount;         // 0x14
    PoolController *slots[32];  // 0x18
};

/* Deletes the controller in the slot and counts it out of the pool. */
static __inline void controllerPoolReleaseSlot(ControllerPoolIV *pool, s32 index)
{
    PoolController *controller = pool->slots[index];
    if (controller != NULL) {
        s32 kind = controller->kind;
        delete controller;
        pool->slots[index] = NULL;
        if (kind == 0)
            --pool->firstKindCount;
        --pool->count;
    }
}

// Update active controllers and release every controller that has finished.
extern "C" void FUN_003965f0(ControllerPoolIV *pool)
{
    for (s32 i = 0; i < 32; ++i) {
        PoolController *controller = pool->slots[i];
        if (controller != NULL) {
            if ((controller->flags & 1) == 0) {
                controllerPoolReleaseSlot(pool, i);
            } else {
                controller->update();
                if ((pool->slots[i]->flags & 1) == 0)
                    controllerPoolReleaseSlot(pool, i);
            }
        }
    }
}
