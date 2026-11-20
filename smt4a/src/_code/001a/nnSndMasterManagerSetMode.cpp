#include "common.h"

extern "C" {

u8 dspsndSetHeadsetConnected(u8 *state, u8 connected);
extern u8 g_nnSndMasterManagerImpl[];

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u8 headsetConnected;
} Holder;

/* Stores the headset flag and forwards it to dspsndSetHeadsetConnected together with the state at 0x647708. */
void nnSndMasterManagerSetMode(Holder *object, u8 connected)
{
    object->headsetConnected = connected;
    dspsndSetHeadsetConnected(g_nnSndMasterManagerImpl, connected);
}

} /* extern "C" */
