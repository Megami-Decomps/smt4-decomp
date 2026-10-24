#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void gameOptionsAddEnabledKind(s32 kind);

/* Script command: enables the option kind named by its first argument (the second is read and ignored). */
s32 FUN_0031eb78(void)
{
    s32 kind = scrGetArg(0);
    scrGetArg(1);
    gameOptionsAddEnabledKind((s16)kind);
    return 1;
}
}
