/* NON_MATCHING: retail keeps the constant 1 in r5 and reloads the global pointer in the state stores; loop and register allocation differ slightly */
/* Staff roll, scrolling state: moves the lines up, ends the roll when the last line passes the
 * end or the player skips it. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

extern StaffRollWork *g_staffRoll;

extern int gameFlagIsSet(u32 flag);
extern int slotIsActive(u32 button);

void staffRollScrollUpdate(void)
{
    StaffRollWork *roll = g_staffRoll;
    int i;

    if (g_staffRoll->lineA[11].y < g_staffRoll->endY) {
        g_staffRoll->skip = 1;
        roll->finished = 1;
    } else {
        g_staffRoll->frames++;
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
