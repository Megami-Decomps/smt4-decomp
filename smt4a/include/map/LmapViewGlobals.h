/* The field map camera view's globals (Apocalypse). */
#ifndef SMT4A_MAP_LMAPVIEWGLOBALS_H
#define SMT4A_MAP_LMAPVIEWGLOBALS_H

#include "map/LmapGlobals.h"

extern "C" {

extern LmapViewA *g_lmapView;        /* 0x5806a4 */
extern LmapViewHolderA g_lmapViewHolder; /* the camera module's globals; the word after is g_lmapView */

}

#endif
