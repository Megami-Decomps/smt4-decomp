#include "common.h"
#include "code/Code0021_Smt4a.h"

extern "C" {

void uiSpriteSelectAnim(u8 *member, s32 flag);

typedef struct Object {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u8 unk0C[0x28];
    /* 0x34 */ u8 member34[1];
} Object;
extern Object *g_placeWin;

/* Sets the object's state to 3 and resets its member at 0x34. */
void FUN_00214da4(void)
{
    Object *object;

    object = g_placeWin;
    g_placeWin->state = 3;
    uiSpriteSelectAnim(object->member34, 1);
}

} /* extern "C" */
