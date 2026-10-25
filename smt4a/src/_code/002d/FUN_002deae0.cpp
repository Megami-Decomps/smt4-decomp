/* NON_MATCHING: takes no parameter (scrGetArg(1)); retail predicates `value > 4` (cmpne r4, #4; movgt) and shares the `return 1` block between the branches, the build branches. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/ScriptArgs.h"
#include "util/ScrGetCommandFrame.h"

extern "C" {
s32 FUN_00162ea4(void);
u32 FUN_00163e84(s32 slot);
void FUN_003d54f8(u32 slot, u32 value);

/* Starts both slot transitions on the first frame, then polls the completion query. */
u32 FUN_002deae0(void)
{
    s32 value = scrGetArg(1);
    if (scrGetCommandFrame() != 0) {
        if (FUN_00163e84(0) != 0 && FUN_00163e84(0) != 0) {
            return 1;
        }
        return 0;
    }
    if (FUN_00203d74() != 0 && value > 4) {
        value = 4;
    }
    if (FUN_00162ea4() != 0) {
        return 1;
    }
    s32 mode = scrGetArg(0);
    if (mode == 0 || mode == 1) {
        FUN_003d54f8(0, value);
        FUN_003d54f8(1, value);
    }
    return 0;
}
}
