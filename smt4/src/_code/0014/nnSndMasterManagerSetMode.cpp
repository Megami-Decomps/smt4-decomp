#include "common.h"

extern "C" {

int dspsndSetHeadsetConnected(u8 *state);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u8 unk26;
} Obj;

extern u8 g_nnSndMasterManagerImpl;

void nnSndMasterManagerSetMode(Obj *obj, s8 value)
{
    obj->unk26 = value;
    dspsndSetHeadsetConnected(&g_nnSndMasterManagerImpl);
}

} /* extern "C" */
