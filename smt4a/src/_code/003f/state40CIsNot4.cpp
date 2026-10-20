#include "shard/Shard003F.h"

extern "C" {

typedef struct State40C {
    /* 0x000 */ u8 unk000[0x40C];
    /* 0x40C */ s32 state;
} State40C;

u8 state40CIsNot4(State40C *obj)
{
    if (obj->state == 4) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
