#include "camp/PartyResourceWork.h"
#include "gamedata/DevilRecordA.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
void asdMemFree(void *);
void FUN_002cc220(void);
void statusBustUpPortraitRelease(s32, s32);
PartyTextureSlot *partyGetSlot(u32);
s32 partySlotIsOccupied(const PartyTextureSlot *);
void ifTouchRegionRemove(void);
void campButtonHelpRelease(void);
void helpTexturesRelease(void);

/* Release party previews, touch regions, and shared help resources. */
void partyReleasePreviewResources(PartyResourceWork *work)
{
    if (work->data != NULL) {
        asdMemFree(work->data);
        work->data = NULL;
    }
    FUN_002cc220();
    for (s32 i = 0; i < 4; ++i) {
        if (work->loadedTextures[i] != 0) {
            statusBustUpPortraitRelease((s16)work->loadedTextures[i], 1);
            work->loadedTextures[i] = 0;
        }
    }
    for (s32 i = 0; i < 12; ++i) {
        PartyTextureSlot *slot = partyGetSlot((u16)i);
        if (partySlotIsOccupied(slot)) {
            /* The canonical DevilRecordA is only the 0x40-byte prefix. */
            const DevilTableRecordA *record = (const DevilTableRecordA *)devilGetRecord(slot->id);
            statusBustUpPortraitRelease((s16)(record->unk9C + 1), 0);
        }
    }
    if (work->previewTexture != 0 && work->previewShared == 0 &&
        devilIsTextureLoaded(work->previewTexture, 1)) {
        statusBustUpPortraitRelease(work->previewTexture, 1);
    }
    for (s32 i = 0; i < work->touchRegionCount; ++i) {
        ifTouchRegionRemove();
    }
    work->touchRegionCount = 0;
    campButtonHelpRelease();
    helpTexturesRelease();
}
}
