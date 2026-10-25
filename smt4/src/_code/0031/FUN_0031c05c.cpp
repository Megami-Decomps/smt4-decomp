/* NON_MATCHING: compiler merges the two enable calls; retail retains distinct branches and two alignment NOPs. */
#include "common.h"

struct BustupCutState {
    u8 unk000[0x630]; // 0x000
    u32 job;           // 0x630
};

extern "C" {
extern BustupCutState* g_bustupCutAnim;
s32 scrGetArg(u32 index);
void FUN_002b7160(u32 job, u8 enabled);

// Apply the script argument to the current bust-up animation job's enable byte.
u32 FUN_0031c05c(void)
{
    s32 enabled = scrGetArg(0);
    u32 job = g_bustupCutAnim->job;
    if (job != 0) {
        if (enabled != 0) {
            FUN_002b7160(job, 1);
        } else {
            FUN_002b7160(job, 0);
        }
    }
    return 1;
}
}
