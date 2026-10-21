/* NON_MATCHING: typed record access preadjusts the pool base; retail retains the state base and uses full member offsets. */
#include "map/mapIf.h"
#include "shard/Shard0036.h"

extern "C" {
extern MapIfGlobals g_mapIf;

void FUN_002dfe08(s32 id)
{
    Rec194 *records = mapIfGetRecords(g_mapIf.state);
    for (s32 index = 0; index < 0x80; ++index) {
        if (records[index].active != 0 && records[index].groupView.id == id) {
            records[index].request.pending = 1;
            return;
        }
    }
}
}
