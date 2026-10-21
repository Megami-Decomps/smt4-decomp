#include "common.h"

extern "C" {

struct NaviMain { u8 unk00[0xc]; u32 values[3]; u8 unk18[0x50]; u32 request; };
extern NaviMain *g_naviMain;
void FUN_0048c09c(u32 *request, u32 value);

void naviMainSetRequestTriple(u32 first, u32 second, u32 third)
{
    NaviMain *navi = g_naviMain;
    navi->values[0] = first;
    navi->values[1] = second;
    navi->values[2] = third;
    FUN_0048c09c(&navi->request, third);
}

} /* extern "C" */
