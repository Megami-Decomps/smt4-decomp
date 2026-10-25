/* NON_MATCHING: lifecycle switch peels state one instead of a jump table; stage-ID pair load grouping differs. */
#include "battle/btlStage.h"
#include "battle/btlCamera.h"
#include "shard/W6_W6Match1_BattleStageModelA.h"
#include "shard/W5_W5Match2_CameraRegistry.h"

struct FrameColorUpdateWork;
extern "C" {
extern BtlStageGlobals g_btlStage;
extern BtlCameraA *g_btlCamera;
extern CameraRegistry *g_handleRegistry;
extern const char DAT_0052a9b8[]; // Light_EFT
void FUN_002c23cc(u32 value);
void FUN_00400d80(BtlStage *stage, s32 id, s32 variant, u32 flags);
s32 FUN_00401440(BtlStage *stage);
void resourceOwnerSetChildEulerAngles(BtlStage *stage, f32 x, f32 y, f32 z);
u16 resourceNameGroupFindIndex(void *registry, const char *name);
void FUN_004d8bf8(BtlStage *stage, f32 x, f32 y, f32 z);
void FUN_004d896c(BtlStage *stage, u32 first, u32 second);
void FUN_002c2358(void);
void objectOwner3Release(BtlStage *stage);
void FUN_00401198(BtlStage *stage);
void FUN_0040128c(FrameColorUpdateWork *stage);

// Load, initialize, update or release the stage model and saturate its lifecycle frame counter.
u32 FUN_004d8d40(BtlStage *stage, s32 enabled)
{
    if (enabled == 0) {
        return 0;
    }
    if (g_btlStage.stage == NULL) {
        return 0;
    }
    switch ((u32)stage->state) {
    case 1: {
        FUN_002c23cc(0);
        stage->context = g_btlStage.context;
        s32 id = stage->apocalypse.identifiers.stageId;
        s32 variant = stage->apocalypse.identifiers.stageVariant;
        if (id < 0 || variant < 0) {
            id = 1;
            variant = 1;
        }
        FUN_00400d80(stage, id, variant, 0x1C0);
        stage->state = 2;
        break;
    }
    case 2:
        if (!FUN_00401440(stage)) {
            break;
        }
        btlStageUpdateNodePositions((BattleStageModelA *)stage, ((BattleStageModelA *)stage)->position);
        resourceOwnerSetChildEulerAngles(stage, 0.0f, g_btlCamera->basePose.yaw, 0.0f);
        stage->apocalypse.selection = resourceNameGroupFindIndex(g_handleRegistry->entries, DAT_0052a9b8);
        FUN_004d8bf8(stage, 0.5f, 0.5f, 0.5f);
        FUN_004d896c(stage, stage->setupInput.first, stage->setupInput.second);
        stage->state = 4;
        break;
    case 3:
        if (stage->context != NULL) {
            stage->context = NULL;
        }
        FUN_002c2358();
        objectOwner3Release(stage);
        stage->state = 0;
        break;
    case 4:
        btlStageUpdateNodePositions((BattleStageModelA *)stage, ((BattleStageModelA *)stage)->position);
        resourceOwnerSetChildEulerAngles(stage, 0.0f, g_btlCamera->basePose.yaw, 0.0f);
        FUN_00401198(stage);
        FUN_0040128c((FrameColorUpdateWork *)stage);
        break;
    }
    if (stage->apocalypse.frame < 0xFFFF) {
        ++stage->apocalypse.frame;
    }
    return 0;
}
}
