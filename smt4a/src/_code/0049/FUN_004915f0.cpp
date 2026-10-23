/* NON_MATCHING: zero/selected-kind initialization order and inverse-entry success block placement differ. */
#include "ui/NaviCategorySelection.h"

struct NaviAvailabilityEntry {
    u8 active;
    u8 pending;
    u8 kind;
    u8 condition;
    u8 alternateFirst;
    u8 alternateSecond;
    s16 category;
    s32 completionFlag;
    u8 unk0C[0x24];
};
// This aligned view leaves the shared work's odd-address byte padding unchanged.
struct NaviAvailabilityView {
    u8 unk00000[0x7B92];
    u8 refresh;
    u8 unk07B93[0x965];
    NaviAvailabilityEntry entries[2048];
    s32 count;
    u32 mode;
};
typedef char NaviAvailabilityLayoutCheck[
    sizeof(NaviAvailabilityEntry) == 0x30 && offsetof(NaviAvailabilityEntry, category) == 6 &&
    offsetof(NaviAvailabilityEntry, completionFlag) == 8 &&
    offsetof(NaviAvailabilityView, entries) == 0x84F8 &&
    offsetof(NaviAvailabilityView, count) == 0x204F8 &&
    offsetof(NaviAvailabilityView, mode) == 0x204FC ? 1 : -1];

extern "C" {
s32 FUN_004083a8(u32 kind, u32 condition);
s32 FUN_00408240(u32 flag);

// Re-evaluate entries in the current category and derive the selected kind's special display mode.
void FUN_004915f0(NaviCategorySelectionWork *work)
{
    NaviAvailabilityView *state = (NaviAvailabilityView *)work;
    u8 selectedKind = 0;
    for (s32 index = 0; index < state->count; ++index) {
        NaviAvailabilityEntry *entry = &state->entries[index];
        if (entry->category != work->selection) {
            entry->active = 0;
        } else if (entry->completionFlag != -1) {
            if (FUN_004083a8(entry->kind, entry->condition)) {
                selectedKind = entry->kind;
                entry->active = 1;
                if (entry->pending && FUN_00408240(entry->completionFlag))
                    entry->pending = 0;
            } else {
                entry->active = 0;
            }
        } else {
            if (FUN_004083a8(entry->kind, entry->condition) ||
                (entry->alternateFirst && FUN_004083a8(entry->kind, entry->alternateFirst)) ||
                (entry->alternateSecond && FUN_004083a8(entry->kind, entry->alternateSecond))) {
                entry->active = 0;
            } else {
                entry->active = 1;
            }
        }
    }
    state->mode = 0;
    switch (selectedKind) {
    case 0x11: case 0x2D: case 0x2E: case 0x4F: case 0x58: case 0x67:
    case 0x89: case 0x8C: case 0x9D: case 0xA1: case 0xA4:
        state->mode = 2;
        break;
    default:
        break;
    }
    state->refresh = 0;
}
}
