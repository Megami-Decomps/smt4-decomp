/* NON_MATCHING: bounds check adds an index move; preset lookup and final argument registers differ. */
#include "gfx/KeyedVectorTransition.h"
#include <string.h>

extern "C" {
extern s32 g_keyedRecordCount;
extern KeyedRecord g_keyedRecords[];
extern KeyedVectorPreset g_elementPresetTable[];
extern KeyedVectorTransition *DAT_00570ab4;
KeyedRecord *keyedRecordGet(s32 index);
const VectorKey *FUN_00239218(u32 index);
void vectorKeyPrepareNextStep(VectorKey *keys, s32 *index, s32 *duration, KeyVector *step, KeyVector *target);

// Select a keyed vector sequence, retaining the current vector when interrupting playback.
void FUN_00260030(s32 index)
{
    KeyedVectorTransition *transition = DAT_00570ab4;
    if (g_keyedRecordCount - index - 1 < 0 ||
        reinterpret_cast<const VectorKey *>(keyedRecordGet(index)->payload)[3].frame <= 0 ||
        DAT_00570ab4 == NULL) {
        return;
    }
    s32 duration = reinterpret_cast<const VectorKey *>(g_keyedRecords[index].payload)[3].frame;
    const VectorKey *keys = FUN_00239218(index);
    memcpy(transition->keys, keys, sizeof(transition->keys));
    if (DAT_00570ab4 != NULL && DAT_00570ab4->mode != 0) {
        transition->segmentElapsed = 0;
        transition->keyIndex = 0;
        transition->segmentDuration = 0;
        transition->mode = 2;
    } else {
        transition->startFrame = 0;
        transition->mode = 1;
        transition->elapsed = 0;
        s32 preset = transition->keys[0].id;
        if (preset >= 14) {
            preset = 0;
        }
        transition->current.x = g_elementPresetTable[preset].value.position.x;
        transition->current.y = g_elementPresetTable[preset].value.position.y;
        transition->current.z = g_elementPresetTable[preset].value.position.z;
        transition->current.w = 1.0f;
    }
    transition->recordIndex = index;
    transition->endFrame = transition->startFrame + duration;
    vectorKeyPrepareNextStep(transition->keys, &transition->keyIndex, &transition->segmentDuration,
                             &transition->step, &transition->target);
    transition->active = 1;
}
}
