#include "common.h"
#include "script/ScriptArgs.h"

struct BustupCutState {
    u8 unk000[0x630]; // 0x000
    u32 job;           // 0x630
};

extern "C" {
extern BustupCutState* g_bustupCutAnim;
void FUN_002b7160(u32 job, u8 enabled);

// Script command: enables or disables the current bust-up animation job (argument 0).
u32 FUN_0031c05c(void)
{
    s32 enabled = scrGetArg(0);
    BustupCutState *anim = g_bustupCutAnim;
    if (anim->job != 0) {
        if (enabled == 0) {
            FUN_002b7160(anim->job, 0);
        } else {
            FUN_002b7160(anim->job, 1);
        }
    }
    return 1;
}
}
