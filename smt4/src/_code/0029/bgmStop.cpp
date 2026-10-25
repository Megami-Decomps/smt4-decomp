#include "common.h"

#define BGM_SLOT_COUNT 2

#define BGM_SLOT_PLAYING 0x02
#define BGM_SLOT_FADING_OUT 0x08
#define BGM_SLOT_SWITCHING 0x30 /* either bit: the slot is changing tracks */

/* One BGM playback slot. */
typedef struct BgmSlot {
    /* 0x00 */ u32 handle;     /* sound slot passed to asdSoundCompleteSlot */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 fadeFrames;
    /* 0x0C */ s32 id;         /* BGM id playing in the slot */
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 flags;      /* BGM_SLOT_* */
} BgmSlot;

extern "C" {

extern BgmSlot DAT_004c53c4[BGM_SLOT_COUNT];

s32 jyoucyuGetTableEntry(u32 index);
void asdSoundCompleteSlot(u32 slot, s32 mode);

/* Stops the slot's sound at once and clears the slot. */
static void bgmSlotStop(BgmSlot *slot)
{
    asdSoundCompleteSlot(slot->handle, 0);
    slot->id = 0;
    slot->unk04 = 0;
    slot->fadeFrames = 0;
    slot->unk10 = 0;
    slot->unk18 = 0;
    slot->unk14 = 0;
    slot->flags = 0;
}

/* Stops BGM `id` (-1: any) in every slot: fades it out over fadeFrames, or cuts it at once when
 * fadeFrames is 0. `force` also clears slots that are idle or switching tracks. */
void bgmStop(s32 id, u32 fadeFrames, s32 force)
{
    s32 i;

    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }
    for (i = 0; i < BGM_SLOT_COUNT; i++) {
        BgmSlot *slot = &DAT_004c53c4[i];
        u32 flags = slot->flags;

        if ((flags & BGM_SLOT_PLAYING) != 0 && (flags & BGM_SLOT_SWITCHING) == 0) {
            if (id != -1) {
                if (slot->id != id)
                    continue;
                if (fadeFrames != 0) {
                    slot->fadeFrames = fadeFrames;
                    slot->flags = flags | BGM_SLOT_FADING_OUT;
                    continue;
                }
            } else {
                if (fadeFrames != 0) {
                    slot->fadeFrames = fadeFrames;
                    slot->flags = flags | BGM_SLOT_FADING_OUT;
                    continue;
                }
            }
        } else if (!force) {
            continue;
        }
        bgmSlotStop(slot);
    }
}

} /* extern "C" */
