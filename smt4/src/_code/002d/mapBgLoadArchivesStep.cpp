#include <stdio.h>
#include "map/mapBg.h"
#include "map/mapDepart.h"
#include "event/3dEvent/3dEventEffect.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"

extern "C" {
extern MapDepartWork *g_mapDepartWork;

// Advance asynchronous loading of the optional sky and the destination map's model archive.
u32 mapBgLoadArchivesStep()
{
    char path[128];
    switch (g_mapDepartWork->state) {
    case 0:
        return 1;
    case 1:
        break;
    case 2:
        if (g_mapDepartWork->skyId <= 0) {
            g_mapDepartWork->state = 10;
        } else {
            sprintf(path, "map/sky/sky_%02d.bam", g_mapDepartWork->skyId);
            asdLoadFileAsyncNoCallback(path, &g_mapDepartWork->dataB, 3, 0x80);
            ++g_mapDepartWork->state;
        }
        break;
    case 3:
        if (g_mapDepartWork->dataB != NULL) {
            g_mapDepartWork->sizeA = 4;
            g_mapDepartWork->state = 10;
        }
        break;
    case 10:
        sprintf(path, "map/m%03d/m%03d_%02d.bam", g_mapDepartWork->loadMapId, g_mapDepartWork->loadMapId, g_mapDepartWork->loadAreaId);
        asdLoadFileAsyncNoCallback(path, &g_mapDepartWork->dataA, 3, 0x80);
        ++g_mapDepartWork->state;
        break;
    case 11:
        if (g_mapDepartWork->dataA != NULL) {
            g_mapDepartWork->sizeA = 4;
            g_mapDepartWork->state = 99;
        }
        break;
    case 99:
        return 1;
    }
    return 0;
}
}
