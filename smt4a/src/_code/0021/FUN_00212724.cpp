#include "common.h"

extern "C" {

void uiSpriteSetImageKeyframe(u8 *member, s32 a, s32 b);

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x1A08];
    /* 0x1A08 */ u8 member1A08[0x118];
    /* 0x1B20 */ u8 state;
} Holder;

extern Holder *g_camp;

/* Unless the state is already 3 or 4, runs uiSpriteSetImageKeyframe(member, 0x18, 0) and sets the state to 3. */
void FUN_00212724(void)
{
    Holder *object = g_camp;
    if (object == NULL) {
        return;
    }
    u8 state;

    state = object->state;
    if (state != 4 && state != 3) {
        uiSpriteSetImageKeyframe(object->member1A08, 0x18, 0);
        object->state = 3;
    }
}

} /* extern "C" */
