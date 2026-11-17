#include "mapnavi/NaviMainGlobals.h"
extern "C" {
s32 naviAreTransitionFlagsReady(void *field);
void naviRequestStateChange(void *field);
/* Finish an available navigation field only when it reports ready. */
void navigationFinishReadyField(void) { NaviMain *work=g_naviMain; if (work!=NULL && naviAreTransitionFlagsReady(work->state)!=0) naviRequestStateChange(work->state); }
}
