#include "common.h"

struct EffectJobState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 phase;
    /* 0x08 */ const void *pending;
    /* 0x0c */ void *current;
    /* 0x10 */ u8 started;
    /* 0x11 */ u8 unk11[7];
    /* 0x18 */ u32 resource;
    /* 0x1c */ f32 translation[4];
};

extern "C" {
EffectJobState *jobGetWork();
void FUN_0019c0e0(void *current);
s32 FUN_00376498(void *current);
void *FUN_001abbc4(const void *definition);
void FUN_001b4eb8(void *current, const f32 *translation);
void FUN_001ac8ec(void *current, f32 value);
u32 FUN_0030061c(void *current);

u32 effectJobUpdateSpawn()
{
    EffectJobState *work = jobGetWork();
    switch (work->phase) {
    case 0:
        if (work->pending) {
            work->phase = 1;
            work->current = FUN_001abbc4(work->pending);
            FUN_001b4eb8(work->current, work->translation);
            FUN_001ac8ec(work->current, 0.5f);
            work->resource = FUN_0030061c(work->current);
            work->started = 1;
        }
        break;
    case 1:
        FUN_0019c0e0(work->current);
        if (FUN_00376498(work->current)) {
            return 0xffffffff;
        }
        break;
    }
    return 0;
}
}
