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

void FUN_002be624(u8 *buffer, const char *format, u32 map, u32 map2, u32 index);
u32 FUN_00263c1c(u8 *path);

/* A 64-byte path buffer (8-byte aligned). */
typedef struct PathBuffer002df598 {
    u8 chars[56];
    u64 tail;
} PathBuffer002df598;

extern MapGlobals002df598 DAT_004474f0; /* 0x4474f0 */

/* Loads the camera file of map `map`, variant `index`, into the map state. */
void mapCameraLoad(u32 map, u32 index)
{
    PathBuffer002df598 path;

    FUN_002be624(path.chars, "map/m%03d/cam%03d_%02d.bccam", map, map, index);
    DAT_004474f0.state->camera = FUN_00263c1c(path.chars);
}

} /* extern "C" */
