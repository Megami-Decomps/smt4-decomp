/* NON_MATCHING: canonical process callbacks recovered; allocation null-branch and work initialization store bases differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

void *asdOperatorNew(u32 size);
u32 asdProcessCreateSimple(const char *name, s32 priority, u32 flags,
                           AsdProcFunc start, AsdProcUpdateFunc poll,
                           AsdProcFunc destroy, void *work);
u32 taskCreateDraw(const char *name, s32 priority, u16 startDelay,
                   u16 endDelay, AsdProcUpdateFunc callback,
                   AsdProcFunc destroy, void *work, u32 parent);

s32 btlGameOverPollSequence(u32 job);
void jobDestroyGlobal(u32 job);
s32 FUN_00330a60(u32 job);
s32 FUN_00330a58(u32 job);

extern GameOverWorkPrefixA *DAT_0057f678;
extern const char DAT_00530f28[];
extern const char DAT_00530f18[];
extern const char DAT_00530f08[];
extern const char DAT_00530ef8[];

void FUN_00231464(void)
{
    GameOverWorkPrefixA *state =
        static_cast<GameOverWorkPrefixA *>(asdOperatorNew(0x3C));
    if (state != 0) {
        state->flag08 = 0;
        state->value0C = 0;
        state->value18 = 0;
        state->value1C = 0;
        state->value20 = 0;
    }

    DAT_0057f678 = state;
    state->processToken = asdProcessCreateSimple(
        DAT_00530f28, 4, 0, 0, btlGameOverPollSequence,
        jobDestroyGlobal, 0);

    taskCreateDraw(DAT_00530f18, 0x7E, 0, 0, FUN_00330a60,
                   0, 0, state->processToken);
    taskCreateDraw(DAT_00530f08, 0xDA, 0, 0, FUN_00330a60,
                   0, 0, state->processToken);
    taskCreateDraw(DAT_00530ef8, 0xEB, 0, 0, FUN_00330a58,
                   0, 0, state->processToken);
}
}
