#include "common.h"
#include "shard/GameGlobals.h"

// The ID buffer starts two bytes past a word boundary.
__packed struct StatusIdBlock {
    u32 words[4];
};
struct StatusIdState {
    u8 unk000[0x4a2];
    StatusIdBlock ids; // 0x4a2
    u8 unk4b2[0x86];
    u8 enabled; // 0x538
};

extern "C" {
extern StatusIdState *g_statusDown;
void *rt_memcpy(void *, const void *, u32);

// Replace up to eight status-screen IDs, or disable the list for a negative count.
void FUN_0026a978(const u32 *ids, s32 count)
{
    if (count <= 8) {
        StatusIdState *state = g_statusDown;
        for (s32 i = 0; i < 4; i++) {
            state->ids.words[i] = 0;
        }
        if (count >= 0) {
            state->enabled = 1;
            rt_memcpy(&state->ids, ids, count * sizeof(u16));
        } else {
            state->enabled = 0;
        }
    }
}
}
