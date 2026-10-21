#include "common.h"
extern "C" {
struct LocalMapScene { u32 unk00; u32 state; };
extern void *g_mapMain;
extern LocalMapScene *g_lmapScene;
u32 lmapSceneGetUnk0(void);
void FUN_002d5374(u32 value);
void FUN_002712dc(void);
/* Advance local-map scene twenty-eight and notify the map transition helpers. */
void mapAdvanceSceneTwentyEight(void) { if (g_mapMain==NULL) return; if (lmapSceneGetUnk0()!=28) return; g_lmapScene->state=10; FUN_002d5374(10); FUN_002712dc(); }
}
