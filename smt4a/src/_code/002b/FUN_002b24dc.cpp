#include "common.h"

extern "C" {

void uiSpriteSetKeyframe(u8 *member, s32 a, s32 b);

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x2DC];
    /* 0x2DC */ u8 member2DC[0x54];
    /* 0x330 */ u8 done;
} Holder;

/* Restarts the member at 0x2DC (mode 2) unless `done` is set. */
void FUN_002b24dc(Holder *object)
{
    if (object->done == 0) {
        uiSpriteSetKeyframe(object->member2DC, 2, 1);
        return;
    }
}

} /* extern "C" */
