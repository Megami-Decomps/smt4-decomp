/* NON_MATCHING: The fallback value load stays inside the override branch, and switch-case block/table order differs. */
#include "map/lmapMain.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
extern LmapExtraGlobalsA DAT_005806a0;

/* Resolves the explicit map-context value or derives it from the current context mode. */
s32 FUN_003033d4(void)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    LmapExtraA *context = DAT_005806a0.extra;
    s32 value = context->unk20C;
    if (value == -1) {
        value = context->unkC8;
        switch (context->unkB0) {
        case 0:
            return context->unkC8 + flags->context.unk001D;
        case 1:
            return 6;
        case 2:
            return 10;
        case -3:
            return 5;
        case -2:
            return 9;
        case -1:
            return 8;
        }
    }
    return value;
}
}
