#include "shard/Shard003E.h"

extern "C" {

typedef struct StateAtC {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 state;
} StateAtC;

u8 stateAtCIs4(StateAtC *obj)
{
    return obj->state == 4;
}

} /* extern "C" */
