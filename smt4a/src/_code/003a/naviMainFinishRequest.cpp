#include "mapnavi/NaviMainGlobals.h"

extern "C" {

s32 naviMainConditionsHold(u32 *request);
void menuMarkActive(u32 *request);

void naviMainFinishRequest(void)
{
    NaviMainA *navi = g_naviMain;
    if (navi != NULL && naviMainConditionsHold(navi->request)) {
        menuMarkActive(navi->request);
    }
}

} /* extern "C" */
