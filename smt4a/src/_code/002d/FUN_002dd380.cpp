/* NON_MATCHING: The queue counter update and zero-kind state setup are scheduled differently. */
#include "shard/W8Match1_PositionRequests.h"
extern "C" {
extern PositionRequestPool* DAT_005821a0;
u32 FUN_003d4ed8(void);

// Initializes the first free positional request and increments the live request count.
void FUN_002dd380(u32 id, s32 kind, f32 x, f32 y, f32 z)
{
    for (s32 index = 0; index < 32; ++index) {
        PositionRequest* request = &DAT_005821a0->entries[index];
        if (request->active == 0) {
            request->active = 1;
            request->kind = kind;
            request->unk12 = 0;
            request->position[0] = x;
            request->position[1] = y;
            request->position[2] = z;
            request->id = id;
            if (kind != 0) {
                request->timer = 0;
                request->state = 0;
            } else {
                request->timer = FUN_003d4ed8();
                request->state = 1;
            }
            ++DAT_005821a0->count;
            return;
        }
    }
}
}
