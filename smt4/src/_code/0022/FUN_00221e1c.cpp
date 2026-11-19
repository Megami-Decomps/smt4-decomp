#include "runtime/Stdio.h"
#include "battle/BattleStageLoadWork.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "shard/JobWork.h"

struct OrbitScreen;

extern "C" {
void FUN_0018a104(OrbitScreen *screen);
s32 FUN_002c1d5c(void);
void FUN_002a09b4(const char *file, s32 bank);
s32 modelHasLoadedAttachment(AsdMdlObject *model);
void nodeSetTranslation3f(AsdMdlNode *node, s32 mode, f32 x, f32 y, f32 z);
void animPlayerSetLoopPolicy(AsdMdlNode *node, s32 loop);
void FUN_002a04f0(s32 bank);
extern const char DAT_00403634[];
extern const char DAT_00403610[];

// Load the battle stage environment/model, then register and initialize the ready model.
s32 FUN_00221e1c(u32 handle)
{
    BattleStageLoadWork *work = (BattleStageLoadWork *)jobGetWork(handle);
    FUN_0018a104(reinterpret_cast<OrbitScreen *>(work));
    switch (work->state) {
    case 0:
        if (!FUN_002c1d5c()) {
            char file[64];
            __2sprintf(file, DAT_00403634, work->stage, work->variant);
            FUN_002a09b4(file, 0);
            work->environmentLoaded = 1;
            __2sprintf(file, DAT_00403610, work->stage, work->variant);
            AsdMdlObject *model = asdMdlManagerCreateSecondList(file, 0x38);
            work->state = 1;
            work->frame = 0;
            work->model = model;
        }
        break;
    case 1:
        if (work->model != NULL && !modelHasLoadedAttachment(work->model))
            break;
        if (AsdMdlObject *model = work->model) {
            if (model->node->unk0c < 0) {
                lightOwnerRegister(model, 1);
            }
            nodeSetTranslation3f(work->model->node, 0, 0.0f, 0.0f, 0.0f);
            animPlayerSetLoopPolicy(work->model->node, 1);
        }
        FUN_002a04f0(0);
        work->state = 2;
        work->frame = 0;
        break;
    case 2:
        break;
    case 3:
        return -1;
    }
    return 0;
}
}
