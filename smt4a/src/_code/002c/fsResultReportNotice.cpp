/* NON_MATCHING: the range chain, branches and pool match; retail keeps the result in r6 and the severity in r5 (the build swaps them), keeps the module in r1 and each description in r0 (the build swaps those), and lays out the 280-334 test after the code-27 block. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "nn/FsResult.h"

extern "C" {
u32 FUN_00280bc0(void);
void FUN_0032ca54(u32 result);
void entryTableResetAndInit(s32 index, u32 a, u32 b, u32 c);
void archivePathRequestSucceeded(s32 kind, s32 value);
void FUN_003cc97c(u32 owner, u32 code);
}

extern "C" {

/* Reports the pending filesystem result: picks the notice code for its description range and
   forwards it. Returns the severity (0 = no failure). */
u32 fsResultReportNotice(u32 owner, s32 value, s32 mode, s32 extra)
{
    u32 result = FUN_00280bc0();
    if (nnResultIsSuccess(result)) {
        return 0;
    }
    FUN_0032ca54(result);
    u32 severity = 4;
    u32 code = 28;
    if (fsResultInRange100(result)) {
        if (nnResultDescriptionBits(result) < 130) {
            return 3;
        }
        code = 30;
    } else if (fsResultInRange180(result)) {
        /* descriptions 180-199 keep the default notice */
    } else if (fsResultInRange390(result)) {
        if (mode == 1) {
            if (value != 0) {
                archivePathRequestSucceeded(1, value);
            }
            severity = 1;
            code = 25;
        } else if (mode == 3) {
            if (value != 0) {
                archivePathRequestSucceeded(1, value);
            }
            severity = 1;
            entryTableResetAndInit(0, extra + 1, 0xFFFFFFFF, 0);
            code = 34;
        } else if (mode == 0) {
            if (value != 0) {
                archivePathRequestSucceeded(1, value);
            }
            severity = 1;
            code = 33;
        } else if (mode == 2) {
            severity = 6;
        } else {
            code = 32;
        }
    } else if (fsResultInRange220(result)) {
        FUN_001386b4();
        severity = 5;
    } else if (fsResultInRange230(result)) {
        if ((nnResultDescriptionBits(result) >= 260 && nnResultDescriptionBits(result) < 280) ||
            !(nnResultDescriptionBits(result) >= 280 && nnResultDescriptionBits(result) <= 334)) {
            code = 27;
        }
    } else if (fsResultInRange200(result) && mode == 1) {
        if (value != 0) {
            archivePathRequestSucceeded(1, value);
        }
        code = 29;
    }
    FUN_003cc97c(owner, code);
    return severity;
}

}
