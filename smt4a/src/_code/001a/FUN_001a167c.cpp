#include "common.h"

extern "C" {

u8 FUN_0018a3d0(u8 *state, u8 connected);
extern u8 g_nnSndMasterManagerImpl[];

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u8 headsetConnected;
} Holder;

/* Stores the headset flag and forwards it to FUN_0018a3d0 together with the state at 0x647708. */
void FUN_001a167c(Holder *object, u8 connected)
{
    object->headsetConnected = connected;
    FUN_0018a3d0(g_nnSndMasterManagerImpl, connected);
}

} /* extern "C" */
