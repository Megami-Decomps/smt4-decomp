/* NON_MATCHING: retail clears handles through a post-increment interior pointer while retaining the work base separately. */
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
        for (s32 index = 0; index < 6; ++index)
            *handle++ = 0;
    }
    shadow->work = work;
}
}
