/* Returns 0 if the object is in state 0x27, otherwise starts its transition (timerStart) and returns 1. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x0000 */ u8 unk0000[0x12B8];
    /* 0x12B8 */ u8 transition[0x1D90];
    /* 0x3048 */ s32 state;
} Object;

extern void timerStart(void *transition, s32 a, s32 b);

u8 FUN_00318c5c(Object *obj)
{
    if (obj->state != 0x27) {
        timerStart(obj->transition, 9, 0);
        return 1;
    }
    return 0;
}

}
