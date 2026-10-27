/* NON_MATCHING: retail builds the stat base from the saved entry register (r6) and loads the entry flags into r1 before testing the list-owner result in the two flag items; all other instructions agree. */
#include "battle/BtlMainAccess.h"
#include "battle/btlHelp.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "code/Code0025_Smt4.h"
#include "shard/W4_Match6_BtlEntry.h"

/* The entry editor screen: its list box and the index of the entry being edited. */
struct EntryEditorScreen {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ s32 entryIndex;
};

/* The entry's editable vitals and stats, one list item each from item 1. */
struct EntryStats {
    /* 0x00 */ s16 hp;
    /* 0x02 */ s16 maxHp;
    /* 0x04 */ s16 mp;
    /* 0x06 */ s16 maxMp;
    /* 0x08 */ s16 stat5;
    /* 0x0A */ s16 stat6;
    /* 0x0C */ s16 stat7;
    /* 0x0E */ s16 speed;
    /* 0x10 */ s16 luck;
};
struct EntryStatsView {
    u8 unk000[0x1B4];
    EntryStats stats;
};
typedef char EntryStatsOffsets[offsetof(EntryStatsView, stats) == 0x1B4 &&
    offsetof(EntryStatsView, stats.speed) == 0x1C2 ? 1 : -1];

extern "C" {

void asdListBoxSetItemMode3(u32 listBox, s32 index, s32 value, s32 minimum, s32 maximum, s32 option);
void asdListBoxSetItemMode2(u32 listBox, s32 index, s32 value);
u32 gameRecordSetValueClamped(u32 recordIndex, u32 value);
u32 saveIsRecordValueBounded(u32 index);
u32 asdListBoxGetSelectedItemId(u32 job);

/* Applies the selected list item to the entry being edited (item 0 switches entry). */
void FUN_003c4ac4(EntryEditorScreen *screen, BtlMainState *battle)
{
    u32 item = asdListBoxGetSelectedItemId(screen->listBox);
    BtlEntry *entry = FUN_002561d8(battle, screen->entryIndex, 1);
    EntryStats *stats = NULL;
    if (entry != NULL) {
        stats = &reinterpret_cast<EntryStatsView *>(entry)->stats;
    }
    switch (item) {
    case 0:
        screen->entryIndex = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
        entry = FUN_002561d8(btlGetMainState(), screen->entryIndex, 1);
        if (entry != NULL) {
            stats = &reinterpret_cast<EntryStatsView *>(entry)->stats;
            asdListBoxSetItemMode3(screen->listBox, 1, stats->hp, 1, 9999, 0);
            asdListBoxSetItemMode3(screen->listBox, 2, stats->maxHp, 1, 9999, 0);
            asdListBoxSetItemMode3(screen->listBox, 3, stats->mp, 0, 9999, 0);
            asdListBoxSetItemMode3(screen->listBox, 4, stats->maxMp, 1, 9999, 0);
            asdListBoxSetItemMode3(screen->listBox, 5, stats->stat5, 1, 999, 0);
            asdListBoxSetItemMode3(screen->listBox, 6, stats->stat6, 1, 999, 0);
            asdListBoxSetItemMode3(screen->listBox, 7, stats->stat7, 1, 999, 0);
            asdListBoxSetItemMode3(screen->listBox, 8, stats->speed, 1, 999, 0);
            asdListBoxSetItemMode3(screen->listBox, 9, stats->luck, 1, 999, 0);
            asdListBoxSetItemMode2(screen->listBox, 10, (entry->flags & 0x1000) >> 12);
            asdListBoxSetItemMode2(screen->listBox, 11, (entry->flags & 0x4000000) >> 26);
            if ((entry->flags & 0x10) != 0) {
                asdListBoxSetItemMode3(screen->listBox, 12, saveIsRecordValueBounded(entry->id), 0, 9999, 0);
            } else {
                asdListBoxSetItemMode3(screen->listBox, 12, 0, 0, 9999, 0);
            }
        }
        break;
    case 1:
        if (stats != NULL) {
            stats->hp = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
            if (entry->equipA != NULL) {
                entry->equipA->hp = stats->hp;
            }
            if (entry->equipB != NULL) {
                entry->equipB->hp = stats->hp;
            }
            if (entry->reserve != NULL) {
                entry->reserve->hp = stats->hp;
            }
        }
        break;
    case 2:
        if (stats != NULL) {
            stats->maxHp = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
        }
        break;
    case 3:
        if (stats != NULL) {
            stats->mp = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
            if (entry->equipA != NULL) {
                entry->equipA->mp = stats->mp;
            }
            if (entry->equipB != NULL) {
                entry->equipB->mp = stats->mp;
            }
            if (entry->reserve != NULL) {
                entry->reserve->mp = stats->mp;
            }
        }
        break;
    case 4:
        if (stats != NULL) {
            stats->maxMp = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
        }
        break;
    case 5:
        if (stats != NULL) {
            stats->stat5 = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
        }
        break;
    case 6:
        if (stats != NULL) {
            stats->stat6 = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
        }
        break;
    case 7:
        if (stats != NULL) {
            stats->stat7 = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
        }
        break;
    case 8:
        if (stats != NULL) {
            stats->speed = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
        }
        break;
    case 9:
        if (stats != NULL) {
            stats->luck = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item);
        }
        break;
    case 10:
        if (entry != NULL) {
            s32 hasOwner = listBoxItemHasOwner(screen->listBox, item);
            u32 flags = entry->flags;
            if (hasOwner != 0) {
                flags |= 0x1000;
            } else {
                flags &= ~0x1000u;
            }
            entry->flags = flags;
        }
        break;
    case 11:
        if (entry != NULL) {
            s32 hasOwner = listBoxItemHasOwner(screen->listBox, item);
            u32 flags = entry->flags;
            if (hasOwner != 0) {
                flags |= 0x4000000;
            } else {
                flags &= ~0x4000000u;
            }
            entry->flags = flags;
        }
        break;
    case 12:
        if (entry != NULL && (entry->flags & 0x10) != 0) {
            gameRecordSetValueClamped(entry->id, *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(screen->listBox), item));
        }
        break;
    }
}

} /* extern "C" */
