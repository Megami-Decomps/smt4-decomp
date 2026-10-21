#include "common.h"

extern "C" {

typedef struct MapState002df598 {
    /* 0x000 */ u8 unk000[0x2b4];
    /* 0x2b4 */ u32 camera;
} MapState002df598;

typedef struct MapGlobals002df598 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MapState002df598 *state;
} MapGlobals002df598;

void textFormatBuffer(u8 *buffer, const char *format, u32 map, u32 map2, u32 index);
u32 FUN_00263c1c(u8 *path);


extern MapGlobals002df598 DAT_004474f0; /* 0x4474f0 */

/* Loads the camera file of map `map`, variant `index`, into the map state. */
void mapCameraLoad(u32 map, u32 index)
{
    u8 path[64];

    textFormatBuffer(path, "map/m%03d/cam%03d_%02d.bccam", map, map, index);
    DAT_004474f0.state->camera = FUN_00263c1c(path);
}

} /* extern "C" */
