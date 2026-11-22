/* NON_MATCHING: 34 lines, scratch registers only: retail materialises the track slot's 0 before loading the track list (no `ldr r1, [r0, #40]!` writeback) and swaps r0/r1 in the hand-over stores, the setMotion call and the interpolate call, with the previous-blend store before blendChanged. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "classes/Obj557dcc.h"

extern "C" {

extern const nw::ut::RuntimeTypeInfo DAT_005c0f3c;

void asdMemFree(void *block);
void asdModelBuildAttributeRecordsForKey(AsdMdlNode *model, u8 *data, s32 key);

/* Releases the model's attribute records, then rebuilds them for `key`: the body of
 * asdModelRebuildAttributeRecords, which retail inlines here. */
static __inline void rebuildAttributeRecords(AsdMdlNode *model, s32 key)
{
    if (model->records.count != 0) {
        for (s32 i = 0; i < model->records.count; i++) {
            AsdModelAttrRecord *record = &model->records.items[i];

            resourceListDestroy(record->handle);
            record->handle = NULL;
        }
    }
    if (model->records.items != NULL) {
        asdMemFree(model->records.items);
        model->records.items = NULL;
    }
    model->records.count = 0;
    asdModelBuildAttributeRecordsForKey(model, model->file->data, key);
}

/* Switches the model to motion `motionIndex`: a pending motion takes over the playing track node's slot,
 * the playing motion is set and its blend clamped to the limit, then the attribute records are rebuilt
 * for the new motion. */
void modelSelectPrimaryMotion(AsdMdlNode *model, s32 motionIndex, f32 blend)
{
    model->speed = 1.0f;
    if (motionIndex < 0 || model->motionCount <= 0 || model->motionCount <= motionIndex) {
        return;
    }
    if ((model->flags & 1) != 0) {
        AsdMdlSceneNode *sceneNode = model->sceneNode;
        AsdTrackNode *node = sceneNode->activeTarget != NULL ? sceneNode->trackList->getItem(sceneNode->activeIndex, 0) : NULL;
        AsdTrackNode *track = nw::ut::DynamicCast<AsdTrackNode>(node, &DAT_005c0f3c);

        if (track != NULL) {
            track->channelA->value = 0.0f;
            track->channelB->value = 0.0f;
            track->handedOver = 1;
            /* Read after the byte store above, which may alias the model. */
            AsdMotionInstance *pending = model->pending;
            AsdMotionInstance *previous = model->active;
            model->active = pending;
            model->pending = NULL;
            track->slot->instance = pending;
            track->slot->unk04 = 0;
            if (previous != NULL) {
                previous->vtbl->destroy(previous);
                previous->pool->vtbl->release(previous->pool, previous);
            }
            model->flags &= ~1;
        }
    }
    AsdMotionInstance *active = model->active;
    if (active == NULL) {
        return;
    }
    active->vtbl->setMotion(active, model->motionTable[motionIndex]);
    model->currentMotion = motionIndex;
    if (blend != 0.0f) {
        if (asdMotionModelBlendLimit(model) < blend) {
            blend = asdMotionModelBlendLimit(model);
        }
        f32 result = active->interpolate(active->interpolateContext, active->blendFrom, active->blendLimit, blend);
        f32 previousBlend = active->blend;
        active->blend = result;
        active->previousBlend = previousBlend;
        active->blendChanged = 1;
    }
    rebuildAttributeRecords(model, motionIndex);
}

} /* extern "C" */
