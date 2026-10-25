/* NON_MATCHING: retail keeps the camera constants (30.0, 1.0) in callee-saved VFP registers across both camera set-ups and stores the setup fields in a different order; this build reloads/stores them in source order. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "event/bustupEvent/BustupCutAnim.h"
#include "title/titleMain.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

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
    /* 0x004 */ u8 camera[0x50c];
    /* 0x510 */ BustupCameraSetup setup;
    /* 0x548 */ u8 unk548[0x5ec - 0x548];
    /* 0x5ec */ u32 model;                  /* the model currently shown */
    /* 0x5f0 */ s32 unk5f0;
    /* 0x5f4 */ u8 unk5f4;
    /* 0x5f5 */ u8 unk5f5;
    /* 0x5f6 */ u8 unk5f6;
    /* 0x5f7 */ u8 unk5f7[0x65c - 0x5f7];
    /* 0x65c */ u32 lists[BUSTUP_CUT_ENTRIES];
    /* 0x6cc */ u32 models[BUSTUP_CUT_ENTRIES];
    /* 0x73c */ f32 shakeX;
    /* 0x740 */ f32 shakeY;
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
    u32 ids[BUSTUP_CUT_ENTRIES];
};
}

extern "C" {
extern BustupCutGlobal g_bustupCutAnim;
extern const char DAT_0052f6c0[];
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void sysMemClear(void *data, u32 size);
void asdCameraInitializeDefaults(void *camera, s32 flag);
void uiSetFloatPair(void *camera);
void FUN_0014f0dc(void *camera, BustupVec3 *position, BustupVec3 *target, BustupVec3 *up);
void FUN_001523b8(void *camera, s32 flag, f32 fov, f32 nearPlane, f32 farPlane, f32 aspect);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, void *work, u32 owner);
s32 FUN_002f4540(u32 job);
s32 FUN_00334848(u32 job);
void bustupCutAnimDestroy(u32 job);
void textFormatBuffer(char *buffer, const char *format, u32 id);
u32 FUN_00387350(const char *path);
void FUN_00449814(BustupModelNode *node, s32 part);
void cameraExportParameters(BustupCameraSetup *setup, u32 model);

/* Creates the bust-up cut animation block on first use (camera, jobs and the per-scene models/lists)
   and returns its job handle. */
u32 FUN_00387604(void)
{
    if (g_bustupCutAnim.block == NULL) {
        asdDebugTrace(DAT_0052f6c0, 0x201);
        g_bustupCutAnim.block = static_cast<BustupCutBlock *>(asdMemoryAllocTracked(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(BustupCutBlock), 1));
        BustupCutBlock *block = g_bustupCutAnim.block;
        sysMemClear(block, sizeof(BustupCutBlock));
        asdCameraInitializeDefaults(block->camera, 1);
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
        uiSetFloatPair(block->camera);
        FUN_0014f0dc(block->camera, &block->setup.position, &block->setup.target, &block->setup.up);
        FUN_001523b8(block->camera, 1, block->setup.fov, block->setup.nearPlane, block->setup.farPlane, block->setup.aspect);
        FUN_0036b824(reinterpret_cast<u32>(block->camera));
        block->unk5f4 = 0;
        block->unk5f6 = 1;
        block->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BustupCutAnim"), 4, 0, 0, FUN_002f4540, bustupCutAnimDestroy, reinterpret_cast<u32>(block));
        taskCreateDraw(reinterpret_cast<const s8 *>("BustupCutAnimDraw"), 0x71, 0, 0, FUN_00334848, NULL, block, block->job);
        block->unk5f0 = 0;
        char path[76];
        for (u32 i = 0; i < BUSTUP_CUT_ENTRIES; i++) {
            textFormatBuffer(path, "event/BustUpEvent/%s.bccam", g_bustupCutAnim.ids[i]);
            block->models[i] = FUN_00387350(path);
            textFormatBuffer(path, "event/BustUpEvent/%s.bam", g_bustupCutAnim.ids[i]);
            block->lists[i] = reinterpret_cast<u32>(asdMdlManagerCreateSecondList(path, 7));
        }
        block->model = block->models[0];
        block->unk5f5 = 0;
        BustupModel *model = reinterpret_cast<BustupModel *>(block->models[0]);
        BustupModelNode *node = model->node;
        if (node != NULL) {
            for (s32 part = node->child->child->partCount - 1; part >= 0; part--) {
                FUN_00449814(node, part);
            }
        }
        cameraExportParameters(&block->setup, block->model);
        uiSetFloatPair(block->camera);
        FUN_0014f0dc(block->camera, &block->setup.position, &block->setup.target, &block->setup.up);
        FUN_001523b8(block->camera, 1, block->setup.fov, block->setup.nearPlane, block->setup.farPlane, block->setup.aspect);
        FUN_0036b824(reinterpret_cast<u32>(block->camera));
    }
    return g_bustupCutAnim.block->job;
}

} /* extern "C" */
