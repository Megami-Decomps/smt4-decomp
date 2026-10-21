/* NON_MATCHING: light-color call is branched rather than predicated, adding one instruction; readiness load uses r0 and argument setup is later. O2 candidate. */
#include "battle/btlStage.h"
#include "shard/W6_W6Match1_BattleStageModel.h"


struct StageBattleState {
    u8 unk000[0x5a0];
    f32 yaw;
};

extern "C" {
extern BtlStageGlobals g_btlStage;
extern StageBattleState *g_btlMain;
extern const char DAT_004017a0[]; // "Light_EFT"
void mdlHandleArrayDestroy(BattleStageModel *stage);
void asdModelSlotSetColor(u32 slot, u32 bank, f32 red, f32 green, f32 blue);
void FUN_002759bc(void);
void FUN_00280ac0(s32 mode);
void FUN_00340350(BattleStageModel *stage);
void FUN_0034043c(BattleStageModel *stage);
void mapSetThreeTargetRotations(BattleStageModel *stage, f32 x, f32 y, f32 z);
u32 FUN_00340558(BattleStageModel *stage);
s32 FUN_0025bb34(s32 type, const char *name, s32 bank);
void FUN_003c7cf0(BattleStageModel *stage, s32 key0, s32 key1);
void FUN_003c8058(BattleStageModel *stage);

u32 btlStageUpdate(BattleStageModel *stage, u32 work)
{
    if (work == 0) {
        return 0;
    }
    if (g_btlStage.stage == NULL) {
        return 0;
    }
    switch (stage->state) {
    case 0:
        break;
    case 1:
        FUN_00280ac0(0);
        FUN_003c8058(stage);
        stage->state = 2;
        break;
    case 2: {
        if (stage->ready != 0 && FUN_00340558(stage) != 0) {
            btlStageUpdateNodePositions(stage, stage->position);
            mapSetThreeTargetRotations(stage, 0.0f, g_btlMain->yaw, 0.0f);
            s32 lightSlot = FUN_0025bb34(0, DAT_004017a0, 0);
            stage->lightSlot = lightSlot;
            if (lightSlot >= 0) {
                asdModelSlotSetColor(lightSlot, 0, 0.5f, 0.5f, 0.5f);
            }
            FUN_003c7cf0(stage, stage->key0, stage->key1);
            stage->state = 4;
        }
        break;
    }
    case 3:
        if (stage->context != NULL) {
            stage->context = NULL;
        }
        FUN_002759bc();
        mdlHandleArrayDestroy(stage);
        stage->state = 0;
        break;
    case 4:
        btlStageUpdateNodePositions(stage, stage->position);
        mapSetThreeTargetRotations(stage, 0.0f, g_btlMain->yaw, 0.0f);
        FUN_00340350(stage);
        FUN_0034043c(stage);
        break;
    }
    if (stage->frame < 0xffff) {
        ++stage->frame;
    }
    return 0;
}
}
