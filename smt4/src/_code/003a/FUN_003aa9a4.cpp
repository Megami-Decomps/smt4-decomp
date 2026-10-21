/* NON_MATCHING: last call: retail hoists `add r5, sp, #12` above `mov r0, r4`; here the temporary takes r4 after the move. */
#include "common.h"

extern "C" {

extern int FUN_00152530(void);
extern int FUN_00231434(int table, int id, s32 *x, s32 *y, s32 *w, s32 *h);
extern int FUN_002346ac(u32 target, s32 x, s32 y, s32 w, s32 h);
extern int touchRegisterSecondRegion(u32 target, s32 x, s32 y, s32 w, s32 h);
extern int touchRegisterFirstRegion(u32 target, s32 x, s32 y, s32 w, s32 h);

/* Looks up three rectangles of table 0x1d (ids 0x573-0x575) and applies each to `target`. */
void FUN_003aa9a4(u32 target)
{
    s32 x;
    s32 y;
    s32 w;
    s32 h;

    FUN_00152530();
    FUN_00231434(0x1D, 0x573, &x, &y, &w, &h);
    touchRegisterFirstRegion(target, x, y, w, h);
    FUN_00231434(0x1D, 0x574, &x, &y, &w, &h);
    touchRegisterSecondRegion(target, x, y, w, h);
    FUN_00231434(0x1D, 0x575, &x, &y, &w, &h);
    FUN_002346ac(target, x, y, w, h);
}

}
