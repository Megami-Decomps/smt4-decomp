#include "common.h"

struct IndexedSlotState {
    s16 indices[16]; // 0x00
    u8 active[16]; // 0x20
};

extern "C" {
// Clear occupied indices and their associated active flags.
void indexedSlotsClear(IndexedSlotState *slots)
{
    for (s32 index = 0; index < 16; ++index) {
        if (slots->indices[index] != -1) {
            slots->indices[index] = -1;
            slots->active[index] = 0;
        }
    }
}
}
