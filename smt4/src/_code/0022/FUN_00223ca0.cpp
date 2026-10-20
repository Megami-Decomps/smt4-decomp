#include "common.h"

extern "C" {

extern int FUN_0029efa8(void *block);
extern int FUN_0029efc0(void *block);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x660];
    /* 0x660 */ u8 block[0x12A];
    /* 0x78A */ u16 values[1];
} Obj;

extern Obj *g_uiQuest;

u16 FUN_00223ca0(void)
{
    Obj *obj = g_uiQuest;
    int a = FUN_0029efc0(obj->block);
    int b = FUN_0029efa8(obj->block);

    return obj->values[b + a];
}

} /* extern "C" */
