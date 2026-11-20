#include "common.h"

extern "C" {

int effectColorOverrideBeginFadeToGray(void);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x3028];
    /* 0x3028 */ u32 flags;
} Obj;

void btlEffectBeginEncounterFade(Obj *obj)
{
    if ((obj->flags & 4) != 0) {
        effectColorOverrideBeginFadeToGray();
        obj->flags = (obj->flags & 0xfffffffb) | 8;
    }
}

} /* extern "C" */
