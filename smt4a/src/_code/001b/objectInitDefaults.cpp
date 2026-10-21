#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 unk0D[0x87];
    /* 0x94 */ u32 unk94;
    /* 0x98 */ u8 unk98[4];
    /* 0x9C */ u32 unk9C;
    /* 0xA0 */ u8 unkA0;
    /* 0xA1 */ u8 unkA1[3];
    /* 0xA4 */ u32 unkA4;
    /* 0xA8 */ u32 unkA8;
    /* 0xAC */ u8 unkAC[0x10];
    /* 0xBC */ u32 unkBC;
} Object;

/* Constructor: clears the fields, with -1 at 4 and 3 at 0xA0. */
void objectInitDefaults(Object *object)
{
    object->unk00 = 0;
    object->unk04 = 0xFFFFFFFF;
    object->unk0C = 0;
    object->unk94 = 0;
    object->unk9C = 0;
    object->unkA0 = 3;
    object->unkA4 = 0;
    object->unkA8 = 0;
    object->unkBC = 0;
}

} /* extern "C" */
