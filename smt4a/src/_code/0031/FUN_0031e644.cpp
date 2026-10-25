/* NON_MATCHING: explicit script-argument index and busy-result forwarding now match; retail predicates the early busy return while source shares a later return-one block. */
#include "common.h"
#include "shard/gameFlagSlotAdvanceCounter.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
s32 FUN_00162ea4(void);
int FUN_002f0c18(s32 arg);
int FUN_002f1554(s32 arg);
s32 uiQuestIsIdle(void);
int FUN_0034aae4(void);
int sysPlaySe(s32 id);

/* Script command: on its first frame starts the effect (finishing early if FUN_00162ea4 reports busy); then waits for uiQuestIsIdle. */
u8 FUN_0031e644(void)
{
    u16 arg = scrGetArg(0);
    s32 done;

    if (scrGetCommandFrame() == 0) {
        gameFlagSlotAdvanceCounter(arg);
        s32 busy = FUN_00162ea4();
        if (busy != 0) {
            return 1;
        }
        FUN_002f0c18(busy);
        FUN_002f1554(arg);
    }
    done = uiQuestIsIdle();
    if (done != 0) {
        FUN_0034aae4();
        sysPlaySe(0x92);
    }
    return done != 0;
}

} /* extern "C" */
