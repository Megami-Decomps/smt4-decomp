/* NON_MATCHING: retail counts the loop down in a second register (subs r3, r3, #1; bne) beside the index; armcc compares the index with 128. */
#include "map/mapIf.h"

extern "C" {

extern MapIfGlobalsA g_mapIf;

/* Restarts (state 6) every active interface record in states 8-16, except the categories that keep their state. */
void FUN_0031297c(void)
{
    MapIfStateA *state = g_mapIf.state;
    state->head.unk1C = 0;
    for (s32 i = 0; i < 128; i++) {
        s32 category = state->records[i].active ? state->records[i].display.category : 0;
        if (state->records[i].active && category != 0x1d && category != 0x31 && category != 0x1e &&
            category != 0x1f && category != 0x30 && category != 0x22 && category != 0x23 &&
            category != 0x25 && category != 0x28) {
            s32 recordState = state->records[i].state;
            if (recordState == 8 || recordState == 10 || recordState == 12 || recordState == 14 ||
                recordState == 16) {
                state->records[i].state = 6;
                state->records[i].transition.restart = 1;
            }
        }
    }
}

} /* extern "C" */
