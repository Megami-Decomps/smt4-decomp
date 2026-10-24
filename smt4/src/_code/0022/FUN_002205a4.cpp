/* NON_MATCHING: starts a bust-up cut transition to a new entry (picks the side and index from the id, snapshots the running jobs, re-evaluates the new nodes and sets the ease function and offsets); written from the decompilation, the repeated node-refresh loops are merged into a helper and the float constants are not compared with retail */
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
    /* 0x5F0 */ u8 started;
    /* 0x5F1 */ u8 dirty;
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

s32 FUN_0026e70c();
s32 FUN_00247f0c();
s32 FUN_001241a8();

void cameraExportParameters(void *camera, CutRef *ref);
void FUN_0029c2cc(CutRef *ref, s32 flag);
void FUN_0024edd4(CutNodeHead *node, s32 index);
void FUN_0028703c(u32 object);
void FUN_0029bb14(u32 object);
s32 jobIsValid(u32 job);
void jobSavePositionSnapshot(u32 job);
void FUN_0024ecc0(u32 job, s32 index);
void rt_memcpy_w(void *destination, const void *source, u32 size);

/* Refreshes every sub-node of a node head, last to first. */
static __inline void cutRefreshNodes(CutNodeHead *head)
{
    if (head != NULL) {
        for (s32 i = head->inner->data->count - 1; i >= 0; i--)
            FUN_0024edd4(head, i);
    }
}

void FUN_002205a4(s32 id, s32 easeKind, s32 frames)
{
    BustupCutAnim *anim = g_bustupCutAnim;
    if (anim == NULL)
        return;

    anim->previousSide = anim->side;
    anim->previousId = anim->id;
    anim->id = id;
    if (id != CUT_ID_SPECIAL) {
        s32 index = anim->id;
        if (id < CUT_ID_SPLIT) {
            anim->side = 0;
        } else {
            anim->side = 1;
            index -= CUT_ID_SPLIT;
        }
        anim->index = index;
    } else {
        anim->index = CUT_SPECIAL_INDEX;
        anim->side = 1;
    }

    if (anim->started == 0) {
        anim->ref = anim->refs[anim->index];
        anim->node = anim->nodes[anim->index];
        anim->dirty = 0;
        if (anim->id == CUT_ID_SPECIAL) {
            anim->savedJob = anim->jobs[0];
            FUN_0024ecc0(0, 0);
        }
        anim->state = CUT_STATE_IDLE_START;
        anim->offsetA = anim->side == 0 ? 0.0f : CUT_OFFSET;
        anim->offsetC = 0.0f;
        anim->previousSide = anim->side;
        anim->previousId = anim->id;
        return;
    }

    cameraExportParameters(anim->camera, anim->ref);
    if (anim->dirty != 0)
        FUN_0029c2cc(anim->ref, 0);
    cutRefreshNodes(anim->ref->nodes);
    FUN_0028703c((u32)anim->node->extra);
    FUN_0029bb14((u32)anim->node->extra);

    s32 (*ease)() = FUN_0026e70c;
    if (easeKind == CUT_EASE_A)
        ease = FUN_00247f0c;
    else if (easeKind == CUT_EASE_B)
        ease = FUN_001241a8;
    anim->duration = (f32)frames;
    anim->elapsed = 0.0f;
    anim->ease = ease;
    anim->savedOffsetA = anim->offsetA;
    rt_memcpy_w(anim->cameraCopy, anim->camera, 0x44);
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
    FUN_0028703c((u32)anim->node->extra);
    FUN_0029bb14((u32)anim->node->extra);
    cutRefreshNodes(anim->node->extra->first);
    cutRefreshNodes(anim->node->extra->second);
    anim->state = CUT_STATE_SWITCHING;

    if (anim->id != CUT_ID_SPECIAL) {
        if (anim->previousId == CUT_ID_SPECIAL)
            FUN_0024ecc0(anim->savedJob, 0);
        return;
    }
    anim->savedJob = anim->jobs[0];
    FUN_0024ecc0(0, 1);
    FUN_0024ecc0(0, 2);
    FUN_0024ecc0(0, 3);
}

} /* extern "C" */
