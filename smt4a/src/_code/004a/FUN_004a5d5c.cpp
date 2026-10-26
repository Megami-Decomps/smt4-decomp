/* NON_MATCHING: block pointer and mode swap saved registers (r7/r8) and the clear-panel tail is placed after the selection sounds instead of before the special-sound arm. */
#include "ui/ItemListSelection.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "event/2dEvent/SmokeFade.h"
#include "shard/FUN_0023b3b8.h"

extern "C" {
void sysPlaySe(u32 sound);
void FUN_0023b45c(s32 value);
void statusPanelSetOpen(s32 open);
s32 statusDownGetFlag();
void FUN_0031f718(s16 id, s32 enabled, s32 initial);
void FUN_00372048(s32 mode);
u32 statusDownGetHelpMessage(s32 mode);
s32 flaggedValueHolderGetTotal(void *cursor);

// Refresh the selected demon's status preview and play the appropriate selection sound.
void FUN_004a5d5c(ItemListSelectionOwner *owner)
{
    struct PreviewEntry {
        u16 count;
        u16 unk02;
        u16 id;
        u8 unk06[0x16];
        u8 enabled;
        u8 suffix[3];
    };
    struct PreviewBlock {
        u8 prefix[0x60];
        u8 specialSound;
        u8 padding[3];
        PreviewEntry entries[1];
    };
    struct PreviewWorkView {
        u8 prefix[0x20];
        u8 cursor[0x7E0];
        PreviewBlock block;
    };
    struct CachedPreviewView {
        u8 prefix[0xA870];
        u16 id;
    };
    struct PreviewRecordFlags {
        u8 prefix[0xB3];
        u8 flags;
    };
    PreviewWorkView *work = reinterpret_cast<PreviewWorkView *>(owner);
    CachedPreviewView *cache = reinterpret_cast<CachedPreviewView *>(owner);
    PreviewBlock *block = &work->block;
    if (block->entries[0].count != 0) {
        PreviewEntry *entries = work->block.entries;
        u32 id = entries[flaggedValueHolderGetTotal(work->cursor)].id;
        if (entries[flaggedValueHolderGetTotal(work->cursor)].enabled == 0)
            id = 0;
        if (FUN_0023b3d0() == 0 || cache->id == id)
            return;
        cache->id = id;
        if (id != 0) {
            FUN_0031f718((s16)id, 1, 0);
            statusPanelSetOpen(1);
            s32 mode = statusDownGetFlag();
            s32 panel = FUN_0023b3b8();
            const PreviewRecordFlags *record = reinterpret_cast<const PreviewRecordFlags *>(FUN_00184310(id));
            if ((record->flags & 2) != 0 && mode == 5) {
                panel = 1;
                mode = panel;
            }
            FUN_00372048(panel);
            u32 sound = statusDownGetHelpMessage(mode);
            if (sound != 0) {
                sysPlaySe(sound);
                return;
            }
            if (block->specialSound != 0) {
                sysPlaySe(0x48);
                return;
            }
            record = reinterpret_cast<const PreviewRecordFlags *>(
                FUN_00184310(entries[flaggedValueHolderGetTotal(work->cursor)].id));
            if ((record->flags & 2) == 0)
                sysPlaySe(0x30);
            else
                sysPlaySe(0x121);
            return;
        }
    }
    FUN_0023b45c(0);
}
}
