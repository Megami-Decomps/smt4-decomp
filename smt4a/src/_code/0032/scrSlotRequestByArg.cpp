#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 FUN_00203d74(void);
s32 scrGetCommandFrame(void);
s32 FUN_00163e84(s32 a);
s32 FUN_00162ea4(void);
void FUN_0022677c(s32 a, s32 value);
void slotSetRequest(s32 slot, s32 count, s32 value);

/* Script command: on its first frame requests slot 0 with argument 1's count (at most 4 when capped), argument 0 choosing the fill;
 * later frames wait, then apply the same choice. Returns 1 to keep waiting. */
u32 scrSlotRequestByArg(void)
{
    s32 count = scrGetArg(1);

    if (FUN_00203d74() != 0 && count > 4) {
        count = 4;
    }
    if (scrGetCommandFrame() == 0) {
        switch (scrGetArg(0)) {
        case 0:
            slotSetRequest(0, count, 0xff);
            break;
        case 1:
            slotSetRequest(0, count, -1);
            break;
        default:
            return 1;
        }
    } else {
        if (FUN_00163e84(0) != 0) {
            return 1;
        }
        if (FUN_00162ea4() != 0) {
            switch (scrGetArg(0)) {
            case 0:
                FUN_0022677c(0, 0xff);
                break;
            case 1:
                FUN_0022677c(0, -1);
                break;
            }
        }
    }
    return 0;
}

} /* extern "C" */
