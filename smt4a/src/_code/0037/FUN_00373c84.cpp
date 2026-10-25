/* When idle, queues the two pending ids on the active object and kicks it off (returns 0); otherwise reports whether the global state is 4. */
#include "battle/BtlMainAccess.h"
#include "battle/btlStage.h"

extern "C" {

typedef struct {
    u32 first;
    u32 second;
} IdPair;

typedef struct {
    u8 unk000[0x178];  /* 0x000 */
    IdPair ids;        /* 0x178 */
} ActiveObject;

extern BtlStage *g_btlStageModel;

u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
void FUN_004d88fc(BtlStage *machine, ActiveObject *object);
void state4DStop(BtlStage *machine, ActiveObject *object);
void state4DStart(BtlStage *machine);

u8 FUN_00373c84(void)
{
    ActiveObject *object = reinterpret_cast<ActiveObject *>(btlGetMainState());
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);

    if (scrGetCommandFrame() == 0) {
        state4DStop(g_btlStageModel, object);
        object->ids.first = first;
        object->ids.second = second;
        FUN_004d88fc(g_btlStageModel, object);
        state4DStart(g_btlStageModel);
        return 0;
    }
    return g_btlStageModel->state == 4;
}

} /* extern "C" */
