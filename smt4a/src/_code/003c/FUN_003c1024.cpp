#include "common.h"

struct LmapSceneLinks {
    /* 0x00 */ u8 unk00[0x1a8];
    /* 0x1a8 */ void * links;
};

extern "C" {

extern LmapSceneLinks *g_lmapScene;

s32 linkHolderCheckFirst(void *links);

/* Reports whether the map scene's link holder has a first link. */
u32 FUN_003c1024(void)
{
    return linkHolderCheckFirst(g_lmapScene->links) != 0;
}

} /* extern "C" */
