#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

void FUN_0048c09c(u32 *request, u32 value);

void naviMainSetRequestTriple(u32 first, u32 second, u32 third)
{
    NaviMainA *navi = g_naviMain;
    navi->posX = first;
    navi->posY = second;
    navi->thirdValue = third;
    FUN_0048c09c(navi->request, third);
}

} /* extern "C" */
