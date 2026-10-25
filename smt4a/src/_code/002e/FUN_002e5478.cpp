/* NON_MATCHING: only the VFP register of the 1.0f/steps quotient differs (retail s1, built s0). */
#include "common.h"
#include "util/CalleeContracts.h"
#include "shard/JobWork.h"

struct FadeRates {
    f32 in;  // 0x00
    f32 out; // 0x04

    FadeRates() {}
    FadeRates(f32 a, f32 b) : in(a), out(b) {}
};

struct FadeJob {
    u8 unk00[0xc];
    FadeRates rates; // 0x0c
};

extern "C" {

s32 scrGetArg(u32 index);

// Script command: set a job's fade rates from a step count (clamped to 4 while FUN_00203d74 reports true).
u32 FUN_002e5478(void)
{
    u32 job = scrGetArg(0);
    s32 steps = scrGetArg(1);
    if (FUN_00203d74() != 0 && steps > 4) {
        steps = 4;
    }
    FadeJob *work = reinterpret_cast<FadeJob *>(jobGetWork(job));
    if (work != NULL) {
        if (steps == 0) {
            work->rates.in = 1.0f;
            work->rates.out = 0.0f;
        } else {
            work->rates.in = 0.0f;
            work->rates.out = 1.0f / steps;
        }
    }
    return 1;
}

} /* extern "C" */
