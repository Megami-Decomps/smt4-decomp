#include "sys/FlagBlock.h"

extern "C" {
u32 FUN_002eb56c(void);
void FUN_002f8554(u32 index);
void FUN_0030f46a(void);
u32 FUN_0030f61c(void);
s32 FUN_0030f798(u32 index);

// Apply the update to every enabled entry, then restore the selected entry.
void FUN_002ef708(void)
{
    if (g_flagBlock.flag15 == 0) {
        FUN_0030f46a();
        return;
    }

    u32 selected = FUN_002eb56c();
    u32 last = FUN_0030f61c();
    for (u32 index = 0; index <= last; ++index) {
        if (FUN_0030f798(index) != 0) {
            FUN_002f8554(index);
            FUN_0030f46a();
        }
    }
    FUN_002f8554(selected);
}
}
