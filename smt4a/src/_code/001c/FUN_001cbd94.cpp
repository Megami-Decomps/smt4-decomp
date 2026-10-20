#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06[0x72];
    /* 0x78 */ u8 unk78;
    /* 0x79 */ u8 unk79[3];
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ u8 unk80;
} Object;

/* Resets the object's state bytes and sets the byte at 5. */
void FUN_001cbd94(Object *object)
{
    object->unk80 = 0;
    object->unk78 = 0;
    object->unk7C = 0;
    object->unk05 = 1;
}

} /* extern "C" */
