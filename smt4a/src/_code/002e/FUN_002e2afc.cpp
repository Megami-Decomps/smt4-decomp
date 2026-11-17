#include "camp/CampStateA.h"

extern "C" {

u32 listCursorGetRowOfChildIfUnblocked(GridNavigation *member);
u32 FUN_003da8f4(s32 value, u32 arg);


/* Returns FUN_003da8f4(value, listCursorGetRowOfChildIfUnblocked(member)) for the object at 0x57F108, or 0 when there is none. */
u32 FUN_002e2afc(void)
{
    CampStateA *object;
    u32 arg;

    object = g_camp;
    if (g_camp != NULL) {
        arg = listCursorGetRowOfChildIfUnblocked(&g_camp->menuGrid);
        arg = FUN_003da8f4((s32)object->menuGroup, arg);
        return arg;
    }
    return 0;
}

} /* extern "C" */
