/* NON_MATCHING: retail looks the track node up as items[index * stride + 0] (mla) with the runtime type constant kept in r7, and assigns different saved registers (model r6, motion r5, node r4); ours uses mul and r4/r7/r5. Everything else, including the tail call into the record rebuild, has the same shape (139 rows against 146). */
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"

extern "C" {

extern const AsdTypeInfo DAT_004722a0;

void resourceListDestroy(void *resources);
void asdMemFree(void *block);
void FUN_0014edd0(AsdModelAttrModel *model, u8 *data, s32 key);

/* Switches the model to motion `motionIndex`: a pending motion takes over the playing track node's slot,
 * the playing motion is set and its blend clamped to the limit, then the attribute records are rebuilt
 * for the new motion. */
void modelSelectPrimaryMotion(AsdMotionModel *model, s32 motionIndex, f32 blend)
{
    AsdMotionInstance *active;
    s32 i;

    model->speed = 1.0f;
    if (motionIndex < 0 || model->motionCount <= 0 || model->motionCount <= motionIndex) {
        return;
    }
    if ((model->flags & 1) != 0) {
        AsdTrackOwner *owner = model->owner;
        AsdTrackNode *node = owner->hasActive != 0 ? owner->list->items[owner->index * owner->list->stride] : NULL;

        if (node != NULL) {
            const AsdTypeInfo *type = node->vtbl->getType(node);

            do {
                if (type == &DAT_004722a0) {
                    AsdMotionInstance *pending = model->pending;
                    AsdMotionInstance *previous = model->active;

                    node->channelA->value = 0.0f;
                    node->channelB->value = 0.0f;
                    node->handedOver = 1;
                    model->active = pending;
                    model->pending = NULL;
                    node->slot->instance = pending;
                    node->slot->unk04 = 0;
                    if (previous != NULL) {
                        previous->vtbl->destroy(previous);
                        previous->pool->vtbl->release(previous->pool, previous);
                    }
                    model->flags &= ~1;
                    break;
                }
                type = type->base;
            } while (type != NULL);
        }
    }
    active = model->active;
    if (active == NULL) {
        return;
    }
    active->vtbl->setMotion(active, model->motionTable[motionIndex]);
    model->currentMotion = motionIndex;
    if (blend != 0.0f) {
        f32 result;

        if (asdMotionModelBlendLimit(model) < blend) {
            blend = asdMotionModelBlendLimit(model);
        }
        result = active->interpolate(active->interpolateContext, active->blendFrom, active->blendLimit, blend);
        active->previousBlend = active->blend;
        active->blend = result;
        active->blendChanged = 1;
    }
    for (i = 0; i < model->records.count; i++) {
        AsdModelAttrRecord *record = &model->records.items[i];

        resourceListDestroy(record->handle);
        record->handle = NULL;
    }
    if (model->records.items != NULL) {
        asdMemFree(model->records.items);
        model->records.items = NULL;
    }
    model->records.count = 0;
    FUN_0014edd0((AsdModelAttrModel *)model, model->file->data, motionIndex);
}

} /* extern "C" */
