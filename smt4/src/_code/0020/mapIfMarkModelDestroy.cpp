#include "shard/W5_W5Match2_MapInterfaceWork.h"

extern "C" {

extern MapInterfaceWork *g_mapIf;
s32 asdMdlManagerMarkDestroy(u32 model);

/* Mark the map interface's model for destruction. */
void mapIfMarkModelDestroy(void)
{
    MapInterfaceModelBlock *block = &g_mapIf->modelBlock;
    asdMdlManagerMarkDestroy(block->model);
}

}
