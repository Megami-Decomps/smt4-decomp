#include "common.h"
extern "C" {
struct NavigationField { u8 unk00[0x40]; u8 field[1]; };
extern NavigationField *g_naviMain;
s32 naviAreTransitionFlagsReady(void *field);
void naviRequestStateChange(void *field);
/* Finish an available navigation field only when it reports ready. */
void navigationFinishReadyField(void) { NavigationField *work=g_naviMain; if (work!=NULL && naviAreTransitionFlagsReady(work->field)!=0) naviRequestStateChange(work->field); }
}
