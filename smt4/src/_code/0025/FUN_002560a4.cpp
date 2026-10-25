/* NON_MATCHING: retail preloads 0x2A5 and derives the first flag id from it (sub #67), comparing the second id against the register; armcc here loads and compares each id separately. */
#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {

/* The support-unit data block: an entry's state at 0x604 and flags at 0x608. */
struct SupportUnitData {
    /* 0x000 */ u8 unk000[0x604];
    /* 0x604 */ u16 state;
    /* 0x606 */ u8 unk606[2];
    /* 0x608 */ u16 flags;
};

SupportUnitData *gameGetSupportUnitData(void);
void FUN_001a7dbc(SupportUnitData *data, s32 a, s32 id, s32 b);


/* Clears the support unit and, for two special ids, marks its story flag. */
void FUN_002560a4(s32 id)
{
    SupportUnitData *data = gameGetSupportUnitData();

    if ((data->flags & 1) != 0) {
        FUN_001a7dbc(data, -1, id, 3);
        data->state = 0;
        if (id == 0x2A3) {
            gameFlagSetValue(0x262, 1, 1);
            return;
        }
        if (id == 0x2A5) {
            gameFlagSetValue(0x263, 1, 1);
            return;
        }
    }
}

} /* extern "C" */
