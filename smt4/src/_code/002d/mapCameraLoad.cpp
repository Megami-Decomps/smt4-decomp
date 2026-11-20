#include "common.h"
#include <stdio.h>
#include "code/Code0038.h"

extern "C" {

typedef struct MapState002df598 {
    /* 0x000 */ u8 unk000[0x2b4];
    /* 0x2b4 */ u32 camera;
} MapState002df598;

typedef struct MapGlobals002df598 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MapState002df598 *state;
} MapGlobals002df598;



extern MapGlobals002df598 g_lmapViewHolder; /* 0x4474f0 */

/* Loads the camera file of map `map`, variant `index`, into the map state. */
void mapCameraLoad(u32 map, u32 index)
{
    u8 path[64];

    sprintf((char *)path, "map/m%03d/cam%03d_%02d.bccam", map, map, index);
    g_lmapViewHolder.state->camera = reinterpret_cast<u32>(asdCameraLoadFromFile(reinterpret_cast<const char *>(path)));
}

} /* extern "C" */
