/* NON_MATCHING: recovered touch-selection flow still differs in predicate and helper-call scheduling. */
#include "classes/Obj55ca08.h"

struct Obj55ca08Selection {
    u8 type;
    u8 unk01[7];
    s32 count;
    u8 unk0c[4];
    u8 state[1];
};
extern "C" {
s32 ifTouchGetSelectionModeForRegion(s32 region);
s32 FUN_0029efc0(void);
s32 FUN_0029e93c(const u8 *state);
s32 flaggedEntryGetValueA(void);
s32 flaggedEntryGetValueB(const u8 *state);
void eventQueueAddUnique(u32 event);
void FUN_00298d64(u8 *state, u32 value);
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
        s32 offset = entry->type == 1 ? FUN_0029e93c(entry->state) : FUN_0029efc0();
        if (offset + index < entry->count) {
            s32 previous = entry->type == 1 ? flaggedEntryGetValueB(entry->state) : flaggedEntryGetValueA();
            if (soundEnabled != 0 && previous != index) {
                eventQueueAddUnique(0x100016c);
            }
            offset = entry->type == 1 ? FUN_0029e93c(entry->state) : FUN_0029efc0();
            if (entry->type == 0) {
                FUN_00298d64(entry->state, offset);
                flaggedEntrySetValueA(entry->state, index);
            }
            if (entry->type == 1) {
                recordTrackDirtyValue(entry->state, offset);
                flaggedEntrySetValueB(entry->state, index);
            }
        }
    }
}
