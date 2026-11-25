#include "common.h"
#include "classes/Obj4209cc.h"
#include "map/LmapMainGlobals.h"
#include "Model/MoriModelContent.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

extern "C" {

enum { LMAP_MARKER_HIDDEN = 3 }; /* Visibility bits in the registered handle's id. */

/* Shows or hides map marker `index` (when it is registered), updating its model node's visibility bits. */
void lmapSetMarkerVisible(s32 index, s32 show)
{
    LmapMainStateA *state = g_lmapMainState;

    if (state == NULL) {
        return;
    }
    if (show) {
        if (!state->areaSlots[index].shown && state->areaSlots[index].registered) {
            state->areaSlots[index].shown = 1;
            RegisteredHandle *handle = (RegisteredHandle *)ptrVectorAt(state->areaModel->binding, index);
            handle->id &= ~LMAP_MARKER_HIDDEN;
        }
    } else if (state->areaSlots[index].shown && state->areaSlots[index].registered) {
        state->areaSlots[index].shown = 0;
        RegisteredHandle *handle = (RegisteredHandle *)ptrVectorAt(state->areaModel->binding, index);
        handle->id |= LMAP_MARKER_HIDDEN;
    }
}

} /* extern "C" */
