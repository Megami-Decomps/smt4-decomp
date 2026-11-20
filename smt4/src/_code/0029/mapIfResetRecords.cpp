/* NON_MATCHING: transform-clear loop unrolling, float triple stores and primary-position copy formation differ. */
#include "map/MapIfGlobals.h"

extern "C" {

void mapIfResetRecords()
{
    MapIfState *state = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord &record = state->records[i];
        record.active = 0;
        record.state = 0;
        record.restart = 0;
        record.frame = 0;
        record.counter = 0;
        record.counter2A = 0;
        record.proximityTimer = 0;
        record.limits[0] = 700.0f;
        record.limits[1] = 300.0f;
        record.limits[2] = 2500.0f;
        record.flag40 = 0;
        record.first = 0;
        record.unk190 = 0;
        record.category = 0;
        record.id = -1;
        record.second = 0;
        record.progress = 0.0f;
        record.size[0] = 25.0f;
        record.size[1] = 25.0f;
        record.target = -1;
        record.offset = 0.0f;
        record.pending = 0;
        record.start[0] = 1150.0f;
        record.flag42 = 0;
        record.timer = 0;
        record.heading = 0.0f;
        record.start[1] = 150.0f;
        record.start[2] = 0.0f;
        record.hidden = 0;
        record.angle = 0.0f;
        for (s32 j = 0; j < 12; ++j) {
            record.transform[j] = 0.0f;
        }
        record.values[0] = 0;
        record.values[1] = 0;
        record.values[2] = 0;
        for (s32 j = 0; j < 3; ++j) {
            record.current[j] = record.start[j];
        }
    }
    MapIfRecord &primary = state->primary;
    primary.active = 0;
    primary.flag40 = 0;
    primary.id = -1;
    primary.start[0] = 0.0f;
    primary.first = 0;
    primary.unk190 = 0;
    primary.start[1] = 0.0f;
    primary.start[2] = 0.0f;
    primary.second = 0;
    primary.category = 0;
    primary.progress = 0.0f;
    primary.size[0] = 50.0f;
    primary.size[1] = 50.0f;
    primary.target = -1;
    primary.pending = 0;
    primary.angle = 0.0f;
    for (s32 j = 0; j < 3; ++j) {
        primary.current[j] = primary.start[j];
    }
}
}
