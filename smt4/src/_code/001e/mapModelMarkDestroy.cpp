#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern ModelRequestWork *g_mapModelWork;
s32 asdMdlManagerMarkDestroy(u32 model);

/* Mark the active model for destruction if one is present. */
void mapModelMarkDestroy(void)
{
    u32 model = g_mapModelWork->model;
    if (model != 0) {
        asdMdlManagerMarkDestroy(model);
    }
}

}
