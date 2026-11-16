/* NON_MATCHING: only the final state stores differ: retail branches (ldr r1,[r6]; mov r0,#N; str) where the build if-converts them (ldrne/movne). */
/* Staff roll, scrolling state: moves the lines up, ends the roll when the last line passes the
 * end or the player skips it. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

extern StaffRollWork *g_staffRoll;

extern int gameFlagIsSet(u32 flag);

void staffRollScrollUpdate(void)
{
    StaffRollWork *roll = g_staffRoll;

    if (roll->lineA[11].y < roll->endY) {
        g_staffRoll->skip = 1;
        roll->finished = 1;
    } else {
        roll->frames++;
        for (int i = 0; i < 12; i++) {
            roll->lineA[i].y -= roll->speed;
            roll->lineB[i].y -= roll->speed;
        }
    }
    if ((FUN_002c15fc(9) != 0 || FUN_002c15fc(6) != 0) && roll->skip == 0 && gameFlagIsSet(0x565) != 0) {
        roll->skip = 1;
    }
    if (roll->finished != 0) {
        if (roll->skip != 0) {
            g_staffRoll->state = 6;
        }
    } else if (roll->skip != 0) {
        g_staffRoll->state = 3;
        return;
    }
}

} /* extern "C" */
