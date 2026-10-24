#include "common.h"

extern "C" {

typedef struct SearchWin00200a18 {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 stateA;
    /* 0x0c */ s32 stateB;
    /* 0x10 */ u8 unk10[0x28];
    /* 0x38 */ u8 part[1];
} SearchWin00200a18;

void spriteStartAnimationByIndex(u8 *part, s32 value);
void FUN_002bf810(u32 message);
void asdMemFree(SearchWin00200a18 *block);
void jobStop(u32 job, s32 flags);
s32 FUN_002c1d5c(void);

extern SearchWin00200a18 *DAT_0043e170; /* 0x43e170 */

/* Search window update. Returns 1 once it has closed (and with no window, when FUN_002c1d5c holds), 0 otherwise. */
u32 searchWinUpdate(void)
{
    SearchWin00200a18 *win = DAT_0043e170;
    SearchWin00200a18 *current;
    u32 result = 0;

    if (win != NULL) {
        s32 closing = FUN_002c1d5c();
        s32 stateA;

        if (closing != 0) {
            current = DAT_0043e170;
            jobStop(current->job, 0);
            asdMemFree(current);
            DAT_0043e170 = NULL;
            return 1;
        }
        stateA = win->stateA;
        if (stateA != 3) {
            if (win->stateB != 3 && stateA != 4) {
                if (DAT_0043e170->stateA == 2) {
                    DAT_0043e170->stateA = 3;
                } else {
                    DAT_0043e170->stateB = 3;
                }
                spriteStartAnimationByIndex(DAT_0043e170->part, 1);
                FUN_002bf810(0x1000181);
            } else if (stateA == 4) {
                current = DAT_0043e170;
                jobStop(current->job, 0);
                asdMemFree(current);
                result = 1;
                DAT_0043e170 = NULL;
            }
        }
    } else {
        if (FUN_002c1d5c() != 0) {
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
