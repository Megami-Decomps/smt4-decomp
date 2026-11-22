/* NON_MATCHING: retail addresses the record from state + index * 0x194 (fields at +0x1d0.., a +0x100 base for the
 * byte and halfword fields) and reloads unk17 after clearing it; the build folds the record pointer and threads the
 * jump, so the sound-call branches are laid out and cross-jumped differently. */
#include "map/MapIfGlobals.h"
#include "map/mapDepart.h"
#include "shard/Shard0036.h"
#include "shard/S1Mover.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

static __inline SoundActorQueuePosition soundPosition(const MapVector &value)
{
    SoundActorQueuePosition position = { value.x, value.y, value.z };
    return position;
}

extern "C" {
MapVector FUN_003e0e60(const MapVector *value, f32 scale);

u32 mapIfActivateRecord(u8 enabled, s32 index)
{
    MapIfState *state = g_mapIf.state;
    state->unk17 = enabled;
    MapIfRecord *record = &g_mapIf.state->records[index];
    if (index != -1 && record->active && g_mapCamera->contextMode != record->destination)
        state->unk17 = 0;
    if (state->unk17 != 0) {
        if (index == -1)
            return 0;
        if (!record->active || record->state != 6)
            return 1;
        if (record->category >= 0x22) {
            record->state = 7;
            if (g_gameState.inputBlocked == 0)
                soundActorStartOnFreeChannel(0x10001ff, soundPosition(FUN_003e0e60(&record->start, 1.0f / 3.0f)));
        } else if (record->destination == -1) {
            record->state = 9;
            soundActorStartOnFreeChannel(0x10001ff, soundPosition(record->start));
        } else if (record->destination == -2) {
            record->state = 11;
            soundActorStartOnFreeChannel(0x10001ff, soundPosition(record->start));
        } else if (record->destination == -3) {
            record->state = 13;
            soundActorStartOnFreeChannel(0x10001ff, soundPosition(record->start));
        } else if (record->values[2] == 0) {
            record->state = 15;
            if (g_gameState.inputBlocked == 0)
                soundActorStartOnFreeChannel(0x10001ff, soundPosition(record->start));
        } else {
            record->state = 7;
            if (!(g_gameState.inputBlocked != 0 && g_mapCamera->mode == 0)) {
                if (g_gameState.mapId >= 100)
                    soundActorStartOnFreeChannel(0x10001ff, soundPosition(FUN_003e0e60(&record->start, 1.0f / 3.0f)));
                else
                    soundActorStartOnFreeChannel(0x10001ff, soundPosition(record->start));
            }
        }
        record->proximityTimer = 0;
        return 1;
    }
    for (s32 slot = 0; slot < 128; ++slot) {
        if (!state->records[slot].active)
            continue;
        s32 category = state->records[slot].category;
        if (category != 0x1d && category != 0x26 &&
            category != 0x1e && category != 0x1f && category != 0x25 &&
            (state->records[slot].state == 8 || state->records[slot].state == 10 || state->records[slot].state == 12 ||
             state->records[slot].state == 14 || state->records[slot].state == 16))
            state->records[slot].state = 6;
    }
    return 1;
}
}
