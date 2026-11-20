#include "common.h"

extern "C" {

int uiSpriteSetKeyframe(void *timer, int a, int b); // declcheck: local (the shared declaration does not compile here or changes this unit)

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x9ED];
    /* 0x9ED */ u8 unk9ED;
    /* 0x9EE */ u8 unk9EE[0xA];
    /* 0x9F8 */ u8 timer[1];
} Obj;

void objSetFlagAndStartTimer(Obj *obj)
{
    obj->unk9ED = 1;
    uiSpriteSetKeyframe(obj->timer, 6, 0);
}

} /* extern "C" */
