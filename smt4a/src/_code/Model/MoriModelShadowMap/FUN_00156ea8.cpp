/* NON_MATCHING: allocation + constructor + handle clears now form one conditional initialiser (writeback clears match retail); the build assigns NULL to the work register on the failed-allocation path (moveq r1,#0) where retail keeps the allocation result in r0 and moves the work pointer back before the store. */
#include "common.h"

struct ShadowMapWork {
    u8 unk00[0x48];
    u32 handles[6]; // 0x48
    u8 unk60[8];
};
struct ModelShadowMap {
    u32 unk00;
    ShadowMapWork *work; // 0x04
};

extern "C" {
void *FUN_00178b04(u32 size, const char *file, u32 line);
ShadowMapWork *FUN_0016d17c(ShadowMapWork *work);

/* Runs the work area's constructor and clears its six handles. */
static __inline ShadowMapWork *initShadowMapWork(ShadowMapWork *work)
{
    work = FUN_0016d17c(work);
    u32 *handle = work->handles;
    handle[0] = 0;
    handle[1] = 0;
    handle[2] = 0;
    handle[3] = 0;
    handle[4] = 0;
    handle[5] = 0;
    return work;
}

// Allocate and initialize the model's shadow-map work area.
void FUN_00156ea8(ModelShadowMap *shadow)
{
    void *memory = FUN_00178b04(sizeof(ShadowMapWork),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelShadowMap.cpp", 62);
    ShadowMapWork *work = memory != NULL ? initShadowMapWork(static_cast<ShadowMapWork *>(memory)) : NULL;
    shadow->work = work;
}
}
