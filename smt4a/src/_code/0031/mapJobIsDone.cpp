#include "map/mapMain.h"

extern "C" {

s32 scrRunOpcodesStub(u32 job);

extern MapMainA *g_mapMain;

bool mapJobIsDone(void)
{
    return scrRunOpcodesStub(g_mapMain->job) == 2;
}

} /* extern "C" */
