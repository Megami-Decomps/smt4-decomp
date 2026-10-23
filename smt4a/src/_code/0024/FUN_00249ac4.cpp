/* NON_MATCHING: position conversion/evaluation order and special-placement constant scheduling differ; flag gates and loop instructions match. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern SoundActorQueue *DAT_005821a0;
const void *FUN_00314638(u32 index);
s32 FUN_00379858(void);
s32 gameFlagIsSet(s32 flag);
void FUN_002dd380(u32 soundId, s32 kind, f32 x, f32 y, f32 z);

// Queue matching ambient sound actors only while their required/forbidden game flags permit them.
void FUN_00249ac4(s32 map, s32 area)
{
    struct Placement {
        s8 map, area;
        s16 x, y, z;
        s32 sound;
        s16 requiredFlag, forbiddenFlag;
    };
    SoundActorQueue *queue = DAT_005821a0;
    queue->enabled = 1;
    queue->count = 0;
    s32 index = 0;
    if (FUN_00379858() > 0) {
        do {
            const Placement *placement = static_cast<const Placement *>(FUN_00314638(index));
            if (placement->map != -1 && placement->map == map && placement->area == area) {
                s16 forbidden = placement->forbiddenFlag;
                if ((placement->requiredFlag == 0 || gameFlagIsSet(placement->requiredFlag)) &&
                    (forbidden == 0 || !gameFlagIsSet(forbidden))) {
                    s32 sound = placement->sound;
                    FUN_002dd380(sound != 0 ? sound + 0x100030C : 0x100030C,
                                 sound != 0, placement->x, placement->y, placement->z);
                }
            }
            ++index;
        } while (index < FUN_00379858());
    }
    if (map != 10 || area != 5)
        return;
    FUN_002dd380(0x1000310, 1, 330.0f, -400.0f, 2650.0f);
    FUN_002dd380(0x1000310, 1, -1500.0f, -400.0f, 2750.0f);
    FUN_002dd380(0x100030F, 1, 1600.0f, -400.0f, 900.0f);
    FUN_002dd380(0x100030F, 1, -4700.0f, -400.0f, 1600.0f);
    FUN_002dd380(0x100030F, 1, -800.0f, 0.0f, -2100.0f);
}
}
