/* The field map main loop's state block global (Apocalypse). */
#ifndef SMT4A_MAP_LMAPMAINGLOBALS_H
#define SMT4A_MAP_LMAPMAINGLOBALS_H

#include "map/LmapGlobals.h"

extern "C" {

extern LmapMainStateA *g_lmapMainState; /* 0x580238 */

}

/* lmapMainStateSet's body, which callers in other units inline: switches the main loop's state and
 * clears its step and timer. */
static __inline void lmapMainStateSetInline(u32 value)
{
    LmapMainStateA *map = g_lmapMainState;
    if (map->state != value) {
        map->state = value;
        map->stateStep = 0;
        map->stateTime = 0;
    }
}

#endif
