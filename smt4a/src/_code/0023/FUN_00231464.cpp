/* NON_MATCHING: Task allocation null-branch selection and initialization-store addressing differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

/* Callback signatures are not recovered by this caller. These declarations
 * describe address-only callback arguments, not native class ABI. */
extern "C" {
typedef void (*GameOverCallbackA)(...);

void *asdOperatorNew(u32 size);
u32 asdProcessCreateSimple(const char *name, u32 priority, u32 argument2,
                           u32 argument3, GameOverCallbackA poll,
                           GameOverCallbackA destroy, u32 argument6);
void taskCreateDraw(const char *name, u32 priority, u32 argument2,
                    u32 argument3, GameOverCallbackA callback,
                    u32 argument5, u32 argument6, u32 processToken);

void btlGameOverPollSequence(...);
void jobDestroyGlobal(...);
void FUN_00330a60(...);
void FUN_00330a58(...);

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
