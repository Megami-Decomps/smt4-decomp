/* NON_MATCHING: construction through placement new matches retail; only the process-creation argument setup differs (retail stores the global after loading the update callback and forms the stack-argument pointer in r6; the build stores first and uses r0). */
#include "common.h"
#include <new>
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

u32 taskCreateDraw(const char *name, s32 priority, u16 startDelay,
                   u16 endDelay, AsdProcUpdateFunc callback,
                   AsdProcFunc destroy, void *work, u32 parent);

s32 btlGameOverPollSequence(u32 job);
void jobDestroyGlobal(u32 job);
s32 FUN_00330a60(u32 job);
s32 FUN_00330a58(u32 job);

extern GameOverWorkPrefixA *g_gameOverJobRecord;
extern const char DAT_00530f28[];
extern const char DAT_00530f18[];
extern const char DAT_00530f08[];
extern const char DAT_00530ef8[];

/* The game-over work block (0x3C bytes): the shared prefix, cleared on construction. */
struct GameOverWork : GameOverWorkPrefixA {
    GameOverWork()
    {
        flag08 = 0;
        value0C = 0;
        value18 = 0;
        value1C = 0;
        value20 = 0;
    }
    u8 unk24[0x18];
};
typedef char GameOverWorkSize[sizeof(GameOverWork) == 0x3C ? 1 : -1];

/* Creates the game-over work and its process and draw tasks. */
void FUN_00231464(void)
{
    g_gameOverJobRecord = new (asdOperatorNew(sizeof(GameOverWork))) GameOverWork;
    GameOverWorkPrefixA *state = g_gameOverJobRecord;
    state->processToken = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00530f28), 4, 0, 0, btlGameOverPollSequence, jobDestroyGlobal, 0);

    taskCreateDraw(DAT_00530f18, 0x7E, 0, 0, FUN_00330a60,
                   0, 0, state->processToken);
    taskCreateDraw(DAT_00530f08, 0xDA, 0, 0, FUN_00330a60,
                   0, 0, state->processToken);
    taskCreateDraw(DAT_00530ef8, 0xEB, 0, 0, FUN_00330a58,
                   0, 0, state->processToken);
}
}
