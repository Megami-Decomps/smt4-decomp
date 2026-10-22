#include "map/MapStateSlots.h"

extern "C" {
extern MapStateSlots *g_mapStateSlots;
void asdMdlManagerDestroy(void *model);

void FUN_002700d0()
{
    // Three additional slots follow the shared state prefix in this owner.
    struct CleanupStateView {
        MapStateSlots common;
        MapStateSlot extraSlots[3];
    };
    typedef char CleanupStateLayoutCheck[offsetof(CleanupStateView, extraSlots) == 0x9d8 ? 1 : -1];
    for (s32 index = 0; index < 3; ++index) {
        MapStateSlot *slot = &((CleanupStateView *)g_mapStateSlots)->extraSlots[index];
        if (slot->active != 0) {
            asdMdlManagerDestroy(slot->resources.model);
            slot->resources.model = NULL;
        }
    }
    for (s32 index = 0; index < 32; ++index) {
        MapStateSlot *slot = &g_mapStateSlots->slots[index];
        if (slot->active != 0 && slot->resources.ready != 0 && slot->resources.model != NULL) {
            asdMdlManagerDestroy(slot->resources.model);
            slot->resources.model = NULL;
        }
    }
    for (s32 index = 0; index < 8; ++index) {
        if (g_mapStateSlots->references.models[index].model != NULL) {
            asdMdlManagerDestroy(g_mapStateSlots->references.models[index].model);
            g_mapStateSlots->references.models[index].model = NULL;
        }
    }
}
}
