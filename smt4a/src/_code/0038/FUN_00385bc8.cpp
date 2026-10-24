#include "common.h"

extern "C" {

u32 scrGetCommandFrame(void);
s32 scrGetArg(u32 index);
s32 FUN_00162ea4(void);
void FUN_00212204(s32 arg);
s32 FUN_00163e84(s32 arg);
void slotSetRequest(s32 slot, s32 value, s32 arg);

/* Script command: on the first frame requests slot 0 (unless busy); afterwards waits for the request to finish. Returns 1 while waiting. */
s32 FUN_00385bc8(void)
{
    if (scrGetCommandFrame() == 0) {
        if (FUN_00162ea4() != 0) {
            return 1;
        }
        slotSetRequest(0, scrGetArg(0), -1);
        return 0;
    }
    if (FUN_00162ea4() != 0) {
        FUN_00212204(0);
        return 1;
    }
    if (FUN_00163e84(0) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
