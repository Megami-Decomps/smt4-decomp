#include "common.h"

extern "C" {

typedef struct Marker {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 handle;
} Marker;

typedef struct LmapScene {
    /* 0x000 */ u8 unk000[0x180];
    /* 0x180 */ Marker *marker;
} LmapScene;

extern LmapScene *g_lmapScene;

extern void FUN_003fd7c0(u32 handle, u32 id, s32 mode, f32 delay);

/* Starts `id` on the lmap scene's marker (no delay), if it has one. */
void lmapSceneMarkerStart(u32 id)
{
    if (g_lmapScene->marker != NULL) {
        FUN_003fd7c0(g_lmapScene->marker->handle, id, 2, 0.0f);
    }
}

} /* extern "C" */
