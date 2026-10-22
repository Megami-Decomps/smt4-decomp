/* NON_MATCHING: reset constants use different registers and the literal-pool order differs. */
#include "map/mapIf.h"
#include "map/mapDepart.h"

struct MapIfSoundView {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ u16 unk2c;
    /* 0x2e */ u8 unk2e[0x22];
    /* 0x50 */ MapVector position;
};

extern "C" {
extern MapIfStateA *g_mapIf;
extern GameStateA g_gameState;
s32 FUN_003d4ed8(u32 sound, MapVector position);

void FUN_00245f70(s32 id)
{
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &g_mapIf->records[index];
        if (record->active &&
            (record->display.category == 0x25 || record->display.category == 0x28) &&
            record->state == 6 && record->groupView.id == id) {
            MapIfSoundView *details = (MapIfSoundView *)record;
            MapVector position = details->position;
            position.y += 120.0f;
            if (g_gameState.inputBlocked == 0) {
                FUN_003d4ed8(0x010002ab, position);
            }
            record->state = 7;
            details->unk2c = 0;
            return;
        }
    }
}
}
