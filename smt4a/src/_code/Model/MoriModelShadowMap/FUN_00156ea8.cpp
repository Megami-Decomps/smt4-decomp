/* NON_MATCHING: allocation + constructor + handle clears now form one conditional initialiser (writeback clears match retail); the build assigns NULL to the work register on the failed-allocation path (moveq r1,#0) where retail keeps the allocation result in r0 and moves the work pointer back before the store. */
#include "common.h"
#include "classes/MoriModelShadowMap.h"
#include "gfx/TexSetup.h"

extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
TexSetup *FUN_0016d17c(TexSetup *work);

/* Runs the work area's constructor and clears its six handles. */
static __inline TexSetup *initShadowMapWork(TexSetup *work)
{
    work = FUN_0016d17c(work);
    u32 *handle = work->lists[0];
    handle[0] = 0;
    handle[1] = 0;
    handle[2] = 0;
    handle[3] = 0;
    handle[4] = 0;
    handle[5] = 0;
    return work;
}

// Allocate and initialize the model's shadow-map work area.
void FUN_00156ea8(MoriModelShadowMap *shadow)
{
    void *memory = asdMemoryAllocTraced(sizeof(TexSetup),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelShadowMap.cpp", 62);
    TexSetup *work = memory != NULL ? initShadowMapWork(static_cast<TexSetup *>(memory)) : NULL;
    shadow->target = work;
}
}
