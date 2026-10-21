/* NON_MATCHING: compiler merges both Boolean job-state calls; retail keeps separate enabled/disabled branches. */
#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnimA *g_bustupCutAnim;
s32 scrGetArg(void);
void FUN_00164ce0(u32, u8);

// Toggle the first bust-up animation slot's job state from the script argument.
u32 FUN_003b6c54(void)
{
    s32 enabled = scrGetArg();
    u32 job = g_bustupCutAnim->slots[0];
    if (job != 0) {
        if (enabled != 0)
            FUN_00164ce0(job, 1);
        else
            FUN_00164ce0(job, 0);
    }
    return 1;
}
}
