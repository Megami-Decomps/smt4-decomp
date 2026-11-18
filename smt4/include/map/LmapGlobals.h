/* The field map module's globals (Shin Megami Tensei IV). */
#ifndef SMT4_MAP_LMAPGLOBALS_H
#define SMT4_MAP_LMAPGLOBALS_H

#include "common.h"
#include "map/lmapMain.h"

extern "C" {

/* Navigation handle retained by the API; this implementation uses the active scene. */
LmapScenePose *lmapSceneGetObj(const u16 *handle);

extern LmapScene *g_lmapScene; /* 0x447e88 */

}

#endif
