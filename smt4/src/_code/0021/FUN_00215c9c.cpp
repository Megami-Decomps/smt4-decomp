#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 state;
} Obj;

extern Obj *g_uiQuest;

u8 FUN_00215c9c(void)
{
    return g_uiQuest->state == 0;
}

} /* extern "C" */
