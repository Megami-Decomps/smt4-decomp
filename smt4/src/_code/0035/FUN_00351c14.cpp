/* NON_MATCHING: register allocation (a/b/ready land in r5/r6/r4 where retail has r6/r4/r5) and retail's literal pool carries one extra unreferenced word (0xE0409FFF) before the 0xC9209F84 constant. */
#include "common.h"

extern "C" {

void nn_cfg_CTR_Initialize(void);
s32 FUN_00359f90(void);
int FUN_001467a4(void);
s32 FUN_00351ce8(s32 a, u32 b);

/* Initialises the config library; if FUN_00359f90 reports success, returns FUN_00351ce8(a, b), otherwise the
 * failure result 0xC9209F84. */
s32 FUN_00351c14(s32 a, u32 b)
{
    s32 ready;

    nn_cfg_CTR_Initialize();
    ready = FUN_00359f90();
    FUN_001467a4();
    if (ready == 0) {
        return 0xC9209F84;
    }
    return FUN_00351ce8(a, b);
}

} /* extern "C" */
