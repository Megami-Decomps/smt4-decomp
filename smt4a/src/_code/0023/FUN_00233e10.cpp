/* NON_MATCHING: retail addresses the entry as (state + index * 0x194) plus constant field offsets and does not keep a separate pointer to the record; the build folds the 0x1dc record base into the pointer and orders the state tests differently. */
#include "map/mapIf.h"
#include "map/mapDepart.h"
#include "map/lmapMain.h"

extern "C" {
extern MapIfGlobalsA g_mapIf;
extern LmapExtraA *g_lmapView;
extern GameStateA g_gameState;

void FUN_003d4ed8(u32 sound);
void FUN_0050245c(f32 x, f32 y, f32 z);

// Applies a state change to interface entry `index` (-1: none): `blocked` is stored in the interface head and cleared
// again when the entry does not lead to the map being viewed. With it clear, every active entry in a closing state
// (8, 10, 12, 14, 16) is sent to state 6; with it set, the entry in state 6 moves on to its follow-up state.
u32 FUN_00233e10(u8 blocked, s32 index)
{
    MapIfStateA *state = g_mapIf.state;
    state->head.unk1C = blocked;
    MapIfRecord *record = &g_mapIf.state->records[index];
    if (index != -1 && record->active != 0 && g_lmapView->unkB0 != record->navigation.destination) {
        state->head.unk1C = 0;
    }
    if (state->head.unk1C == 0) {
        for (s32 i = 0; i < 128; i++) {
            MapIfRecord *entry = &state->records[i];
            if (entry->active != 0) {
                s32 kind = entry->display.category;
                if (kind != 0x1d && kind != 0x31 && kind != 0x1e && kind != 0x1f && kind != 0x30 && kind != 0x22 &&
                    kind != 0x23 && kind != 0x25 && kind != 0x28 &&
                    (entry->state == 8 || entry->state == 10 || entry->state == 12 || entry->state == 14 ||
                     entry->state == 16)) {
                    entry->state = 6;
                }
            }
        }
        return 1;
    }
    if (index == -1) {
        return 0;
    }
    if (record->active == 0) {
        return 1;
    }
    if (record->state != 6) {
        return 1;
    }
    if (record->display.category >= 45) {
        record->state = 7;
        if (g_gameState.inputBlocked == 0) {
            FUN_0050245c(record->reset.start[0], record->reset.start[1], record->reset.start[2]);
            FUN_003d4ed8(0x10002ab);
        }
    } else {
        s32 destination = record->navigation.destination;
        if (destination == -1) {
            record->state = 9;
            FUN_003d4ed8(0x10002ab);
        } else if (destination == -2) {
            record->state = 11;
            FUN_003d4ed8(0x10002ab);
        } else if (destination == -3) {
            record->state = 13;
            FUN_003d4ed8(0x10002ab);
        } else if (record->reset.values[2] != 0) {
            record->state = 7;
            if (g_gameState.inputBlocked != 0 && g_lmapView->camera.mode == 0) {
                // the entry is left in state 7 without a sound or a jump marker
            } else if (g_gameState.mode < 100) {
                FUN_003d4ed8(0x10002ab);
            } else {
                FUN_0050245c(record->reset.start[0], record->reset.start[1], record->reset.start[2]);
                FUN_003d4ed8(0x10002ab);
            }
        } else {
            record->state = 15;
            if (g_gameState.inputBlocked == 0) {
                FUN_003d4ed8(0x10002ab);
            }
        }
    }
    record->proximity.timer = 0;
    return 1;
}
}
