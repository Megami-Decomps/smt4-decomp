/* NON_MATCHING: only the hide arm's shown && enabled test differs (retail if-converts it: cmp; ldrbne; cmpne; the build branches). */
#include "common.h"
#include "classes/Obj4209cc.h"
#include "map/LmapMainGlobals.h"
#include "Model/MoriModelContent.h"

extern "C" {

typedef struct LmapMarkerNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags; /* bits 0-1 set: hidden */
} LmapMarkerNode;



/* Shows or hides map marker `index` (when it is enabled), updating its model node's visibility bits. */
void FUN_00399290(s32 index, s32 show)
{
    LmapMainStateA *state = g_lmapMainState;

    if (state != NULL) {
        if (show) {
            if (!state->areaSlots[index].shown && state->areaSlots[index].registered) {
                state->areaSlots[index].shown = 1;
                LmapMarkerNode *node = reinterpret_cast<LmapMarkerNode *>(ptrVectorAt(state->areaModel->binding, index));
                node->flags &= ~3;
            }
        } else if (state->areaSlots[index].shown && state->areaSlots[index].registered) {
            state->areaSlots[index].shown = 0;
            LmapMarkerNode *node = reinterpret_cast<LmapMarkerNode *>(ptrVectorAt(state->areaModel->binding, index));
            node->flags |= 3;
        }
    }
}

} /* extern "C" */
