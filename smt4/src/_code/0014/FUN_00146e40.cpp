#include "common.h"

extern "C" {

int FUN_0013ac54(u8 *state);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u8 unk26;
} Obj;

extern u8 g_nnSndMasterManagerImpl;

void FUN_00146e40(Obj *obj, u8 value)
{
    obj->unk26 = value;
    FUN_0013ac54(&g_nnSndMasterManagerImpl);
}

} /* extern "C" */
