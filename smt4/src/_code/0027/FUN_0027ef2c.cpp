#include "shard/W8Match1_PositionRequests.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
extern "C" {
extern PositionRequestPool* g_soundActorQueue;

// Initializes the first free positional request and increments the live request count.
void FUN_0027ef2c(u32 id, s32 kind, f32 x, f32 y, f32 z)
{
    for (s32 index = 0; index < 32; ++index) {
        PositionRequest* request = &g_soundActorQueue->entries[index];
        if (request->active == 0) {
            request->active = 1;
            request->kind = kind;
            request->unk12 = 0;
            request->position[0] = x;
            request->position[1] = y;
            request->position[2] = z;
            request->id = id;
            if (kind == 0) {
                SoundActorQueuePosition position = { x, y, z };
                request->timer = soundActorStartOnFreeChannel(id, position);
                request->state = 1;
            } else {
                request->timer = 0;
                request->state = 0;
            }
            ++g_soundActorQueue->count;
            return;
        }
    }
}
}
