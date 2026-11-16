/* NON_MATCHING: the frames increment uses r3 (retail r1) and the final state stores are if-converted (ldrne/movne) where retail branches (ldr r1,[r6]; mov r0,#N; str). */
/* Staff roll, scrolling state: moves the lines up, ends the roll when the last line passes the
 * end or the player skips it. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

extern StaffRollWork *g_staffRoll;

extern int gameFlagIsSet(u32 flag);

void staffRollScrollUpdate(void)
{
    StaffRollWork *roll = g_staffRoll;
    int i;

    if (roll->lineA[11].y < roll->endY) {
        g_staffRoll->skip = 1;
        roll->finished = 1;
    } else {
        roll->frames++;
        for (i = 0; i < 12; i++) {
            roll->lineA[i].y -= roll->speed;
            roll->lineB[i].y -= roll->speed;
        }
    }
    if ((slotIsActive(9) != 0 || slotIsActive(6) != 0) && roll->skip == 0 && gameFlagIsSet(0x565) != 0) {
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
