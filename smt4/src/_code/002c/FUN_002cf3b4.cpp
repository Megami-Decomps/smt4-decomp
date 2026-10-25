/* NON_MATCHING: retail retains an extra clear/set of the last preference before its final store, changing byte-load scheduling and saved registers. */
#include "shard/GameModeFlags.h"
#include "status/StatusCamera.h"

extern "C" {

void FUN_002cf3b4(void)
{
    GameModeFlags *settings = reinterpret_cast<GameModeFlags *>(FUN_002a0d0c());
    settings->sortModes[20].order = 0;
    settings->sortModes[23].order = 0;
    settings->sortModes[0].order = 2;
    settings->sortModes[1].order = 11;
    settings->sortModes[2].order = 11;
    settings->sortModes[3].order = 12;
    settings->sortModes[4].order = 33;
    settings->sortModes[5].order = 6;
    settings->sortModes[6].order = 6;
    settings->sortModes[7].order = 6;
    settings->sortModes[8].order = 4;
    settings->sortModes[9].order = 4;
    settings->sortModes[10].order = 4;
    settings->sortModes[11].order = 51;
    settings->sortModes[12].order = 1;
    settings->sortModes[13].order = 33;
    settings->sortModes[14].order = 34;
    settings->sortModes[15].order = 1;
    settings->sortModes[16].order = 11;
    settings->sortModes[17].order = 1;
    settings->sortModes[18].order = 1;
    settings->sortModes[19].order = 1;
    settings->sortModes[21].order = 1;
    settings->sortModes[22].order = 1;
    settings->sortModes[24].order = 1;
    settings->sortModes[25].order = 35;
    settings->sortModes[26].order = 33;
}
}
