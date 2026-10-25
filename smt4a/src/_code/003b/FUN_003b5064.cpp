/* NON_MATCHING: default-key constants now live in named locals (saved registers r5-r7, stm of the selection) and the saved-register set matches; retail shares one flags store between the found and not-found exits without re-testing the entry, and numbers the mode/-1 scratch registers r1/r2. */
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
    case 0: {
        s32 id = 1;
        s32 kind = 2;
        s32 counter = 0;
        g_mapSelection.id = id;
        g_mapSelection.kind = kind;
        g_mapSelection.counter = counter;
        const Table23Record *found = NULL;
        for (s32 i = 0; i < dataTable23Type1CountWithAoc(); ++i) {
            const Table23Record *entry = dataTableGetRecord23(i);
            if (entry->key.category == id && entry->key.subtype == kind && entry->key.variant == counter) {
                found = entry;
                break;
            }
        }
        g_mapSelection.flags = found != NULL ? found->data[3] : -1;
        return;
    }
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
