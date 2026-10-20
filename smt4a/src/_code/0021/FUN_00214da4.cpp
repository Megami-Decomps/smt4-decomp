#include "common.h"

extern "C" {

void FUN_001846d0(u8 *member, s32 flag);

typedef struct Object {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u8 unk0C[0x28];
    /* 0x34 */ u8 member34[1];
} Object;
extern Object *DAT_0057f578;

/* Sets the object's state to 3 and resets its member at 0x34. */
void FUN_00214da4(void)
{
    Object *object;

    object = DAT_0057f578;
    DAT_0057f578->state = 3;
    FUN_001846d0(object->member34, 1);
}

} /* extern "C" */
