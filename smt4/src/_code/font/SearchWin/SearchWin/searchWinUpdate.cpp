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
void soundPlaySeUnpanned(u32 message);
void asdMemFree(SearchWin00200a18 *block);
void jobStop(u32 job, s32 flags);
s32 eventIsSkipping(void);

extern SearchWin00200a18 *g_searchWin; /* 0x43e170 */

/* Search window update. Returns 1 once it has closed (and with no window, when eventIsSkipping holds), 0 otherwise. */
u32 searchWinUpdate(void)
{
    SearchWin00200a18 *win = g_searchWin;
    SearchWin00200a18 *current;
    u32 result = 0;

    if (win != NULL) {
        s32 closing = eventIsSkipping();
        s32 stateA;

        if (closing != 0) {
            current = g_searchWin;
            jobStop(current->job, 0);
            asdMemFree(current);
            g_searchWin = NULL;
            return 1;
        }
        stateA = win->stateA;
        if (stateA != 3) {
            if (win->stateB != 3 && stateA != 4) {
                if (g_searchWin->stateA == 2) {
                    g_searchWin->stateA = 3;
                } else {
                    g_searchWin->stateB = 3;
                }
                spriteStartAnimationByIndex(g_searchWin->part, 1);
                soundPlaySeUnpanned(0x1000181);
            } else if (stateA == 4) {
                current = g_searchWin;
                jobStop(current->job, 0);
                asdMemFree(current);
                result = 1;
                g_searchWin = NULL;
            }
        }
    } else {
        if (eventIsSkipping() != 0) {
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
