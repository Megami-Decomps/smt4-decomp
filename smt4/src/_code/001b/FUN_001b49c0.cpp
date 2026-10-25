/* NON_MATCHING: queue initialization scheduling, positional conversion core registers and fixed-placement float loads differ. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern SoundActorQueue *DAT_00448c20;
const void *aocDataTable2dGetEntryKind4(u32 index);
s32 FUN_002f4814(void);
void FUN_0027ef2c(u32 soundId, s32 kind, f32 x, f32 y, f32 z);

// Queue ambient sound actors for this map and the extra fixed placements in its special area.
void FUN_001b49c0(s32 map, s32 area)
{
    struct Placement {
        s8 map, area;
        s16 x, y, z;
        s32 sound;
    };
    SoundActorQueue *queue = DAT_00448c20;
    queue->enabled = 1;
    queue->count = 0;
    s32 index = 0;
    if (FUN_002f4814() > 0) {
        do {
            const Placement *placement = static_cast<const Placement *>(aocDataTable2dGetEntryKind4(index));
            if (placement->map != -1 && placement->map == map && placement->area == area) {
                SoundActorQueuePosition position = {placement->x, placement->y, placement->z};
                s32 sound = placement->sound;
                FUN_0027ef2c(sound != 0 ? sound + 0x1000260 : 0x1000260,
                             sound != 0, position.x, position.y, position.z);
            }
            ++index;
        } while (index < FUN_002f4814());
    }
    if (map != 10 || area != 5)
        return;
    FUN_0027ef2c(0x1000264, 1, 330.0f, -400.0f, 2650.0f);
    FUN_0027ef2c(0x1000264, 1, -1500.0f, -400.0f, 2750.0f);
    FUN_0027ef2c(0x1000263, 1, 1600.0f, -400.0f, 900.0f);
    FUN_0027ef2c(0x1000263, 1, -4700.0f, -400.0f, 1600.0f);
    FUN_0027ef2c(0x1000263, 1, -800.0f, 0.0f, -2100.0f);
}
}
