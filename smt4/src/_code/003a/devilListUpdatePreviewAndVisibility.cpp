/* NON_MATCHING: ID loads fuse their halfword conversions and preview flags are not base-hoisted, changing saved registers, stack alignment and final visibility tail call. */
#include "common.h"

struct DevilListEntry {
    u32 unk00;
    u16 id;
    u8 unk06[0x1a];
};
struct DevilListVisibility {
    s16 ids[16];
    u8 active[16];
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
s32 FUN_0029e924(void *cursor);
void uiOwnerUpdateAnimationChannels(DevilListWork *work);
void FUN_0029d770(u16 id, void *record);
void FUN_0029da34(s32 screen, s32 mode, u16 id, const void *record);
void *partyMemberFindById(u16 id);
void FUN_003a72a4(DevilListWork *work);
void FUN_003a6f80(DevilListWork *work);
void FUN_003a8450(DevilListWork *work);
void FUN_0022de74(DevilListWork *work);
void objectWordsClear(DevilListVisibility *visibility);
void devilListMarkOrInsertQualifiedEntry(DevilListVisibility *visibility, u16 id);
void FUN_003aab90(DevilListVisibility *visibility);

void devilListUpdatePreviewAndVisibility(DevilListWork *work)
{
    u8 temporaryRecord[0x610];
    DevilListEntry *entries = work->entries;
    if (work->mode == 9) {
        FUN_003a72a4(work);
    } else if (work->mode == 2) {
        s16 previousId = entries[flaggedValueHolderGetTotal(work->cursor)].id;
        uiOwnerUpdateAnimationChannels(work);
        s16 id = entries[flaggedValueHolderGetTotal(work->cursor)].id;
        if (id != previousId) {
            bool useExisting = false;
            if (work->previewEnabled) {
                id = entries[flaggedValueHolderGetTotal(work->cursor)].id;
                useExisting = work->previewMode == 1;
            }
            if (useExisting) {
                void *record = partyMemberFindById(id);
                FUN_0029da34(0, 1, id, record);
            } else {
                FUN_0029d770(id, temporaryRecord);
                FUN_0029da34(0, 1, id, temporaryRecord);
            }
        }
        if (work->previewEnabled) {
            FUN_003a6f80(work);
        } else {
            FUN_003a8450(work);
        }
    }
    FUN_0022de74(work);
    objectWordsClear(&work->visibility);
    s32 count = rangeLimitMin(work->cursor);
    for (s32 index = 0; index < count; ++index) {
        s32 first = FUN_0029e924(work->cursor);
        devilListMarkOrInsertQualifiedEntry(&work->visibility, entries[first + index].id);
    }
    FUN_003aab90(&work->visibility);
}
}
