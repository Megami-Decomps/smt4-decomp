/* NON_MATCHING: retail materialises the 0/1 flag constants (r8/r7) before the region guard and reloads regionCount
 * after the flag stores; this build sets them inside the guard and reuses the guard's load. */
#include "classes/Obj55ca08.h"
#include "camp/Unite/UniteWork.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/GameDataAccess_Shard0031.h"

struct Obj55ca08Selection {
    u8 type;
    u8 unk01[7];
    s32 count;
    u8 unk0c[4];
    u8 state[1];
};
extern "C" {
s32 ifTouchGetSelectionModeForRegion(s32 region);
s32 resourceRunOperationIfUnblocked(const u8 *state);
s32 flaggedEntryGetValueB(const u8 *state);
void eventQueueAddUnique(u32 event);
void scrollOwnerSetValue(u8 *state, u32 value);
void flaggedEntrySetValueA(u8 *state, s32 value);
void recordTrackDirtyValue(u8 *state, u32 value);
void flaggedEntrySetValueB(u8 *state, s32 value);
}

void Obj55ca08::synchronize(const u8 *selection)
{
    Obj55ca08Selection *entry = (Obj55ca08Selection *)selection;
    if (firstRegion != -1 && secondRegion != -1 && regionCount != -1) {
        selectedIndex = -1;
        selected = 0;
        released = 0;
        for (s32 i = 0; i < regionCount; ++i) {
            s32 mode = ifTouchGetSelectionModeForRegion(regions[i]);
            if (mode == 1 || mode == 2) {
                selected = 1;
                selectedIndex = i;
            }
            if (mode == 6) {
                selected = 0;
                released = 1;
                selectedIndex = i;
            }
        }
    }
    if (selected != 0) {
        s32 index = selectedIndex;
        s32 offset = entry->type == 1 ? resourceRunEmbeddedOperationIfUnblocked(entry->state) : resourceRunOperationIfUnblocked(entry->state);
        if (offset + index < entry->count) {
            s32 previous = entry->type == 1 ? flaggedEntryGetValueB(entry->state) : flaggedEntryGetValueA((FlaggedEntry *)entry->state);
            if (soundEnabled != 0 && previous != index) {
                eventQueueAddUnique(0x100016c);
            }
            offset = entry->type == 1 ? resourceRunEmbeddedOperationIfUnblocked(entry->state) : resourceRunOperationIfUnblocked(entry->state);
            if (entry->type == 0) {
                scrollOwnerSetValue(entry->state, offset);
                flaggedEntrySetValueA(entry->state, index);
            }
            if (entry->type == 1) {
                recordTrackDirtyValue(entry->state, offset);
                flaggedEntrySetValueB(entry->state, index);
            }
        }
    }
}
