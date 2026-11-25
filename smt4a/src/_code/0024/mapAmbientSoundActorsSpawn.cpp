/* NON_MATCHING: the position now passes as a three-float value; some load and argument scheduling still differs. */
#include "code/Code0031_Smt4a.h"
#include "gamedata/AmbientSoundPlacement.h"
#include "sound/AmbientSound.h"

extern "C" {
extern SoundActorQueue *g_soundActorQueue;
s32 dataTable45GetSection4Count(void);
s32 gameFlagIsSet(s32 flag);

/* Queues ambient sounds whose required and forbidden game flags allow them. */
void mapAmbientSoundActorsSpawn(s32 map, s32 area)
{
    SoundActorQueue *queue = g_soundActorQueue;
    queue->enabled = 1;
    queue->count = 0;
    s32 index = 0;
    if (dataTable45GetSection4Count() > 0) {
        do {
            const Table2dSection4Record *placement = dataTable45GetAmbientPlacement(index);
            if (placement->map != -1 && placement->map == map && placement->area == area) {
                s16 forbidden = placement->forbiddenFlag;
                if ((placement->requiredFlag == 0 || gameFlagIsSet(placement->requiredFlag)) &&
                    (forbidden == 0 || !gameFlagIsSet(forbidden))) {
                    s32 sound = placement->sound;
                    soundQueuePositionalRequest(sound != 0 ? sound + 0x100030C : 0x100030C,
                                 sound != 0, soundActorPosition(placement->x, placement->y, placement->z));
                }
            }
            ++index;
        } while (index < dataTable45GetSection4Count());
    }
    if (map != 10 || area != 5)
        return;
    soundQueuePositionalRequest(0x1000310, 1, soundActorPosition(330.0f, -400.0f, 2650.0f));
    soundQueuePositionalRequest(0x1000310, 1, soundActorPosition(-1500.0f, -400.0f, 2750.0f));
    soundQueuePositionalRequest(0x100030F, 1, soundActorPosition(1600.0f, -400.0f, 900.0f));
    soundQueuePositionalRequest(0x100030F, 1, soundActorPosition(-4700.0f, -400.0f, 1600.0f));
    soundQueuePositionalRequest(0x100030F, 1, soundActorPosition(-800.0f, 0.0f, -2100.0f));
}
} /* extern "C" */
