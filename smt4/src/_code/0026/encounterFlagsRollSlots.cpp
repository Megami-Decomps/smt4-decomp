#include "gamedata/MapSaveBlock.h"
#include "gamedata/GameFlags.h"
#include "util/Random.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);

/* Closes or opens each random-encounter flag slot with a roll, except the slot of the resume zone: the roll must
 * hit 0 and the slot's next flag (flag + 1) be clear for the flag to open; the last slot can open only once flag 0x648 is set. */
void encounterFlagsRollSlots(void)
{
    MapSaveBlock *block = gameGetMapBlock();
    u8 area = 0;
    u8 floor = 0;
    u32 roll;
    for (s32 i = 0; i < 0x80; i++) randNextInRange(0xff);
    if (block->resumeMode == 1) {
        area = block->resumeMapId;
        floor = block->resumeAreaId;
    }
    roll = randNextInRange(0xff);
    if (area != 0x0e || floor != 1) {
        if (roll == 0 && gameFlagIsSet(0x571) == 0)
            gameFlagSetValue(0x570, 1, 1);
        else
            gameFlagSetValue(0x570, 0, 1);
    }
    roll = randNextInRange(0xff);
    if (area != 3 || floor != 8) {
        if (roll == 0 && gameFlagIsSet(0x573) == 0)
            gameFlagSetValue(0x572, 1, 1);
        else
            gameFlagSetValue(0x572, 0, 1);
    }
    roll = randNextInRange(0xff);
    if (area != 5 || floor != 6) {
        if (roll == 0 && gameFlagIsSet(0x575) == 0)
            gameFlagSetValue(0x574, 1, 1);
        else
            gameFlagSetValue(0x574, 0, 1);
    }
    roll = randNextInRange(0xff);
    if (area != 7 || floor != 1) {
        if (roll == 0 && gameFlagIsSet(0x577) == 0)
            gameFlagSetValue(0x576, 1, 1);
        else
            gameFlagSetValue(0x576, 0, 1);
    }
    roll = randNextInRange(0xff);
    if (area != 8 || floor != 1) {
        if (roll == 0 && gameFlagIsSet(0x579) == 0)
            gameFlagSetValue(0x578, 1, 1);
        else
            gameFlagSetValue(0x578, 0, 1);
    }
    roll = randNextInRange(0xff);
    if (area != 0x0c || floor != 1) {
        if (roll == 0 && gameFlagIsSet(0x57b) == 0)
            gameFlagSetValue(0x57a, 1, 1);
        else
            gameFlagSetValue(0x57a, 0, 1);
    }
    roll = randNextInRange(0xff);
    if (gameFlagIsSet(0x648) == 0)
        roll = 0xff;
    if (area != 0x0d || floor != 1) {
        if (roll == 0 && gameFlagIsSet(0x57d) == 0)
            gameFlagSetValue(0x57c, 1, 1);
        else
            gameFlagSetValue(0x57c, 0, 1);
    }
}

} /* extern "C" */
