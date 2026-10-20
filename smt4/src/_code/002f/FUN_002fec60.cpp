#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ int state;
} Obj;

extern Obj *g_uiQuest;

u8 FUN_002fec60(void)
{
    return g_uiQuest->state == 0;
}

} /* extern "C" */
