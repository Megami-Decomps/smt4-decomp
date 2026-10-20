/* Returns the base offset of the data block for the object's type (0-2), adjusted by its mode (0: +1500, 1: +10000). */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 mode;
    /* 0x03 */ u8 type;
} Object;

extern s32 FUN_0015e8ec(s32 offset);

s32 FUN_0015e010(Object *obj)
{
    s32 offset = 0xCD78;

    switch (obj->type) {
    case 0:
        offset = 0xDF0C;
        break;
    case 1:
        offset = 0xD930;
        break;
    case 2:
        offset = FUN_0015e8ec(offset) != 0 ? 0x30BB0 : 0x37140;
        break;
    }
    switch (obj->mode) {
    case 0:
        offset += 1500;
        break;
    case 1:
        offset += 10000;
        break;
    }
    return offset;
}

}
