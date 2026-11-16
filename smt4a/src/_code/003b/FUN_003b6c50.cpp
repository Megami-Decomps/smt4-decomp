#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnimA *g_bustupCutAnim;
s32 scrGetArg(s32 index);
void jobSetSelectedFlag(u32, u8);

// Toggle the first bust-up animation slot's job state from the script argument.
u32 FUN_003b6c50(void)
{
    s32 enabled = scrGetArg(0);
    BustupCutAnimA *anim = g_bustupCutAnim;
    if (anim->slots[0] != 0) {
        if (enabled == 0) {
            jobSetSelectedFlag(anim->slots[0], 0);
        } else {
            jobSetSelectedFlag(anim->slots[0], 1);
        }
    }
    return 1;
}
}
