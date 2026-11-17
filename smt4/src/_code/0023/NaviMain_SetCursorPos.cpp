#include "mapnavi/NaviMainGlobals.h"

extern "C" {

/* Copies the supplied cursor position into the navigation work. */
void NaviMain_SetCursorPos(u32 unused, const NaviValuePair *position)
{
    NaviMain *navi = g_naviMain;
    f32 x = position->first;
    f32 y = position->second;
    navi->cursor.first = x;
    navi->cursor.second = y;
}

} /* extern "C" */
