/* NON_MATCHING: visibility constants use swapped saved registers; action indexing and the hidden-state branch layout differ. */
#include "shard/W6_W6Match2_KeyedValueTable.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

static inline void setModelHidden(NodeEnableNode *model, bool hidden)
{
    if (hidden) {
        model->flags &= ~2;
    } else {
        model->flags |= 2;
    }
    model->resource->target->enabled = hidden;
}

static inline bool actionModelIsHidden(const BtlActionRecord *action)
{
    if ((action->status & 0x10) != 0) {
        if ((action->stateFlags & 2) != 0) {
            return true;
        }
        return false;
    }
    if ((action->status & 0x80000) != 0) {
        return true;
    }
    return false;
}

extern "C" {
void modelSetAnimationChannels(NodeEnableNode *model, s32 channels, f32 frame);
void animOwnerSetScale(NodeEnableNode *model, f32 speed);
BtlMainState *btlGetMainState(void);

// Start matching keyed models and reconcile their visibility with the associated action.
void FUN_0023c24c(KeyedValueTable *table, s32 firstKey, s32 secondKey)
{
    for (s32 index = 0; index < 50; ++index) {
        KeyedValueSlot *slot = &table->slots[index];
        if ((slot->action.flags & 8) == 0 && slot->model != NULL &&
            slot->firstKey == firstKey && slot->secondKey == secondKey) {
            modelSetAnimationChannels(slot->model, 0, 0.0f);
            animOwnerSetScale(slot->model, 1.0f);
            setModelHidden(slot->model, true);
            slot->action.flags |= 8;
            BtlActionRecord *action = &btlGetMainState()->actions[slot->action.index];
            if (!actionModelIsHidden(action)) {
                setModelHidden(slot->model, false);
            }
        }
    }
}
}
