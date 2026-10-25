#include "map/mapEplExt.h"
#include "shard/eplSlotApplyParameters.h"

extern "C" {

void engineApplyGlobalParameters(void *object, s32 arg);

extern MapEplExt *g_eplSlots;

void eplSlotApplyParameters(s32 index, s32 arg)
{
    if (g_eplSlots->entries[index].object != NULL) {
        engineApplyGlobalParameters(g_eplSlots->entries[index].object, arg);
        return;
    }
}

} /* extern "C" */
