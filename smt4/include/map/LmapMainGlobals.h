/* The field map main loop's state block global (Shin Megami Tensei IV). */
#ifndef SMT4_MAP_LMAPMAINGLOBALS_H
#define SMT4_MAP_LMAPMAINGLOBALS_H

#include "map/LmapGlobals.h"

extern "C" {

extern LmapMainState *g_lmapMainState; /* 0x447060 */

}

/* lmapMainStateSet's body, which the map setup inlines (FUN_001d2c14; the Apocalypse twin
 * FUN_00272970 shows the same stm of state and step): a change of state clears its step and timer. */
static __inline void lmapMainStateSetInline(u32 value)
{
    LmapMainState *map = g_lmapMainState;
    if (map->state != value) {
        map->state = value;
        map->stateStep = 0;
        map->stateTime = 0;
    }
}

#endif
