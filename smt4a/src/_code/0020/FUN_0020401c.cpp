#include "common.h"

extern "C" {

void uiSpriteSelectAnim(u8 *member, s32 flag);
void sysMemClear(u8 *block, s32 size);
void rt_memcpy(u8 *dest, const u8 *source, s32 size);

typedef struct Object {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u8 flag;
    /* 0x11 */ u8 unk11[0x23];
    /* 0x34 */ u8 member34[0x8C];
    /* 0xC0 */ u8 name[0x80];
} Object;
extern Object *g_placeWin;

/* Resets the object and stores a copy of the 16-bit-character string `name` (up to 0x80 bytes, ending at its first zero character) in it. */
void FUN_0020401c(const u8 *name)
{
    Object *object;
    s32 length;

    object = g_placeWin;
    g_placeWin->state = 1;
    object->flag = 1;
    uiSpriteSelectAnim(object->member34, 0);
    sysMemClear(object->name, 0x80);
    length = 0;
    do {
        if (name[length] == 0) {
            break;
        }
        if (name[length + 1] == 0) {
            length = length + 1;
            break;
        }
        length = length + 2;
    } while (length < 0x80);
    rt_memcpy(object->name, name, length);
}

} /* extern "C" */
