/* NON_MATCHING: initialization constants change registers and move into the valid-input branch, the first count reload is coalesced, and offset-bound comparison/result scheduling differ; candidate -O2. */
#include "shard/Shard0031.h"
#include "util/EventQueueAddUnique.h"
#include "shard/recordGetModeForId.h"

struct MenuSelectionScan {
    u32 unk00;
    s32 first;
    s32 second;
    s32 count;
    u8 playSound;
    u8 selectable;
    u8 blocked;
    u8 unk13;
    s16 selected;
    u8 unk16[2];
    s16 ids[1];
};
struct FlaggedMenuList {
    u8 mode;
    u8 unk01[7];
    s32 count;
    u32 unk0c;
    FlaggedEntry entry;
};

extern "C" {
s32 resourceRunEmbeddedOperationIfUnblocked(FlaggedEntry *entry);
s32 resourceRunOperationIfUnblocked(FlaggedEntry *entry);
u32 flaggedEntryGetValueA(FlaggedEntry *entry);
u32 flaggedEntryGetValueB(FlaggedEntry *entry);
void scrollOwnerSetValue(FlaggedEntry *entry, u32 value);
void recordTrackDirtyValue(FlaggedEntry *entry, u32 value);
void flaggedEntrySetValueA(FlaggedEntry *entry, s32 value);
void flaggedEntrySetValueB(FlaggedEntry *entry, s32 value);

void menuSynchronizeFlaggedSelection(MenuSelectionScan *scan, FlaggedMenuList *list)
{
    if (scan->first != -1 && scan->second != -1 && scan->count != -1) {
        scan->selected = -1;
        scan->selectable = 0;
        scan->blocked = 0;
        for (s32 i = 0; i < scan->count; ++i) {
            s32 state = recordGetModeForId(scan->ids[i]);
            if (state == 1 || state == 2) {
                scan->selectable = 1;
                scan->selected = i;
            }
            if (state == 6) {
                scan->selectable = 0;
                scan->blocked = 1;
                scan->selected = i;
            }
        }
    }
    if (scan->selectable != 0) {
        s32 selected = scan->selected;
        s32 offset = list->mode == 1 ? resourceRunEmbeddedOperationIfUnblocked(&list->entry) : resourceRunOperationIfUnblocked(&list->entry);
        if (offset + selected < list->count) {
            s32 current = list->mode == 1 ? flaggedEntryGetValueB(&list->entry) : flaggedEntryGetValueA(&list->entry);
            if (scan->playSound != 0 && current != selected) {
                eventQueueAddUnique(0x100020d);
            }
            offset = list->mode == 1 ? resourceRunEmbeddedOperationIfUnblocked(&list->entry) : resourceRunOperationIfUnblocked(&list->entry);
            if (list->mode == 0) {
                scrollOwnerSetValue(&list->entry, offset);
                flaggedEntrySetValueA(&list->entry, selected);
            }
            if (list->mode == 1) {
                recordTrackDirtyValue(&list->entry, offset);
                flaggedEntrySetValueB(&list->entry, selected);
            }
        }
    }
}
}
