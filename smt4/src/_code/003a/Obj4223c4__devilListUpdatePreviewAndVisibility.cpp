/* NON_MATCHING: only the prologue differs: retail copies this to r5 before forming the entries base and loads the mode into r0 (reloading r0 from r5 for the first call); the build keeps r0 live. */
#include "common.h"
#include "classes/Obj4223c4.h"
#include "code/Code0029.h"

struct DevilListEntry {
    u32 unk00;
    u16 id;
    u8 unk06[0x1a];
};
struct DevilListVisibility {
    s16 ids[16];
    u8 active[16];
};
struct DevilListFlags {
    u8 unk00[0xA4];
    u8 previewEnabled;
    u8 previewMode;
};
struct DevilListWork {
    u8 unk000[0x14];
    s32 mode;
    u8 unk018[8];
    u8 cursor[0x76];
    DevilListVisibility visibility;
    u8 unk0c6[0x4de];
    u8 previewEnabled;
    u8 previewMode;
    u8 unk5a6[2];
    DevilListEntry entries[1];
};

extern "C" {
s32 flaggedValueHolderGetTotal(void *cursor);
s32 rangeLimitMin(void *cursor);
void uiOwnerUpdateAnimationChannels(DevilListWork *work);
void unitInitializeFromSavedRecord(u16 id, void *record);
void FUN_0029da34(s32 screen, s32 mode, u16 id, const void *record);
void *partyMemberFindById(u16 id);
void FUN_003a72a4(DevilListWork *work);
void FUN_003a6f80(DevilListWork *work);
void FUN_003a8450(DevilListWork *work);
void FUN_0022de74(DevilListWork *work);
void objectWordsClear(DevilListVisibility *visibility);
void devilListMarkOrInsertQualifiedEntry(DevilListVisibility *visibility, u16 id);
void FUN_003aab90(DevilListVisibility *visibility);

}

void Obj4223c4::devilListUpdatePreviewAndVisibility()
{
    DevilListWork * work = reinterpret_cast<DevilListWork *>(this);
    DevilListEntry *entries = work->entries;
    if (work->mode == 9) {
        FUN_003a72a4(work);
    } else if (work->mode == 2) {
        u16 rawPrevious = entries[flaggedValueHolderGetTotal(work->cursor)].id;
        s16 previousId = rawPrevious;
        uiOwnerUpdateAnimationChannels(work);
        u16 rawId = entries[flaggedValueHolderGetTotal(work->cursor)].id;
        s16 id = rawId;
        const DevilListFlags *flags = reinterpret_cast<const DevilListFlags *>(reinterpret_cast<u8 *>(work) + 0x500);
        if (id != previousId) {
            bool useExisting = false;
            if (flags->previewEnabled) {
                u16 rawCurrent = entries[flaggedValueHolderGetTotal(work->cursor)].id;
                id = rawCurrent;
                useExisting = flags->previewMode == 1;
            }
            if (useExisting) {
                void *record = partyMemberFindById(id);
                FUN_0029da34(0, 1, id, record);
            } else {
                u8 temporaryRecord[0x610];
                unitInitializeFromSavedRecord(id, temporaryRecord);
                FUN_0029da34(0, 1, id, temporaryRecord);
            }
        }
        if (!(flags->previewEnabled)) {
            FUN_003a8450(work);
        } else {
            FUN_003a6f80(work);
        }
    }
    FUN_0022de74(work);
    objectWordsClear(&work->visibility);
    s32 count = rangeLimitMin(work->cursor);
    for (s32 index = 0; index < count; ++index) {
        s32 first = FUN_0029e924(work->cursor);
        s16 shown = entries[first + index].id;
        devilListMarkOrInsertQualifiedEntry(&work->visibility, shown);
    }
    FUN_003aab90(&work->visibility);
}
