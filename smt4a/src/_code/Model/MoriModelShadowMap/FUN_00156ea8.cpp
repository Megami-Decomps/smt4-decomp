/* NON_MATCHING: handles are cleared through an interior pointer with writeback as in retail; the work pointer is kept in r1 across the null test (retail tests the allocation result in r0 and moves the work pointer back to r0 before the store). */
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

// Allocate and initialize the model's shadow-map work area.
void FUN_00156ea8(ModelShadowMap *shadow)
{
    ShadowMapWork *work = (ShadowMapWork *)FUN_00178b04(sizeof(ShadowMapWork),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelShadowMap.cpp", 62);
    if (work != NULL) {
        work = FUN_0016d17c(work);
        u32 *handle = work->handles;
        handle[0] = 0;
        handle[1] = 0;
        handle[2] = 0;
        handle[3] = 0;
        handle[4] = 0;
        handle[5] = 0;
    }
    shadow->work = work;
}
}
