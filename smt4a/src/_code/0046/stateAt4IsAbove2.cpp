#include "shard/Shard0046.h"

extern "C" {

typedef struct StateAt4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
} StateAt4;

u8 stateAt4IsAbove2(StateAt4 *obj)
{
    if (obj->state <= 2) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
