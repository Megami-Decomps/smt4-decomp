/* NON_MATCHING: transform-clear loop is not fully unrolled and vector/default stores use different VFP/register allocation. */
#include "map/mapIf.h"

extern "C" {
extern MapIfGlobalsA g_mapIf;

void FUN_002747dc()
{
    MapIfStateA *state = g_mapIf.state;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord &record = state->records[index];
        record.active = 0;
        record.type = 0;
        record.transition.restart = 0;
        record.initialization.frame = 0;
        record.reset.counters[0] = 0;
        record.reset.counters[1] = 0;
        record.reset.counters[2] = 0;
        record.reset.limits[0] = 700.0f;
        record.reset.limits[1] = 300.0f;
        record.reset.limits[2] = 2500.0f;
        record.reset.flags[0] = 0;
        record.initialization.first = 0;
        record.reset.handle = 0;
        record.display.category = 0;
        record.groupView.id = -1;
        record.initialization.second = 0;
        record.reset.progress = 0.0f;
        record.reset.size[0] = 25.0f;
        record.reset.size[1] = 25.0f;
        record.reset.target = -1;
        record.reset.offset = 0.0f;
        record.reset.flags[1] = 0;
        record.reset.start[0] = 1150.0f;
        record.reset.flags[2] = 0;
        record.reset.timer = 0;
        record.reset.heading = 0.0f;
        record.reset.start[1] = 150.0f;
        record.reset.start[2] = 0.0f;
        record.reset.hidden = 0;
        record.reset.angle = 0.0f;
        for (s32 component = 0; component < 12; ++component) {
            record.reset.transform[component] = 0.0f;
        }
        record.reset.values[0] = 0;
        record.reset.values[1] = 0;
        record.reset.values[2] = 0;
        for (s32 component = 0; component < 3; ++component) {
            record.reset.current[component] = record.reset.start[component];
        }
    }
    MapIfRecord &primary = state->primary;
    primary.active = 0;
    primary.reset.flags[0] = 0;
    primary.groupView.id = -1;
    primary.reset.start[0] = 0.0f;
    primary.initialization.first = 0;
    primary.reset.handle = 0;
    primary.reset.start[1] = 0.0f;
    primary.reset.start[2] = 0.0f;
    primary.initialization.second = 0;
    primary.display.category = 0;
    primary.reset.progress = 0.0f;
    primary.reset.size[0] = 50.0f;
    primary.reset.size[1] = 50.0f;
    primary.reset.target = -1;
    primary.reset.flags[1] = 0;
    primary.reset.angle = 0.0f;
    for (s32 component = 0; component < 3; ++component) {
        primary.reset.current[component] = primary.reset.start[component];
    }
}
}
