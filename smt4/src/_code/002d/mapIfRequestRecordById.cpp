#include "map/mapIf.h"
#include "shard/Shard0036.h"

extern "C" {
extern MapIfGlobals g_mapIf;

void mapIfRequestRecordById(s32 id)
{
    s32 index;
    MapIfState *state = g_mapIf.state;

    for (index = 0; index < 0x80; ++index) {
        if (state->records[index].active != 0 && state->records[index].groupView.id == id) {
            state->records[index].request.pending = 1;
            return;
        }
    }
}
}
