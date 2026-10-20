#include "map/mapEplExt.h"

extern "C" {

void FUN_003a1b38(void *object, s32 arg);

extern MapEplExt *g_eplSlots;

void FUN_00353484(s32 index, s32 arg)
{
    if (g_eplSlots->entries[index].object != NULL) {
        FUN_003a1b38(g_eplSlots->entries[index].object, arg);
        return;
    }
}

} /* extern "C" */
