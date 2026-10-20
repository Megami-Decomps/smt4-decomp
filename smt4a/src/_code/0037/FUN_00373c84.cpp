/* When idle, queues the two pending ids on the active object and kicks it off (returns 0); otherwise reports whether the global state is 4. */
#include "common.h"

extern "C" {

typedef struct {
    u32 first;
    u32 second;
} IdPair;

typedef struct {
    u8 unk000[0x178];  /* 0x000 */
    IdPair ids;        /* 0x178 */
} ActiveObject;

typedef struct {
    u8 unk00[0xa0];    /* 0x00 */
    s32 state;         /* 0xa0 */
} StateMachine;

extern StateMachine *g_btlStageModel;

ActiveObject *btlGetMainState(void);
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
void FUN_004d88fc(StateMachine *machine, ActiveObject *object);
void state4DStop(StateMachine *machine, ActiveObject *object);
void state4DStart(StateMachine *machine);

u8 FUN_00373c84(void)
{
    ActiveObject *object = btlGetMainState();
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
