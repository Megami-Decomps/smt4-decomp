/* NON_MATCHING: pool order and the conditional sound call match; only the final reset stores differ (retail sets 7 in r1 and the zero in r0 and stores state first). */
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
s32 soundActorStartOnFreeChannel(u32 sound, MapVector position);

/* Finds the waiting map record of group `id`, plays its sound (unless input is blocked) and advances it to state 7. */
void FUN_00245f70(s32 id)
{
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &g_mapIf->records[index];
        if (record->active &&
            (record->display.category == 0x25 || record->display.category == 0x28) &&
            record->state == 6 && record->groupView.id == id) {
            MapIfSoundView *details = (MapIfSoundView *)record;
            GameStateA *state = &g_gameState;
            MapVector position = details->position;
            position.y += 120.0f;
            if (state->inputBlocked == 0) {
                soundActorStartOnFreeChannel(0x010002ab, position);
            }
            details->unk2c = 0;
            record->state = 7;
            return;
        }
    }
}
}
