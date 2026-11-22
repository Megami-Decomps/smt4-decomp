/* NON_MATCHING: 51 lines. The records' loop matches retail's copy of the start position (a MapVector
 * assignment: vstmia with x and y forwarded, z reloaded) and its unrolled transform clear; retail still pairs the
 * limits[1..2] and category/id stores (vstmia, stm), keeps 101 in r4, and copies the primary's position through
 * core registers (ldm of x and y, z forwarded with vmov) where this build forwards all three zeros. */
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
        record.start.x = 1150.0f;
        record.flag42 = 0;
        record.timer = 0;
        record.heading = 0.0f;
        record.start.y = 150.0f;
        record.start.z = 0.0f;
        record.hidden = 0;
        record.angle = 0.0f;
        record.transform[0] = 0.0f;
        record.transform[1] = 0.0f;
        record.transform[2] = 0.0f;
        record.transform[3] = 0.0f;
        record.transform[4] = 0.0f;
        record.transform[5] = 0.0f;
        record.transform[6] = 0.0f;
        record.transform[7] = 0.0f;
        record.transform[8] = 0.0f;
        record.transform[9] = 0.0f;
        record.transform[10] = 0.0f;
        record.transform[11] = 0.0f;
        record.values[0] = 0;
        record.values[1] = 0;
        record.values[2] = 0;
        record.current = record.start;
    }
    MapIfRecord &primary = state->primary;
    primary.active = 0;
    primary.flag40 = 0;
    primary.id = -1;
    primary.start.x = 0.0f;
    primary.first = 0;
    primary.unk190 = 0;
    primary.start.y = 0.0f;
    primary.start.z = 0.0f;
    primary.second = 0;
    primary.category = 0;
    primary.progress = 0.0f;
    primary.size[0] = 50.0f;
    primary.size[1] = 50.0f;
    primary.target = -1;
    primary.pending = 0;
    primary.angle = 0.0f;
    primary.current.x = primary.start.x;
    primary.current.y = primary.start.y;
    primary.current.z = primary.start.z;
}
}
