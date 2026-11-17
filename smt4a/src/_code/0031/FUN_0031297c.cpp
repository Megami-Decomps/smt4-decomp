#include "map/MapIfGlobals.h"

extern "C" {

/* Restarts (state 6) every active interface record in states 8-16, except the categories that keep their state. */
void FUN_0031297c(void)
{
    s32 index = 0;
    MapIfStateA *state = g_mapIf.state;
    state->unk1C = 0;
    for (u32 left = 128; left != 0; --left) {
        if (state->records[index].active && state->records[index].display.category != 0x1d &&
            state->records[index].display.category != 0x31 && state->records[index].display.category != 0x1e &&
            state->records[index].display.category != 0x1f && state->records[index].display.category != 0x30 &&
            state->records[index].display.category != 0x22 && state->records[index].display.category != 0x23 &&
            state->records[index].display.category != 0x25 && state->records[index].display.category != 0x28) {
            if (state->records[index].state == 8 || state->records[index].state == 10 ||
                state->records[index].state == 12 || state->records[index].state == 14 || state->records[index].state == 16) {
                state->records[index].state = 6;
                state->records[index].transition.restart = 1;
            }
        }
        index++;
    }
}

} /* extern "C" */
