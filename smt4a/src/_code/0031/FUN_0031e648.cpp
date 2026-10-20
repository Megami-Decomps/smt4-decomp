/* NON_MATCHING: retail passes the still-zero r0 (FUN_00162ea4's result) to FUN_002f0c18 and returns 1 with `movne`; built reloads 0 into r0 and branches to a shared `mov r0, #1`. */
#include "common.h"

extern "C" {

s32 scrGetArg(void);
s32 scrGetCommandFrame(void);
int FUN_00418820(s32 arg);
s32 FUN_00162ea4(void);
int FUN_002f0c18(s32 arg);
int FUN_002f1554(s32 arg);
s32 FUN_002f151c(void);
int FUN_0034aae4(void);
int sysPlaySe(s32 id);

/* Script command: on its first frame starts the effect (finishing early if FUN_00162ea4 reports busy); then waits for FUN_002f151c. */
u8 FUN_0031e648(void)
{
    u16 arg = scrGetArg();
    s32 done;

    if (scrGetCommandFrame() == 0) {
        FUN_00418820(arg);
        if (FUN_00162ea4() != 0) {
            return 1;
        }
        FUN_002f0c18(0);
        FUN_002f1554(arg);
    }
    done = FUN_002f151c();
    if (done != 0) {
        FUN_0034aae4();
        sysPlaySe(0x92);
    }
    return done != 0;
}

} /* extern "C" */
