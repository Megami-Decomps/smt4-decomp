/* NON_MATCHING: Conditional comparisons and shared success/failure exits lower into separate branches and additional padding. */
#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
u32 scrGetCommandFrame(void);
s32 FUN_00203d74(void);
s32 FUN_00162ea4(void);
u32 FUN_00163e84(s32 slot);
void FUN_003d54f8(u32 slot, u32 value);

/* Starts both slot transitions on the first frame, then polls the completion query. */
u32 FUN_002deae4(s32 argumentIndex)
{
    s32 value = scrGetArg(argumentIndex);
    if (scrGetCommandFrame() != 0) {
        if (FUN_00163e84(0) == 0 || FUN_00163e84(0) == 0) {
            return 0;
        }
    } else {
        if (FUN_00203d74() != 0 && value > 4) {
            value = 4;
        }
        if (FUN_00162ea4() == 0) {
            s32 mode = scrGetArg(0);
            if (mode == 0 || mode == 1) {
                FUN_003d54f8(0, value);
                FUN_003d54f8(1, value);
                return 0;
            }
        }
    }
    return 1;
}
}
