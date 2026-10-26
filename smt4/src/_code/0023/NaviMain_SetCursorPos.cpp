/* NON_MATCHING: compiler emits separate cursor-coordinate loads (member-wise copy) or ldrd/strd (struct copy) instead of retail's ldm followed by two str. */
#include "common.h"
extern "C" {
struct CursorPoint { u32 x,y; };
struct NavigationCursorWork { u8 unk00[0x38]; CursorPoint position; };
extern NavigationCursorWork *g_naviMain;
/* Copy the supplied cursor position into navigation work. */
void NaviMain_SetCursorPos(u32 unused,const CursorPoint *position) { g_naviMain->position.x=position->x; g_naviMain->position.y=position->y; }
}
