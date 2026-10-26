#include "common.h"
#include "camp/RenderCtx.h"
extern "C" {
extern RenderCtx *g_titleScene;
struct MapInterfaceWork { u8 unk00[0x5C]; void *resource; };
struct MapInterfaceGlobals { void *active; MapInterfaceWork *work; };
extern MapInterfaceGlobals g_mapIf;
/* Forward the active map interface resource to the title scene. */
void mapInterfaceForwardResource(void) { if (g_mapIf.active!=NULL) renderCtxSelectTexture(g_titleScene,reinterpret_cast<AsdTexture *>(g_mapIf.work->resource)); }
}
