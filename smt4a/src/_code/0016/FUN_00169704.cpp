/* NON_MATCHING: readable rebuild from asm of the bust-up cut animation's finish step; retail resumes the loop by jumping back after the i == 0 job (loop restart at the job pointer) and keeps the offsets 0x640..0x654 in s-registers across the calls, and the position vector is left uninitialised when no model is available (as retail does). */
#include "common.h"

struct Vec3 {
    f32 x, y, z;
};

/* The bust-up cut animation (only the fields read here). */
struct BustupCutAnim {
    /* 0x000 */ u8 unk000[0x594];
    /* 0x594 */ u8 unk594[4];
    /* 0x598 */ u8 cameraBlock[0x44];
    /* 0x5DC */ f32 fadeFrames;
    /* 0x5E0 */ u8 unk5E0[4];
    /* 0x5E4 */ u32 owner;
    /* 0x5E8 */ u32 *model;
    /* 0x5EC */ u32 cameraSource;
    /* 0x5F0 */ s32 state;
    /* 0x5F4 */ u8 unk5F4[4];
    /* 0x5F8 */ s32 pageA;
    /* 0x5FC */ s32 pageB;
    /* 0x600 */ s32 slotB;
    /* 0x604 */ s32 slotA;
    /* 0x608 */ u8 unk608[0x2C];
    /* 0x634 */ u32 jobs[4];
    /* 0x644 */ f32 headOffsetY;
    /* 0x648 */ f32 headOffsetZ;
    /* 0x64C */ f32 firstOffsetY;
    /* 0x650 */ u8 unk650[4];
    /* 0x654 */ f32 sideOffsetZ;
    /* 0x658 */ f32 sideOffsetY;
};

extern "C" {
extern BustupCutAnim *g_bustupCutAnim;
extern u32 g_bustupCutAnimSlotTable[];

void cameraExportParameters(void *block, u32 source);
s32 jobIsValid(u32 job);
s32 modelHasLoadedAttachment(u32 *model);
s32 FUN_001ad7cc(u32 model, u32 bone, Vec3 *out);
void FUN_00186ce4(u32 job, Vec3 *from, Vec3 *to, u32 owner, s32 frames, s32 mode);
void FUN_00185830(u32 job, u32 owner, s32 frames, f32 x, f32 y);

/* Finishes the cut animation: moves each of its four jobs to its target pose (or releases it when
 * the model is gone). Returns 1 while the animation is still running or has nothing to finish. */
u32 FUN_00169704(void)
{
    BustupCutAnim *anim = g_bustupCutAnim;
    if (anim == NULL)
        return 1;
    if (anim->state != 5) {
        if (anim->state == 2 || anim->state == 3)
            return 1;
        return 0;
    }
    cameraExportParameters(anim->cameraBlock, anim->cameraSource);
    for (s32 i = 0; i < 4; i++) {
        if (anim->jobs[i] == 0)
            continue;
        if (jobIsValid(anim->jobs[i]) == 0) {
            anim->jobs[i] = 0;
            continue;
        }
        BustupCutAnim *current = g_bustupCutAnim;
        Vec3 position;
        bool placed = false;
        if (current != NULL) {
            s32 found = 1;
            if (current->model != NULL && modelHasLoadedAttachment(current->model) != 0) {
                found = FUN_001ad7cc(current->model[2], g_bustupCutAnimSlotTable[i], &position);
                if (i == 0)
                    position.y += current->headOffsetY;
            }
            placed = found != 0;
        }
        if (!placed) {
            if (i != 0)
                FUN_00185830(anim->jobs[i], anim->owner, (s32)anim->fadeFrames, anim->sideOffsetZ, anim->sideOffsetY);
            else
                FUN_00185830(anim->jobs[0], anim->owner, (s32)anim->fadeFrames, 0.0f, 0.0f);
            anim->jobs[i] = 0;
            continue;
        }
        Vec3 target = position;
        if (i == 0) {
            position.y += anim->firstOffsetY;
            target.z = position.z + anim->headOffsetZ;
        } else if (anim->pageA == anim->pageB || anim->pageA != 1) {
            position.y += anim->sideOffsetY;
            target.z = position.z + anim->sideOffsetZ;
        } else {
            position.y += anim->sideOffsetY;
            target.z = position.z + anim->sideOffsetY;
        }
        s32 frames = (s32)anim->fadeFrames;
        if (anim->slotA == 200 || anim->slotB == 200) {
            if (i == 0) {
                if (anim->slotA == 200)
                    FUN_00186ce4(anim->jobs[0], &position, &target, anim->owner, frames, 1);
                else if (anim->slotB == 200)
                    FUN_00186ce4(anim->jobs[0], &position, &target, anim->owner, frames, 7);
            } else if (anim->slotB == 200) {
                FUN_00186ce4(anim->jobs[i], &position, &target, anim->owner, frames, 7);
            } else {
                FUN_00186ce4(anim->jobs[i], &position, &target, anim->owner, frames, 0);
            }
        } else {
            FUN_00186ce4(anim->jobs[i], &position, &target, anim->owner, frames, 0);
        }
    }
    anim->state = 6;
    return 0;
}

} /* extern "C" */
