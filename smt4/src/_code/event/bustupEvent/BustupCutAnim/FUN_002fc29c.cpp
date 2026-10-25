/* NON_MATCHING: same as the Apocalypse twin - retail keeps the camera constants in callee-saved VFP registers across both camera set-ups and orders the setup stores differently. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "event/bustupEvent/BustupCutAnim.h"

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
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void memClear(void *data, u32 size);
void FUN_002c2044(void *camera, s32 flag);
void FUN_002c159c(void *camera);
void FUN_002c1edc(void *camera, BustupVec3 *position, BustupVec3 *target, BustupVec3 *up);
void FUN_002c1e30(void *camera, s32 flag, f32 fov, f32 nearPlane, f32 farPlane, f32 aspect);
void FUN_00298d50(void *camera);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, void *work, u32 owner);
s32 FUN_002169cc(u32 job);
s32 jobDrawOrderedChildren(u32 job);
void bustupCutAnimDestroy(u32 job);
void textFormatBuffer(char *buffer, const char *format, u32 id);
u32 asdCameraLoadFromFile(const char *path);
u32 asdMdlManagerCreateSecondList(const char *path, u32 flags);
void FUN_0024edd4(BustupModelNode *node, s32 part);
void cameraExportParameters(BustupCameraSetup *setup, u32 model);

/* Creates the bust-up cut animation block on first use (camera, jobs and the per-scene models/lists)
   and returns its job handle. */
u32 FUN_002fc29c(void)
{
    if (g_bustupCutAnim.block == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\bustupEvent\\BustupCutAnim.cpp", 0x201);
        g_bustupCutAnim.block = static_cast<BustupCutBlock *>(asdMemAlloc(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(BustupCutBlock), 1));
        BustupCutBlock *block = g_bustupCutAnim.block;
        memClear(block, sizeof(BustupCutBlock));
        FUN_002c2044(block->camera, 1);
        block->setup.position.x = 0.0f;
        block->setup.position.y = 0.0f;
        block->setup.position.z = 0.0f;
        block->setup.target.x = 0.0f;
        block->setup.target.y = 0.0f;
        block->setup.target.z = -5.0f;
        block->setup.up.x = 0.0f;
        block->setup.up.y = 1.0f;
        block->setup.up.z = 0.0f;
        block->setup.fov = 30.0f;
        block->setup.nearPlane = 1.0f;
        block->setup.farPlane = 10000.0f;
        block->setup.aspect = 5.0f / 3.0f;
        block->setup.roll = 0.0f;
        FUN_002c159c(block->camera);
        FUN_002c1edc(block->camera, &block->setup.position, &block->setup.target, &block->setup.up);
        FUN_002c1e30(block->camera, 1, block->setup.fov, block->setup.nearPlane, block->setup.farPlane, block->setup.aspect);
        FUN_00298d50(block->camera);
        block->unk5f0 = 0;
        block->unk5f2 = 1;
        block->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BustupCutAnim"), 2, 0, 0, FUN_002169cc, bustupCutAnimDestroy, reinterpret_cast<u32>(block));
        taskCreateDraw(reinterpret_cast<const s8 *>("BustupCutAnimDraw"), 0x6f, 0, 0, jobDrawOrderedChildren, NULL, block, block->job);
        block->unk5ec = 0;
        char path[76];
        for (u32 i = 0; i < BUSTUP_CUT_ENTRIES; i++) {
            textFormatBuffer(path, "event/BustUpEvent/%s.bccam", g_bustupCutAnim.ids[i]);
            block->models[i] = asdCameraLoadFromFile(path);
            textFormatBuffer(path, "event/BustUpEvent/%s.bam", g_bustupCutAnim.ids[i]);
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
        cameraExportParameters(&block->setup, block->model);
        FUN_002c159c(block->camera);
        FUN_002c1edc(block->camera, &block->setup.position, &block->setup.target, &block->setup.up);
        FUN_002c1e30(block->camera, 1, block->setup.fov, block->setup.nearPlane, block->setup.farPlane, block->setup.aspect);
        FUN_00298d50(block->camera);
    }
    return g_bustupCutAnim.block->job;
}

} /* extern "C" */
