#include "common.h"

extern "C" {

int FUN_002bee58(void *block, int arg);
int memClear(void *ptr, int size);
int rt_memcpy(void *dst, u8 *src, int size);

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[0x23];
    /* 0x34 */ u8 block[0x8C];
    /* 0xC0 */ u8 text[0x80];
} Obj;

extern Obj *g_placeWin;

/* Starts a text entry: stores the UTF-16 string `text` (up to 0x80 bytes, ending at the first zero halfword) in the object. */
void FUN_0026374c(u8 *text)
{
    Obj *obj = g_placeWin;
    int length;

    obj->unk08 = 1;
    obj->unk10 = 1;
    FUN_002bee58(obj->block, 0);
    memClear(obj->text, 0x80);
    length = 0;
    do {
        if (text[length] == 0) break;
        if (text[length + 1] == 0) {
            length = length + 1;
            break;
        }
        length = length + 2;
    } while (length < 0x80);
    rt_memcpy(obj->text, text, length);
}

} /* extern "C" */
