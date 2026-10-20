#include "shard/Shard004D.h"

extern "C" {

typedef struct Size40 {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 width;
    /* 0x44 */ u32 height;
} Size40;

void size40Set(Size40 *obj, u32 width, u32 height)
{
    obj->width = width;
    obj->height = height;
}

} /* extern "C" */
