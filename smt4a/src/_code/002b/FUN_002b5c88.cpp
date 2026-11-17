#include "gamedata/MapSaveBlockA.h"
#include "shard/W6_W6Match1_PositionedStream.h"
extern "C" {
/* Resets the game-flag work's ramp and pending state. */
void FUN_002b5c88(void) {
    MapSaveBlockA *work = gameFlagsGetBlock();
    work->eventEnabled = 1;
    work->eventTime = 0.0f;
    work->eventPending = 0;
}
}
