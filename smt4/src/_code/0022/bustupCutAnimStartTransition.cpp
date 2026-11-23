/* NON_MATCHING: 65 lines: retail reads the new id back before the side stores, hoists the camera block address
 * into fp before the dirty test, loads the two float constants in the other order, gives the new ref and node
 * lookups the other registers and stores the previous side and id with one stm; the flags are s8 (retail's split
 * +1280 base for the dirty flag), the ease switch, offsets, node refreshes and the out-of-line first start follow
 * retail. */
#include "common.h"

#define CUT_ID_SPECIAL 200
#define CUT_ID_SPLIT 100
#define CUT_SPECIAL_INDEX 0xB
#define CUT_STATE_IDLE_START 2
#define CUT_STATE_SWITCHING 5
#define CUT_OFFSET 75.0f
#define CUT_JOB_COUNT 4

#define CUT_EASE_NONE 0
#define CUT_EASE_A 1
#define CUT_EASE_B 2

struct CutNodeData {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
};

struct CutNodeHead {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ struct { u8 unk[8]; CutNodeData *data; } *inner;
};

struct CutRef {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ CutNodeHead *nodes;
    /* 0x08 */ u32 object;
};

struct CutNodeOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ struct { u8 unk[0x4C]; CutNodeHead *first; CutNodeHead *second; } *extra;
};

struct BustupCutAnim {
    /* 0x000 */ u8 unk000[0x50C];
    /* 0x50C */ u8 camera[0x44];
    /* 0x550 */ u8 cameraCopy[0x44];
    /* 0x594 */ u8 unk594[0x44];
    /* 0x5D8 */ f32 duration;
    /* 0x5DC */ f32 elapsed;
    /* 0x5E0 */ s32 (*ease)();
    /* 0x5E4 */ CutNodeOwner *node;
    /* 0x5E8 */ CutRef *ref;
    /* 0x5EC */ s32 state;
    /* 0x5F0 */ s8 started;
    /* 0x5F1 */ s8 dirty;
    /* 0x5F2 */ u8 unk5F2[2];
    /* 0x5F4 */ s32 side;
    /* 0x5F8 */ s32 previousSide;
    /* 0x5FC */ s32 previousId;
    /* 0x600 */ s32 id;
    /* 0x604 */ s32 index;
    /* 0x608 */ u8 unk608[0x28];
    /* 0x630 */ u32 jobs[CUT_JOB_COUNT];
    /* 0x640 */ f32 offsetA;
    /* 0x644 */ f32 savedOffsetA;
    /* 0x648 */ f32 offsetB;
    /* 0x64C */ f32 offsetC;
    /* 0x650 */ f32 offsetD;
    /* 0x654 */ f32 offsetE;
    /* 0x658 */ CutNodeOwner *nodes[12];
    /* 0x688 */ u8 unk688[0x40];
    /* 0x6C8 */ CutRef *refs[12];
    /* 0x6F8 */ u8 unk6F8[0x48];
    /* 0x740 */ u32 savedJob;
};

extern "C" {
extern BustupCutAnim *g_bustupCutAnim;

s32 floatInterpolateOverDuration();
s32 curveInterpolatePacked();
s32 FUN_001241a8();

void cameraExportParameters(void *camera, CutRef *ref);
void modelRemoveFromSlotList(CutRef *ref, s32 flag);
void FUN_0024edd4(CutNodeHead *node, s32 index);
void animationEvaluateCallback(u32 object, f32 time); // declcheck: local (the shared declaration in AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h does not compile here: more than one instance of overloaded function "modelSetScale" has "C" linkage)
void modelSetScale(u32 object, f32 scale); // declcheck: local (see animationEvaluateCallback: the shared header does not compile here)
s32 jobIsValid(u32 job);
void jobSavePositionSnapshot(u32 job);
void bustupCutAnimAssignSlot(u32 job, s32 index);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Refreshes every sub-node of a node head, last to first. */
static __inline void cutRefreshNodes(CutNodeHead *head)
{
    if (head != NULL) {
        for (s32 i = head->inner->data->count - 1; i >= 0; i--)
            FUN_0024edd4(head, i);
    }
}

void bustupCutAnimStartTransition(s32 id, s32 easeKind, s32 frames)
{
    BustupCutAnim *anim = g_bustupCutAnim;
    if (anim == NULL)
        return;

    anim->previousSide = anim->side;
    anim->previousId = anim->id;
    anim->id = id;
    if (id != CUT_ID_SPECIAL) {
        if (id < CUT_ID_SPLIT)
            anim->side = 0;
        else
            anim->side = 1;
        anim->index = id < CUT_ID_SPLIT ? anim->id : anim->id - CUT_ID_SPLIT;
    } else {
        anim->index = CUT_SPECIAL_INDEX;
        anim->side = 1;
    }

    if (anim->started != 0) {
        cameraExportParameters(anim->camera, anim->ref);
        if (anim->dirty != 0)
            modelRemoveFromSlotList(anim->ref, 0);
        cutRefreshNodes(anim->ref->nodes);
        animationEvaluateCallback((u32)anim->node->extra, 0.0f);
        modelSetScale((u32)anim->node->extra, 0.0f);

        anim->duration = (f32)frames;
        anim->elapsed = 0.0f;
        switch (easeKind) {
        case CUT_EASE_NONE:
            anim->ease = floatInterpolateOverDuration;
            break;
        case CUT_EASE_A:
            anim->ease = curveInterpolatePacked;
            break;
        case CUT_EASE_B:
            anim->ease = FUN_001241a8;
            break;
        }
        anim->savedOffsetA = anim->offsetA;
        __aeabi_memcpy4(anim->cameraCopy, anim->camera, 0x44);
        anim->offsetE = 0.0f;
        anim->offsetD = 0.0f;
        anim->offsetC = 0.0f;
        anim->offsetA = 0.0f;
        if (anim->side != 0) {
            anim->offsetB = CUT_OFFSET;
            if (anim->previousSide == 0)
                anim->offsetD = -CUT_OFFSET;
        } else {
            anim->offsetB = 0.0f;
            if (anim->previousSide == 1)
                anim->offsetD = CUT_OFFSET;
        }

        for (s32 i = 0; i < CUT_JOB_COUNT; i++) {
            if (jobIsValid(anim->jobs[i]) != 0)
                jobSavePositionSnapshot(anim->jobs[i]);
        }

        anim->ref = anim->refs[anim->index];
        anim->node = anim->nodes[anim->index];
        anim->dirty = 0;
        cutRefreshNodes(anim->ref->nodes);
        animationEvaluateCallback((u32)anim->node->extra, 0.0f);
        modelSetScale((u32)anim->node->extra, 0.0f);
        cutRefreshNodes(anim->node->extra->first);
        cutRefreshNodes(anim->node->extra->second);
        anim->state = CUT_STATE_SWITCHING;

        if (anim->id != CUT_ID_SPECIAL) {
            if (anim->previousId == CUT_ID_SPECIAL)
                bustupCutAnimAssignSlot(anim->savedJob, 0);
            return;
        }
        anim->savedJob = anim->jobs[0];
        bustupCutAnimAssignSlot(0, 1);
        bustupCutAnimAssignSlot(0, 2);
        bustupCutAnimAssignSlot(0, 3);
        return;
    }
    anim->ref = anim->refs[anim->index];
    anim->node = anim->nodes[anim->index];
    anim->dirty = 0;
    if (anim->id == CUT_ID_SPECIAL) {
        anim->savedJob = anim->jobs[0];
        bustupCutAnimAssignSlot(0, 0);
    }
    anim->state = CUT_STATE_IDLE_START;
    if (anim->side == 0)
        anim->offsetA = 0.0f;
    else
        anim->offsetA = CUT_OFFSET;
    anim->offsetC = 0.0f;
    anim->previousSide = anim->side;
    anim->previousId = anim->id;
}

} /* extern "C" */
