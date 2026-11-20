#include "map/MapGimicGlobal.h"
extern "C" {
void mapGimicCreateModel(void);
/* Starts map gimmick processing with empty handles and zero progress. */
void mapGimicInitializeProcessing(u16 area, u16 subArea)
{
    g_mapGimic->step = 0;
    g_mapGimic->index = 0;
    g_mapGimic->area = area;
    g_mapGimic->subArea = subArea;
    g_mapGimic->loaded = 0;
    g_mapGimic->clones[0].available = 0;
    g_mapGimic->clones[1].available = 0;
    g_mapGimic->clones[1].slot = -1;
    g_mapGimic->clones[2].available = 0;
    g_mapGimic->clones[2].slot = -1;
    g_mapGimic->clones[3].available = 0;
    g_mapGimic->status = 0;
    g_mapGimic->clones[3].slot = -1;
    for (u32 index = 0; index < 10; ++index) {
        g_mapGimic->flags[index] = 0;
        g_mapGimic->handles[index] = -1;
    }
    mapGimicCreateModel();
}
}
