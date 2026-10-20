#include "shard/Shard003F.h"

extern "C" {

extern void FUN_0021c118(s32 a, s32 b);
extern void soundChannelRequestIfEnabled(s32 a, s32 b, s32 c);

/* Switches the current id: stops the previous one (unless none) and starts `id`. */
void btlSwitchId4CE4(BtlStateB *state, s32 id)
{
    s32 current = state->unk4CE4;

    if (current != id) {
        if (current != -1) {
            FUN_0021c118(current, 0);
        }
        soundChannelRequestIfEnabled(id, 0, 10);
        state->unk4CE4 = id;
    }
}

} /* extern "C" */
