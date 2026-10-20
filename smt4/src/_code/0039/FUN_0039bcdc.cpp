#include "common.h"

extern "C" {

int timerStart(void *timer, int a, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x9ED];
    /* 0x9ED */ u8 unk9ED;
    /* 0x9EE */ u8 unk9EE[0xA];
    /* 0x9F8 */ u8 timer[1];
} Obj;

void FUN_0039bcdc(Obj *obj)
{
    obj->unk9ED = 1;
    timerStart(obj->timer, 6, 0);
}

} /* extern "C" */
