/* NON_MATCHING: retail shares one `mov r6,r1; b` block (result = choice, then a common scrSetResult) between the three picks; the build tail-merges only two of them */
#include "common.h"

extern "C" {

typedef struct Options0037d358 {
    /* 0x000 */ u8 unk000[0x132];
    /* 0x132 */ u16 choiceA;
    /* 0x134 */ u16 choiceB;
    /* 0x136 */ u16 choiceC;
} Options0037d358;

void scrSetResult(s32 value);
u32 randRange(s32 limit);
Options0037d358 *gameGetOptions(void);
s32 gameOptionsClassifyMode(void);

/* Script command: when gameOptionsClassifyMode reports 1, picks one of the options that are set at random (always the first when only one is); the result defaults to 2. */
u32 scrCommOptionRandomPick(void)
{
    u16 result = 2;

    if (gameOptionsClassifyMode() == 1) {
        s32 count = 1;
        Options0037d358 *options = gameGetOptions();
        s32 pick;

        if (options->choiceA != 0) {
            count = 2;
        }
        if (options->choiceB != 0) {
            count++;
        }
        if (options->choiceC != 0) {
            count++;
        }
        pick = randRange((u16)count);
        if (options->choiceA != 0) {
            if (pick == 0) {
                result = options->choiceA;
                scrSetResult(result);
                return 1;
            }
            pick--;
        }
        if (options->choiceB != 0) {
            if (pick == 0) {
                result = options->choiceB;
                scrSetResult(result);
                return 1;
            }
            pick--;
        }
        if (options->choiceC != 0 && pick == 0) {
            result = options->choiceC;
            scrSetResult(result);
            return 1;
        }
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
