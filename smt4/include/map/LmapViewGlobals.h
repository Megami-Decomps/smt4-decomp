/* The field map camera view's globals (Shin Megami Tensei IV). */
#ifndef SMT4_MAP_LMAPVIEWGLOBALS_H
#define SMT4_MAP_LMAPVIEWGLOBALS_H

#include "map/MapCameraWork.h"

extern "C" {

extern LmapViewHolder g_lmapViewHolder; /* the camera module's globals; the word after is g_mapCamera */
extern LmapView *g_mapCamera;        /* 0x4474f4 */

}

#endif
