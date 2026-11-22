/* NON_MATCHING: only the final reset stores differ (retail sets 7 in r1 and the zero in r0 and stores state first).
 * IDENTICAL with the record's own fields (position as a SoundActorQueuePosition, `state = 7` before
 * `proximityTimer = 0`, as FUN_003659f4 orders them) only while `GameStateA *state = &g_gameState` stays a
 * single-use pointer (it pools g_gameState before 120.0f); without it 8 lines differ. */
#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"

struct MapIfSoundView {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ u16 unk2c;
    /* 0x2e */ u8 unk2e[0x22];
    /* 0x50 */ MapVector position;
};

extern "C" {
s32 soundActorStartOnFreeChannel(u32 sound, MapVector position);

/* Finds the waiting map record of group `id`, plays its sound (unless input is blocked) and advances it to state 7. */
void FUN_00245f70(s32 id)
{
    s32 index = 0;
    MapIfStateA *mapIf = g_mapIf.state;
    for (; index < 128; ++index) {
        MapIfRecord *record = &mapIf->records[index];
        if (record->active &&
            (record->category == 0x25 || record->category == 0x28) &&
            record->state == 6 && record->id == id) {
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
