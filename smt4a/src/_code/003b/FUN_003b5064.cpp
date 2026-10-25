/* NON_MATCHING: default-key constants are immediate compares rather than saved registers, and shared exit folding differs. */
#include "map/MapSelection.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match2_AocTable23.h"
#include "gamedata/DataTable.h"

extern "C" {
Table23Record *dataTableGetRecord23(s32 index);
s32 dataTable23Type1CountWithAoc(void);

void FUN_003b5064(void)
{
    FlagWorkBanks *saved = gameFlagsGetBlock();
    switch (saved->resumePoint.mode) {
    case 0:
        g_mapSelection.id = 1;
        g_mapSelection.kind = 2;
        g_mapSelection.counter = 0;
        for (s32 i = 0; i < dataTable23Type1CountWithAoc(); ++i) {
            const Table23Record *entry = dataTableGetRecord23(i);
            if (entry->key.category == 1 && entry->key.subtype == 2 && entry->key.variant == 0) {
                g_mapSelection.flags = entry->data[3];
                return;
            }
        }
        g_mapSelection.flags = -1;
        return;
    case 1: {
        g_mapSelection.id = saved->resumePoint.mapId;
        g_mapSelection.kind = saved->resumePoint.areaId;
        g_mapSelection.counter = -1;
        g_mapSelection.flags = saved->resumePointObject.objectId;
        g_mapSelection.values[0] = saved->resumePoint.position.x;
        g_mapSelection.values[1] = saved->resumePoint.position.y;
        g_mapSelection.values[2] = saved->resumePoint.position.z;
        g_mapSelection.values[3] = saved->resumePoint.heading;
        union { u32 bits; f32 value; } cameraHeading;
        cameraHeading.bits = saved->resumePoint.viewValue;
        g_mapSelection.values[4] = cameraHeading.value;
        return;
    }
    case 2:
        g_mapSelection.id = saved->resumePoint.mapId;
        g_mapSelection.kind = saved->resumePoint.areaId;
        g_mapSelection.counter = -1;
        g_mapSelection.flags = saved->resumePointObject.objectId;
        g_mapSelection.values[0] = saved->resumePoint.position.x;
        g_mapSelection.values[1] = saved->resumePoint.position.y;
        g_mapSelection.values[2] = saved->resumePoint.position.z;
        return;
    case 3:
        g_mapSelection.id = saved->resumePoint.mapId;
        g_mapSelection.kind = saved->resumePoint.areaId;
        g_mapSelection.flags = -1;
        return;
    }
}
}
