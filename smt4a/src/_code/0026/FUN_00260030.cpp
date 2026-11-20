/* NON_MATCHING: only the end-frame sum and the target pointer of the final call swap r0/r1. */
#include "gfx/KeyedVectorTransition.h"
#include <string.h>

extern "C" {
extern s32 g_keyedRecordCount;
extern KeyedRecord g_keyedRecords[];
extern KeyedVectorPreset g_elementPresetTable[];
extern KeyedVectorTransition *g_effectColorOverride;
KeyedRecord *keyedRecordGet(s32 index);
const VectorKey *FUN_00239218(u32 index);
void vectorKeyPrepareNextStep(VectorKey *keys, s32 *index, s32 *duration, KeyVector *step, KeyVector *target);

/* FUN_002c17c0's body, inlined here: the preset of `index`, preset 0 when out of range. */
static __inline const KeyedVectorPreset *elementPresetGet(s32 index)
{
    if (index >= 14) {
        index = 0;
    }
    return &g_elementPresetTable[index];
}

/* entryIsValid's body, inlined here: the record exists and has a positive frame count. */
static __inline u32 keyedRecordIsValid(s32 index)
{
    u32 result;
    if (g_keyedRecordCount - index - 1 < 0 ||
        reinterpret_cast<const VectorKey *>(keyedRecordGet(index)->payload)[3].frame <= 0) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

/* Selects a keyed vector sequence, retaining the current vector when interrupting playback. */
void FUN_00260030(s32 index)
{
    KeyedVectorTransition *transition = g_effectColorOverride;
    if (!keyedRecordIsValid(index) || g_effectColorOverride == NULL) {
        return;
    }
    s32 duration = reinterpret_cast<const VectorKey *>(g_keyedRecords[index].payload)[3].frame;
    const VectorKey *keys = FUN_00239218(index);
    memcpy(transition->keys, keys, sizeof(transition->keys));
    if (g_effectColorOverride != NULL && g_effectColorOverride->mode != 0) {
        transition->segmentElapsed = 0;
        transition->keyIndex = 0;
        transition->segmentDuration = 0;
        transition->mode = 2;
    } else {
        transition->startFrame = 0;
        transition->mode = 1;
        transition->elapsed = 0;
        const KeyedVectorPreset *preset = elementPresetGet(transition->keys[0].id);
        transition->current.x = preset->value.position.x;
        transition->current.y = preset->value.position.y;
        transition->current.z = preset->value.position.z;
        transition->current.w = 1.0f;
    }
    transition->recordIndex = index;
    transition->endFrame = transition->startFrame + duration;
    vectorKeyPrepareNextStep(transition->keys, &transition->keyIndex, &transition->segmentDuration,
                             &transition->step, &transition->target);
    transition->active = 1;
}
}
