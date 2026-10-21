#include "common.h"
extern "C" {
struct NaviScalarWork { u8 unk00[0x18]; f32 value; };
extern NaviScalarWork *g_naviMain;
/* Return the navigation screen's scalar state. */
f32 NaviMain_GetState(void) { return g_naviMain->value; }
}
