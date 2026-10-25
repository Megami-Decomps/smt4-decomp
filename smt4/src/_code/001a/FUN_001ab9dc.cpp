#include "common.h"
#include "gamedata/UnitStats.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[0xC];
    /* 0xC */ u32 unkC;
} Obj;

extern Obj *g_infoWin;

s32 FUN_001ab9dc(void)
{
    return g_infoWin->unkC;
}

} /* extern "C" */
