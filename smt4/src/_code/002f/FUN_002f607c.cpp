/* NON_MATCHING: tail layout only: retail ends the third choice with `mov r6, r1; b <shared scrSetResult tail>`; built duplicates the scrSetResult/return sequence for it. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

typedef struct GameOptions {
    /* 0x000 */ u8 unk000[0x60A];
    /* 0x60A */ u16 choiceA;
    /* 0x60C */ u16 choiceB;
    /* 0x60E */ u16 choiceC;
} GameOptions;

s32 scrSetResult(s32 value);
GameOptions *gameGetSupportUnitData(void);
s32 randNextInRange(u16 range);

/* Script command: with gameGetOptionProgressStatus() == 1, picks one of the options' non-zero choices at random; the result defaults to 2. */
u32 FUN_002f607c(void)
{
    u16 result = 2;

    if (gameGetOptionProgressStatus() == 1) {
        s32 count = 1;
        GameOptions *options = gameGetSupportUnitData();
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
        pick = randNextInRange(count);
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
        if (options->choiceC != 0) {
            if (pick == 0) {
                result = options->choiceC;
                scrSetResult(result);
                return 1;
            }
        }
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
