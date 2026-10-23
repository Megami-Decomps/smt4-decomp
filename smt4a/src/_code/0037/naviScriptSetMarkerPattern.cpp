#include "common.h"

extern "C" {
void FUN_00314bf8(u32 selection);
s32 scrGetArg(u32 index);
void sub68OwnerCall11(u32 value, f32 x, f32 y);
void naviMainFinishRequest(void);

// Select the navigation marker set and populate one of four scripted coordinate patterns.
u32 naviScriptSetMarkerPattern(void)
{
    FUN_00314bf8(101);
    s32 pattern = scrGetArg(0);
    if (pattern == 0) {
        sub68OwnerCall11(101, 6.0f, 3.0f);
    } else if (pattern == 1) {
        sub68OwnerCall11(101, 4.0f, 3.0f);
        sub68OwnerCall11(101, 4.0f, 4.0f);
        sub68OwnerCall11(101, 5.0f, 3.0f);
        sub68OwnerCall11(101, 5.0f, 4.0f);
    } else if (pattern == 2) {
        sub68OwnerCall11(101, 4.0f, 5.0f);
    } else if (pattern == 3) {
        sub68OwnerCall11(101, 4.0f, 2.0f);
        sub68OwnerCall11(101, 3.0f, 5.0f);
        sub68OwnerCall11(101, 2.0f, 7.0f);
        sub68OwnerCall11(101, 3.0f, 7.0f);
    }
    naviMainFinishRequest();
    return 1;
}
}
