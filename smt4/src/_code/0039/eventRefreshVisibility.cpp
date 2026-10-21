/* NON_MATCHING: initial zero/last-row registers and category comparison operands differ; the unmatched-ID visible path is placed before the mode switch rather than inside it. */
#include "common.h"

struct EventVisibilityRecord {
    /* 0x00 */ u8 visible;
    /* 0x01 */ u8 pending;
    /* 0x02 */ u8 row;
    /* 0x03 */ u8 column;
    /* 0x04 */ u8 alternateColumn0;
    /* 0x05 */ u8 alternateColumn1;
    /* 0x06 */ s16 category;
    /* 0x08 */ s32 id;
    /* 0x0c */ u8 unk0c[0x24];
};

struct EventVisibilityState {
    /* 0x00000 */ u8 unk00000[0x60];
    /* 0x00060 */ s8 category;
    /* 0x00061 */ u8 unk00061[0x5a2d];
    /* 0x05a8e */ u8 pending;
    /* 0x05a8f */ u8 unk05a8f[0x725];
    /* 0x061b4 */ EventVisibilityRecord records[1024];
    /* 0x121b4 */ s32 count;
    /* 0x121b8 */ s32 mode;
};

extern "C" {
s32 saveTestFlagRow(u32 row, u32 column);
s32 FUN_00342044(u32 id);

// Refresh event visibility from category/flag conditions and select the row's menu mode.
void eventRefreshVisibility(EventVisibilityState *state)
{
    u8 lastRow = 0;
    for (s32 index = 0; index < state->count; ++index) {
        EventVisibilityRecord *entry = &state->records[index];
        if (entry->category != state->category) {
            entry->visible = 0;
        } else if (entry->id != -1) {
            if (saveTestFlagRow(entry->row, entry->column)) {
                lastRow = entry->row;
                entry->visible = 1;
                if (entry->pending && FUN_00342044(entry->id)) {
                    entry->pending = 0;
                }
            } else {
                entry->visible = 0;
            }
        } else {
            if (saveTestFlagRow(entry->row, entry->column) ||
                (entry->alternateColumn0 && saveTestFlagRow(entry->row, entry->alternateColumn0)) ||
                (entry->alternateColumn1 && saveTestFlagRow(entry->row, entry->alternateColumn1))) {
                entry->visible = 0;
            } else {
                entry->visible = 1;
            }
        }
    }
    state->mode = 0;
    switch (lastRow) {
    case 0x11:
    case 0x2d:
    case 0x2e:
    case 0x4f:
    case 0x58:
    case 0x67:
    case 0x89:
    case 0x8c:
    case 0x9d:
    case 0xa1:
    case 0xa4:
        state->mode = 2;
        break;
    }
    state->pending = 0;
}
}
