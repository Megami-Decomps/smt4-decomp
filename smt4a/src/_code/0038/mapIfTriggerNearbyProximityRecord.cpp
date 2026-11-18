#include "map/MapIfGlobals.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

// Activate the first nearby record of the proximity-trigger category.
void mapIfTriggerNearbyProximityRecord(MapVector position)
{
    MapIfStateA *state = g_mapIf.state;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &state->records[index];
        if (record->active != 0 && record->category == 34) {
            if (distSpatial(position, record->position) < 10.0f) {
                /* The sound plays at the record's position, raised to above the player. */
                SoundActorQueuePosition soundPosition = {record->position.x, record->position.y, record->position.z};
                soundPosition.y = position.y + 80.0f;
                soundActorStartOnFreeChannel(0x10002a9, soundPosition);
                record->state = 7;
                record->counter = 0;
                return;
            }
        }
    }
}
}
