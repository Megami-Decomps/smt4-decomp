#include "camp/CampStateA.h"
#include "camp/CampMenuEntry.h"

extern "C" {

u32 listCursorGetRowOfChildIfUnblocked(GridNavigation *member);


/* Returns dataTable15GetUnlockedEntryId(value, listCursorGetRowOfChildIfUnblocked(member)) for the object at 0x57F108, or 0 when there is none. */
u32 FUN_002e2afc(void)
{
    CampStateA *object;
    u32 arg;

    object = g_camp;
    if (g_camp != NULL) {
        arg = listCursorGetRowOfChildIfUnblocked(&g_camp->menuGrid);
        arg = dataTable15GetUnlockedEntryId((s32)object->menuGroup, arg);
        return arg;
    }
    return 0;
}

} /* extern "C" */
