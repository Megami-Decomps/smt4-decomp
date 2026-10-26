/* NON_MATCHING: retail re-reads g_gameGlobals.transition (a second literal-pool load of the global address) for the phase accesses and keeps the first object pointer for the other fields; the build merges the two loads, shifting registers throughout. */
#include "common.h"
#include "ui/UiControl.h"

/* The transition object behind g_gameGlobals (accessed fields). */
struct TransitionState {
    u8 unk0000[0x14];
    s32 unk14;              // 0x14
    u8 unk18[0x135C];
    s32 phase;              // 0x1374
    u8 unk1378[9];
    u8 skipFinish;          // 0x1381
    u8 unk1382[0xC8E];
    u8 unk2010;             // 0x2010: alternate flow
    u8 unk2011[3];
    u8 requested;           // 0x2014
    u8 unk2015[2];
    u8 kind;                // 0x2017
    u8 subKind;             // 0x2018
};

struct GameGlobals {
    u32 unk00;
    TransitionState *transition;    // 0x04
};

extern "C" {
extern GameGlobals g_gameGlobals;

/* Drive the transition object one step: start the phases of the requested transition kind. */
void FUN_0021af2c(void)
{
    TransitionState *state = g_gameGlobals.transition;
    state->unk14 = 0;
    state->requested = 1;
    TransitionState *current = g_gameGlobals.transition;
    u8 kind = state->kind;
    if (kind == 0) {
        if (current->phase == 0)
            statusDownSwitchTab(0);
        if (current->phase == 1)
            statusDownSwitchTab(1);
        if (state->skipFinish == 0 && current->phase == 2)
            statusDownSwitchTab(2);
        return;
    }
    if (kind == 7) {
        if (state->unk2010 != 0) {
            if (current->phase == 0)
                statusDownSwitchTab(0);
            if (current->phase == 1)
                statusDownSwitchTab(1);
            if (current->phase == 2)
                statusDownSwitchTab(5);
        } else {
            if (current->phase == 0)
                statusDownSwitchTab(0);
            if (current->phase == 1)
                statusDownSwitchTab(1);
        }
        return;
    }
    if (kind == 9 || kind == 10 || kind == 11 || kind == 12 || kind == 8) {
        if (current->phase == 0)
            statusDownSwitchTab(1);
        if (current->phase == 1)
            statusDownSwitchTab(5);
        return;
    }
    if (kind == 15) {
        if (current->phase == 0)
            statusDownSwitchTab(0);
        return;
    }
    if (kind == 14) {
        if (current->phase == 0)
            statusDownSwitchTab(0);
        if (current->phase == 1)
            statusDownSwitchTab(1);
        if (state->skipFinish == 0 && current->phase == 2)
            statusDownSwitchTab(5);
        return;
    }
    u8 subKind = state->subKind;
    if (kind == 4) {
        if (subKind == 7 || subKind == 12) {
            if (current->phase == 0)
                statusDownSwitchTab(1);
        } else {
            if (current->phase == 0)
                statusDownSwitchTab(0);
            if (current->phase == 1)
                statusDownSwitchTab(1);
        }
        return;
    }
    if (subKind == 6) {
        if (current->phase == 0)
            statusDownSwitchTab(1);
        return;
    }
    if (subKind == 13) {
        if (current->phase == 0)
            statusDownSwitchTab(1);
        if (current->phase == 1)
            statusDownSwitchTab(5);
        return;
    }
    if (state->unk2010 == 0) {
        if (current->phase == 0)
            statusDownSwitchTab(0);
        if (current->phase == 1)
            statusDownSwitchTab(1);
        return;
    }
    if (current->phase == 0)
        statusDownSwitchTab(0);
    if (current->phase == 1)
        statusDownSwitchTab(1);
    if (current->phase == 2)
        statusDownSwitchTab(5);
}
}
