/* NON_MATCHING: 22 lines: retail loads the cursor before setting the -1 default of the current slot, and the forward
 * branch's inlined highlight clear swaps r3/ip against the backward copy (which matches). */
#include "battle/BattleCommandController.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
void eventQueueAddUnique(s32 event);
s32 FUN_0029ae44(void);
s32 padIsButtonRepeat(u32 button);

/* Clears the highlight mark (status bit 3) of every action; retail inlines it in both cursor directions. */
static __inline void clearActionHighlights(BtlMainState **block)
{
    for (s32 i = 0; i < 109; i++)
        (*block)->actions[i].status &= ~8;
}

/* Moves the target cursor to the next (or previous) candidate when the pad asks for it, wrapping
 * around the candidate list, and keeps the current one selected otherwise. Returns 1 when the
 * cursor moved without wrapping. */
u32 btlTargetCursorStep(BtlMainState **block, CommandState *work)
{
    u32 moved = 0;
    s32 current = -1;
    for (s32 i = 0; i < 0x6D; i++) {
        if (work->targetIndex == work->targetOrder[i]) {
            current = i;
            break;
        }
    }
    memClear(work->targetMarks, 0x6D);
    if (padIsButtonRepeat(3) || padIsButtonRepeat(0xC) || FUN_0029ae44() > 0) {
        if (padIsButtonRepeat(3) || padIsButtonRepeat(0xC))
            eventQueueAddUnique(0x100016C);
        clearActionHighlights(block);
        for (s32 i = current + 1; i < 0x6D; i++) {
            if (work->targetOrder[i] != 0) {
                work->targetMarks[work->targetOrder[i]] = 1;
                work->targetIndex = work->targetOrder[i];
                moved = 1;
                break;
            }
        }
        if (!moved) {
            for (s32 i = 0; i < 0x6D; i++) {
                if (work->targetOrder[i] != 0) {
                    work->targetMarks[work->targetOrder[i]] = 1;
                    work->targetIndex = work->targetOrder[i];
                    break;
                }
            }
        }
    } else if (padIsButtonRepeat(4) || padIsButtonRepeat(0xD) || FUN_0029ae44() < 0) {
        if (padIsButtonRepeat(4) || padIsButtonRepeat(0xD))
            eventQueueAddUnique(0x100016C);
        clearActionHighlights(block);
        for (s32 i = current - 1; i >= 0; i--) {
            if (work->targetOrder[i] != 0) {
                work->targetMarks[work->targetOrder[i]] = 1;
                work->targetIndex = work->targetOrder[i];
                moved = 1;
                break;
            }
        }
        if (!moved) {
            for (s32 i = 0x6C; i >= 0; i--) {
                if (work->targetOrder[i] != 0) {
                    work->targetMarks[work->targetOrder[i]] = 1;
                    work->targetIndex = work->targetOrder[i];
                    break;
                }
            }
        }
    } else {
        work->targetMarks[work->targetIndex] = 1;
    }
    return moved;
}

} /* extern "C" */
