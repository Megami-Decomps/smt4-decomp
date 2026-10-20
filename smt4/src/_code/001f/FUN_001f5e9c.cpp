#include "common.h"

extern "C" {

int timerStart(void *timer, int a, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x1C4];
    /* 0x1C4 */ u8 timer[0x54];
    /* 0x218 */ u8 timerRunning;
} Obj;

void FUN_001f5e9c(Obj *obj)
{
    if (obj->timerRunning == 0) {
        timerStart(obj->timer, 2, 1);
    }
}

} /* extern "C" */
