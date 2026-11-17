/* NON_MATCHING: retail keeps a separate pointer to slot->shown (add #0x85) and computes &models before the branch; ours addresses both fields off one slot base. */
#include "common.h"
#include "classes/Obj4209cc.h"
#include "map/LmapMainGlobals.h"
#include "Model/MoriModelContent.h"

extern "C" {

/* A model node: its low two flag bits hide it. */
typedef struct LmapModelNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
} LmapModelNode;

#define LMAP_MODEL_NODE_HIDDEN 3



/* Shows or hides map model `index`, updating its node once the model is loaded. */
void FUN_003b5c54(s32 index, s32 show)
{
    LmapMainSlot *slot;

    if (g_lmapMainState == NULL) {
        return;
    }
    slot = &g_lmapMainState->modelSlots[index];
    if (show) {
        if (slot->shown) {
            return;
        }
        slot->shown = 1;
        if (!slot->registered) {
            return;
        }
        reinterpret_cast<LmapModelNode *>(ptrVectorAt(g_lmapMainState->model->binding, index))->flags &= ~LMAP_MODEL_NODE_HIDDEN;
    } else {
        if (!slot->shown) {
            return;
        }
        slot->shown = 0;
        if (!slot->registered) {
            return;
        }
        reinterpret_cast<LmapModelNode *>(ptrVectorAt(g_lmapMainState->model->binding, index))->flags |= LMAP_MODEL_NODE_HIDDEN;
    }
}

} /* extern "C" */
