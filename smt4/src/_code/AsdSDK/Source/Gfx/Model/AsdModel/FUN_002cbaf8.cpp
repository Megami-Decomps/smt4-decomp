/* NON_MATCHING: retail keeps std::remove_copy out of line (called from several places in its translation unit) and addresses the globals of g_gfxSettings as separate arrays off one base register; the slot list's begin/end pair is also loaded with ldrd (the list object is 8-byte aligned), which the prefix struct cannot express. */
#include <algorithm>
#include "shard/S1GfxModel.h"

extern "C" {

extern GfxModelState g_gfxSettings;

/* Unregister the scene's current slot from its list (clearing its attached flag) and make `slot` the current one; the previous slot becomes pending. */
void FUN_002cbaf8(ModelSlot *slot, s32 which)
{
    GfxModelState *state = &g_gfxSettings;
    ModelSlotNodes *nodes = &state->owner[which]->slot->nodes;

    if (which == 0) {
        ModelSlotList *list = (ModelSlotList *)state->sceneNode[0];
        ModelSlot *current = (ModelSlot *)state->node0;
        ModelSlot **newEnd = std::remove(list->slots.begin, list->slots.end, current);
        bool removed = list->slots.end != newEnd;
        list->slots.end = newEnd;
        if (removed) {
            current->attached = 0;
        }
        state->pendingNode[0] = state->node0;
        state->node0 = (u32)slot;
        nodes->target[1] = (u32)slot;
        state->unkCC[0] = 1;
    } else if (which == 1) {
        ModelSlotList *list = (ModelSlotList *)state->sceneNode[1];
        ModelSlot *current = (ModelSlot *)state->node1;
        ModelSlot **newEnd = std::remove(list->slots.begin, list->slots.end, current);
        bool removed = list->slots.end != newEnd;
        list->slots.end = newEnd;
        if (removed) {
            current->attached = 0;
        }
        state->pendingNode[1] = state->node1;
        state->node1 = (u32)slot;
        nodes->target[1] = (u32)slot;
        state->unkCC[1] = 1;
    }
}

} /* extern "C" */
