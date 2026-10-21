/* NON_MATCHING: armcc decomposes the large model-field offset differently from retail. */
#include "shard/W5_W5Match2_MapInterfaceWork.h"

extern "C" {

extern MapInterfaceWork *g_mapIf;
s32 asdMdlManagerMarkDestroy(u32 model);

/* Mark the map interface's model for destruction. */
void mapIfMarkModelDestroy(void)
{
    asdMdlManagerMarkDestroy(g_mapIf->model);
}

}
