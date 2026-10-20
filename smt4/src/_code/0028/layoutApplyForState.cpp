#include "common.h"

extern "C" {

typedef struct Object002880a8 {
    /* 0x000 */ u8 unk000[0x528];
    /* 0x528 */ u32 state;
    /* 0x52c */ u32 handle;
    /* 0x530 */ u8 args[0xc4];
    /* 0x5f4 */ u8 kind;           /* the layout kind currently applied: 0, 3 or 4 */
    /* 0x5f5 */ u8 unk5f5[0x83];
    /* 0x678 */ u8 setA[0x40];
    /* 0x6b8 */ u8 setB[0x40];
    /* 0x6f8 */ u8 unk6f8[0xa94];
    /* 0x118c */ u8 target[1];
} Object002880a8;

void FUN_002bbb74(u32 handle, void *target);
void FUN_002bbbc8(Object002880a8 *object, void *set, s32 zero, void *args);

/* Applies the layout the object's state asks for (3 for states 0/1, 4 for state 2, otherwise none), if it changed. */
void layoutApplyForState(Object002880a8 *object)
{
    void *set = NULL;
    u8 kind;

    switch (object->state) {
    case 0:
    case 1:
        kind = 3;
        set = object->setA;
        break;
    case 2:
        kind = 4;
        set = object->setB;
        break;
    default:
        kind = 0;
        break;
    }
    if (object->kind != kind) {
        FUN_002bbbc8(object, set, 0, object->args);
        FUN_002bbb74(object->handle, object->target);
        object->kind = kind;
    }
}

} /* extern "C" */
