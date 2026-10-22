#include "shard/NaviMain.h"

struct NavigationState;

extern "C" {
void FUN_002c86fc(s32 firstId, s32 firstValue, s32 secondId, s32 secondValue, s32 thirdId, s32 thirdValue);
s32 naviAreTransitionFlagsReady(NavigationState* navigation);
void naviRequestStateChange(NavigationState* navigation);

// Register up to three flag rows, then request the navigation transition when its flags allow it.
void naviRegisterTransitionsAndRequest(s32 firstId, s32 firstValue, s32 secondId, s32 secondValue, s32 thirdId, s32 thirdValue)
{
    NaviMain* navigation = g_naviMain;
    FUN_002c86fc(firstId, firstValue, secondId, secondValue, thirdId, thirdValue);
    if (navigation != NULL && naviAreTransitionFlagsReady((NavigationState*)navigation->unk00040) != 0) {
        naviRequestStateChange((NavigationState*)navigation->unk00040);
    }
}
}
