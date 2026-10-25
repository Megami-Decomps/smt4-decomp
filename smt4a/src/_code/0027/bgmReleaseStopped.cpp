#include "common.h"

extern "C" {

/* One background-music slot (0x20 bytes): a sound handle and its playback state, flag bits at 0x1C. */
struct BgmSlot {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 flags;
};

extern BgmSlot DAT_0061951c[2];
s32 jyoucyuGetTableEntry(u32 index);
void handlerFinishById(s32 handle, s32 frames);

/* Completes and clears every music slot that is in use and has finished; true if any was released. */
u32 bgmReleaseStopped(void)
{
    u32 released = 0;

    if (jyoucyuGetTableEntry(1) == 0) {
        for (s32 i = 0; i < 2; i++) {
            BgmSlot *slot = &DAT_0061951c[i];
            if ((slot->flags & 2) != 0 && (slot->flags & 0x30) != 0) {
                handlerFinishById(slot->handle, 0);
                slot->unk0C = 0;
                slot->unk04 = 0;
                slot->unk08 = 0;
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
