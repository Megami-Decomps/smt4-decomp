#include "map/lmapMain.h"

extern "C" {
extern LmapMainState *g_lmapMainState;
extern s8 DAT_0049f08c[80];
void sceneAttachLightChild(void *, s32);
void FUN_00265b78(s32, s32);

void lmapApplyLightVisibilityGrid(const s8 *grid)
{
    // The light collection and per-child state lie beyond the shared recovered map-state prefix.
    struct LightCollection { u32 unk00; s32 count; };
    struct LightState { u8 enabled; u8 suffix[0x87]; };
    struct MapLightView {
        u8 prefix[0xA9C];
        LightCollection *collection;
        u8 unkAA0[0x90];
        LightState children[1];
    };
    MapLightView *work = reinterpret_cast<MapLightView *>(g_lmapMainState);
    s32 count = 0;
    for (s32 column = 0; column < 8; ++column) {
        for (s32 row = 0; row < 10; ++row) {
            s8 visible = grid[row * 8 + column];
            if (visible != 9)
                DAT_0049f08c[count++] = visible;
        }
    }
    for (s32 i = 0; i < work->collection->count; ++i) {
        if (DAT_0049f08c[i] == 1) {
            sceneAttachLightChild(work->collection, i);
            MapLightView *current = reinterpret_cast<MapLightView *>(g_lmapMainState);
            if (current && !current->children[i].enabled)
                current->children[i].enabled = 1;
            FUN_00265b78(i, 1);
        } else {
            MapLightView *current = reinterpret_cast<MapLightView *>(g_lmapMainState);
            if (current && current->children[i].enabled)
                current->children[i].enabled = 0;
            FUN_00265b78(i, 0);
        }
    }
}
}
