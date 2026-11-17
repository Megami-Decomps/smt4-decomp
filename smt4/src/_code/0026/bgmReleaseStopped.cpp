#include "common.h"
#include "mikado/mikadoMain.h"
#include "sound/BgmSlot.h"

extern "C" {

/* One background-music slot (0x20 bytes): a sound handle and its playback state, flag bits at 0x1C. */

extern BgmSlot g_bgmRequestChannels[2];
s32 jyoucyuGetTableEntry(u32 index);
void asdSoundCompleteSlot(u32 handle, s32 arg);

/* Completes and clears every music slot that is in use and has finished; true if any was released. */
u32 bgmReleaseStopped(void)
{
    u32 released = 0;

    if (jyoucyuGetTableEntry(1) == 0) {
        for (s32 i = 0; i < 2; i++) {
            BgmSlot *slot = &g_bgmRequestChannels[i];
            if ((slot->flags & 2) != 0 && (slot->flags & 0x30) != 0) {
                asdSoundCompleteSlot(slot->handle, 0);
                slot->id = 0;
                slot->unk04 = 0;
                slot->fadeFrames = 0;
                slot->unk10 = 0;
                slot->unk18 = 0;
                slot->unk14 = 0;
                released = 1;
                slot->flags = 0;
            }
        }
    }
    return released;
}

} /* extern "C" */
