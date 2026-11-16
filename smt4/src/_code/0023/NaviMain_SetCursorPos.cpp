#include "common.h"

extern "C" {

/* A cursor position in navigation-screen coordinates. */
struct CursorPoint {
    /* 0x00 */ u32 x;
    /* 0x04 */ u32 y;
};

/* The navigation work; only the cursor position is touched here. */
struct NavigationCursorWork {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ CursorPoint position;
};

extern NavigationCursorWork *g_naviMain;

/* Copies the supplied cursor position into the navigation work. */
void NaviMain_SetCursorPos(u32 unused, const CursorPoint *position)
{
    NavigationCursorWork *work = g_naviMain;
    u32 x = position->x;
    u32 y = position->y;
    work->position.x = x;
    work->position.y = y;
}

} /* extern "C" */
