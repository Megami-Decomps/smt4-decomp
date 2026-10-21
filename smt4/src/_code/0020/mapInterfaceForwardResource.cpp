#include "common.h"
extern "C" {
struct MapInterfaceWork { u8 unk00[0x5C]; void *resource; };
struct MapInterfaceGlobals { void *active; MapInterfaceWork *work; };
extern MapInterfaceGlobals g_mapIf;
extern void *g_titleScene;
void FUN_002c1b64(void *scene,void *resource);
/* Forward the active map interface resource to the title scene. */
void mapInterfaceForwardResource(void) { if (g_mapIf.active!=NULL) FUN_002c1b64(g_titleScene,g_mapIf.work->resource); }
}
