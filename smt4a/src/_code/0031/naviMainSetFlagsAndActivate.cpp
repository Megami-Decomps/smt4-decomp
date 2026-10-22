#include "shard/NaviMain.h"

extern "C" {
extern NaviMainA *g_naviMain;
void flagsSetIfUnset3(s32, s32, s32, s32, s32, s32);
s32 FUN_0048e40c(NaviTransitionState *);
void menuMarkActive(NaviTransitionState *);

// Set the requested flags and activate the navigation menu when its conditions hold.
void naviMainSetFlagsAndActivate(s32 firstGroup, s32 firstBit, s32 secondGroup, s32 secondBit,
                  s32 thirdGroup, s32 thirdBit)
{
    NaviMainA *navigation = g_naviMain;
    flagsSetIfUnset3(firstGroup, firstBit, secondGroup, secondBit, thirdGroup, thirdBit);
    if (navigation != NULL && FUN_0048e40c(&navigation->transition))
        menuMarkActive(&navigation->transition);
}
}
