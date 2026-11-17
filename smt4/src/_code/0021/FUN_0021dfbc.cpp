#include "map/MapIfGlobals.h"

extern "C" {

/* Clears the interface flag and returns every active record in states 8-16 (even) to state 6, except the categories 0x1D-0x1F and 0x25-0x26. */
void FUN_0021dfbc()
{
    MapIfState *state = g_mapIf.state;
    state->unk17 = 0;
    s32 index = 0;
    for (u32 left = 128; left != 0; --left) {
        if (state->records[index].active && state->records[index].display.category != 0x1d &&
            state->records[index].display.category != 0x26 && state->records[index].display.category != 0x1e &&
            state->records[index].display.category != 0x1f && state->records[index].display.category != 0x25) {
            if (state->records[index].state == 8 || state->records[index].state == 10 ||
                state->records[index].state == 12 || state->records[index].state == 14 || state->records[index].state == 16) {
                state->records[index].state = 6;
                state->records[index].transition.restart = 1;
            }
        }
        index++;
    }
}
}
