#include "common.h"
#include "map/LmapMainGlobals.h"
#include "map/MapEffectReservation.h"

struct MapEffectRecord { f32 x, y, z; u32 id, first, second; };
extern "C" {
extern MapEffectRecord DAT_00447358[16];
extern const char DAT_004043b8[];
void FUN_00297a00();
void FUN_0027b65c(u32 context, s32 mode);
void mapSpawnActiveSlotEffects();
s32 gameFlagIsSet(u32 flag);

// Initialize active map effects and spawn the story-gated marker set on the designated map.
void mapInitializeStoryMarkerEffects(u32 context)
{
    FUN_00297a00();
    FUN_0027b65c(context, 0);
    mapSpawnActiveSlotEffects();
    LmapMainState *map = g_lmapMainState;
    if (gameFlagIsSet(0x261) && map->mapId == 101) {
        for (u32 i = 0; i < 16; ++i) {
            const MapEffectRecord &record = DAT_00447358[i];
            FUN_00263cb8(0, 0, reinterpret_cast<u32>(DAT_004043b8), 60, 39, -1, record.first & 0xff, record.second & 0xff,
                0, 0, 0, 0, 0, 0, 0, 0, record.id, 0, 0,
                record.x, record.y, record.z, 300.0f, 1000.0f, 300.0f, 0.0f);
        }
    }
}
}
