#include "common.h"
#include "code/Code002c_Smt4a.h"

extern "C" {

void FUN_0022e774(void);
void FUN_00270104(void *object);
void screenSetContextHint(void *object, u32 a, u32 b);
void FUN_003343f0(s32 value);
void statusIconSetKind(void *object, s32 value);
u32 FUN_002cc9e0(void *object, u32 value);

typedef struct Object {
    /* 0x0000 */ u8 unk0000[0x3880];
    /* 0x3880 */ s32 state;
    /* 0x3884 */ u8 unk3884[0xC];
    /* 0x3890 */ u32 unk3890;
    /* 0x3894 */ u8 unk3894[0x1244];
    /* 0x4AD8 */ u32 unk4AD8;
} Object;

/* Resets the object after statusIconSetKind: sets the word at 0x4AD8 to 4 and then, for states 8..0xD, runs FUN_00270104; otherwise screenSetContextHint with FUN_002cc9e0's result. */
void FUN_002cc96c(Object *object)
{
    u32 value;

    statusIconSetKind(object, 0);
    FUN_0022e774();
    object->unk4AD8 = 4;
    FUN_003343f0(0);
    if (object->state - 8U <= 5U) {
        FUN_00270104(object);
        return;
    }
    value = FUN_002cc9e0(object, 0);
    screenSetContextHint(object, value, object->unk3890);
}

} /* extern "C" */
