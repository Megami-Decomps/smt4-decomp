#include "common.h"

struct MapEffectRecord { f32 x, y, z; u32 id, first, second; };
struct MapEffectState { u8 unk00[0x40]; u32 map; };
extern "C" {
extern MapEffectState *g_lmapMainState;
extern MapEffectRecord DAT_00447358[16];
extern const char DAT_004043b8[];
void FUN_00297a00();
void FUN_0027b65c(u32 context, s32 mode);
void mapSpawnActiveSlotEffects();
s32 gameFlagIsSet(u32 flag);
void FUN_00263cb8(u32 context, u32 mode, const char *name, u32 kind, u32 style, s32 color, u32 first, u32 second,
    u32 flags, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 id, u32 h, u32 i,
    f32 x, f32 y, f32 z, f32 width, f32 height, f32 depth, f32 heading);

// Initialize active map effects and spawn the story-gated marker set on the designated map.
void mapInitializeStoryMarkerEffects(u32 context)
{
    FUN_00297a00();
    FUN_0027b65c(context, 0);
    mapSpawnActiveSlotEffects();
    MapEffectState *map = g_lmapMainState;
    if (gameFlagIsSet(0x261) && map->map == 101) {
        for (u32 i = 0; i < 16; ++i) {
            const MapEffectRecord &record = DAT_00447358[i];
            FUN_00263cb8(0, 0, DAT_004043b8, 60, 39, -1, record.first & 0xff, record.second & 0xff,
                0, 0, 0, 0, 0, 0, 0, 0, record.id, 0, 0,
                record.x, record.y, record.z, 300.0f, 1000.0f, 300.0f, 0.0f);
        }
    }
}
}
