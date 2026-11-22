/* NON_MATCHING: asdCameraSetStereoDepth takes the stereo pair (30.0, 1.0), which retail keeps in s16/s17 across both camera
 * set-ups; what remains is the order and bases of the default setup stores (retail stores the target through its own
 * base and the far plane, aspect and roll from block + 0x400) and the camera pointer kept in r6. */
#include <stdio.h>
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "event/bustupEvent/BustupCutAnim.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "code/Code0038.h"
#include "gfx/CameraStereoDepth.h"

namespace {
struct BustupVec3 {
    f32 x, y, z;
};

/* The look-at camera the bust-up scenes render with. */
struct BustupCameraSetup {
    BustupVec3 position;
    BustupVec3 target;
    BustupVec3 up;
    f32 fov;
    f32 nearPlane;
    f32 farPlane;
    f32 aspect;
    f32 roll;
};

/* Block layout as this function sees it (the camera object starts at +4). */
struct BustupCutBlock {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 camera[0x508];
    /* 0x50c */ BustupCameraSetup setup;
    /* 0x544 */ u8 unk544[0x5e8 - 0x544];
    /* 0x5e8 */ u32 model;                  /* the model currently shown */
    /* 0x5ec */ s32 unk5ec;
    /* 0x5f0 */ u8 unk5f0;
    /* 0x5f1 */ u8 unk5f1;
    /* 0x5f2 */ u8 unk5f2;
    /* 0x5f3 */ u8 unk5f3[0x658 - 0x5f3];
    /* 0x658 */ u32 lists[BUSTUP_CUT_ENTRIES];
    /* 0x6c8 */ u32 models[BUSTUP_CUT_ENTRIES];
    /* 0x738 */ f32 shakeX;
    /* 0x73c */ f32 shakeY;
    /* 0x740 */ u8 unk740[4];
};

struct BustupModelNode {
    u8 unk00[8];
    BustupModelNode *child;
    u8 unk0c[4];
    s32 partCount;
};
struct BustupModel {
    u8 unk00[4];
    BustupModelNode *node;
};

/* The global: the block pointer followed by the table of scene ids. */
struct BustupCutGlobal {
    BustupCutBlock *block;
    u32 unk04[5];
    u32 ids[BUSTUP_CUT_ENTRIES];
};
}

extern "C" {
extern BustupCutGlobal g_bustupCutAnim;
void memClear(void *data, u32 size);
void cameraMatrixCacheReset(void *camera, s32 flag);
void cameraMatrixCacheSetLookAt(void *camera, BustupVec3 *position, BustupVec3 *target, BustupVec3 *up);
void stereoCameraSetPerspective(void *camera, s32 flag, f32 fov, f32 nearPlane, f32 farPlane, f32 aspect);
void FUN_00298d50(void *camera);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, void *work, u32 owner);
s32 FUN_002169cc(u32 job);
s32 jobDrawOrderedChildren(u32 job);
void bustupCutAnimDestroy(u32 job);
u32 asdMdlManagerCreateSecondList(const char *path, u32 flags);
void FUN_0024edd4(BustupModelNode *node, s32 part);
void cameraExportParameters(BustupCameraSetup *setup, u32 model);

/* Creates the bust-up cut animation block on first use (block->camera, jobs and the per-scene models/lists)
   and returns its job handle. */
u32 bustupCutAnimEnsureBlock(void)
{
    if (g_bustupCutAnim.block == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\bustupEvent\\BustupCutAnim.cpp", 0x201);
        g_bustupCutAnim.block = static_cast<BustupCutBlock *>(asdMemAlloc(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(BustupCutBlock), 1));
        BustupCutBlock *block = g_bustupCutAnim.block;
        memClear(block, sizeof(BustupCutBlock));
        cameraMatrixCacheReset(block->camera, 1);
        BustupCameraSetup *setup = &block->setup;
        BustupVec3 *position = &setup->position;
        BustupVec3 *target = &setup->target;
        BustupVec3 *up = &setup->up;
        position->x = 0.0f;
        position->y = 0.0f;
        position->z = 0.0f;
        target->x = 0.0f;
        target->y = 0.0f;
        target->z = -5.0f;
        up->x = 0.0f;
        up->y = 1.0f;
        up->z = 0.0f;
        block->setup.fov = 30.0f;
        block->setup.nearPlane = 1.0f;
        block->setup.farPlane = 10000.0f;
        block->setup.aspect = 5.0f / 3.0f;
        block->setup.roll = 0.0f;
        asdCameraSetStereoDepth(block->camera, 30.0f, 1.0f);
        cameraMatrixCacheSetLookAt(block->camera, &setup->position, &setup->target, &setup->up);
        stereoCameraSetPerspective(block->camera, 1, setup->fov, setup->nearPlane, setup->farPlane, setup->aspect);
        FUN_00298d50(block->camera);
        block->unk5f0 = 0;
        block->unk5f2 = 1;
        block->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BustupCutAnim"), 2, 0, 0, FUN_002169cc, bustupCutAnimDestroy, reinterpret_cast<u32>(block));
        taskCreateDraw(reinterpret_cast<const s8 *>("BustupCutAnimDraw"), 0x6f, 0, 0, jobDrawOrderedChildren, NULL, block, block->job);
        block->unk5ec = 0;
        char path[64];
        for (u32 i = 0; i < BUSTUP_CUT_ENTRIES; i++) {
            sprintf(path, "event/BustUpEvent/%s.bccam", g_bustupCutAnim.ids[i]);
            block->models[i] = reinterpret_cast<u32>(asdCameraLoadFromFile(path));
            sprintf(path, "event/BustUpEvent/%s.bam", g_bustupCutAnim.ids[i]);
            block->lists[i] = asdMdlManagerCreateSecondList(path, 7);
        }
        block->model = block->models[0];
        block->unk5f1 = 0;
        BustupModel *model = reinterpret_cast<BustupModel *>(block->models[0]);
        BustupModelNode *node = model->node;
        if (node != NULL) {
            for (s32 part = node->child->child->partCount - 1; part >= 0; part--) {
                FUN_0024edd4(node, part);
            }
        }
        cameraExportParameters(setup, block->model);
        asdCameraSetStereoDepth(block->camera, 30.0f, 1.0f);
        cameraMatrixCacheSetLookAt(block->camera, &setup->position, &setup->target, &setup->up);
        stereoCameraSetPerspective(block->camera, 1, setup->fov, setup->nearPlane, setup->farPlane, setup->aspect);
        FUN_00298d50(block->camera);
    }
    return g_bustupCutAnim.block->job;
}

} /* extern "C" */
