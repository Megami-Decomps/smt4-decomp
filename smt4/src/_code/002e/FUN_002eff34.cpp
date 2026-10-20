#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x980];
    /* 0x980 */ u16 unk980;
} Obj;

extern Obj *g_uiQuest;

u16 FUN_002eff34(void)
{
    return g_uiQuest->unk980;
}

} /* extern "C" */
