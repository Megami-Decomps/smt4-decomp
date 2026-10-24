/* NON_MATCHING: retail hoists the call arguments into r0/r1 before the compare; the switch's jump table cannot be compared byte for byte */
#include "common.h"

extern "C" {

s32 scrGetArg(...);
void FUN_002378b8(s32 command, s32 target);
void FUN_002a3518(s32 command, s32 target);

/* A script command with argument 1 == 13 stops the event textures and bust-up slots for these
 * argument 0 values; every other call is handled elsewhere. */
void FUN_002a3470(void)
{
    s32 command = scrGetArg();
    s32 target = scrGetArg(1);

    if (target == 13) {
        switch (command) {
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8:
        case 10:
        case 11:
        case 15:
        case 18:
        case 25:
        case 40:
        case 42:
        case 71:
        case 73:
            FUN_002a3518(command, target);
            return;
        }
    }
    FUN_002378b8(command, target);
}

} /* extern "C" */
