/* NON_MATCHING: retail walks the six slots with two incrementing pointers and a down-counter, copies the channel
 * kinds from a .constdata table (built: from the literal pool), and swaps the work/work+0x500 bases (r4/r5). */
#include "ui/ButtonHelp.h"
#include "ui/ButtonHelpGlobal.h"

namespace {
/* A sound scene record (dataTable0e): the six channel entries and a flag. */
struct SoundSceneEntry {
    /* 0x00 */ u16 channel[6];
    /* 0x0c */ u8 isLayered;
};

/* unit-local: the values of the two slots a pair of linked slots shows */
struct SlotPair {
    u16 first;
    u16 second;
};
}

extern "C" {
SoundSceneEntry *dataTableGetEntry0e(u32 id);
void buttonHelpBeginExit(s32 mode);
void buttonHelpTeardownSlots(void);
void FUN_00183c0c(void);
void buttonHelpPrepareSlots(void);

/* Selects the ButtonHelp entry `id` (a dataTable0e record): pushes its six per-slot values, links paired slots
   and picks how the change is announced. Deferred while a slot is still active. (The sound-flavoured names in
   this file are provisional; the object is the ButtonHelp global.) */
void sysPlaySe(u32 id)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (work->preset == id) {
        return;
    }
    if (g_buttonHelp.pending < 0) {
        for (s32 i = 0; i < 6; i++) {
            if (work->touchPressed[i] != 0) {
                g_buttonHelp.pending = id;
                return;
            }
        }
    }
    g_buttonHelp.pending = -1;
    SoundSceneEntry *from = dataTableGetEntry0e(work->preset);
    SoundSceneEntry *to = dataTableGetEntry0e(id);
    if (from != NULL && to != NULL) {
        if (from->isLayered == 0 && to->isLayered != 0) {
            buttonHelpBeginExit(1);
        } else {
            buttonHelpTeardownSlots();
        }
    }
    from = dataTableGetEntry0e(work->preset);
    to = dataTableGetEntry0e(id);
    if (from == NULL || to == NULL) {
        return;
    }
    work->previousPreset = work->preset;
    work->preset = id;
    u8 kinds[8] = { 5, 6, 4, 3, 2, 1, 0, 0 };   /* volume kind of each channel */
    for (s32 i = 0; i < 6; i++) {
        if (to->channel[i] != 0) {
            buttonHelpSelectSlot(i & 0xff, kinds[i], to->channel[i] & 0xff, 0);
        } else {
            buttonHelpSelectSlot(i & 0xff, 0x12, 0x51, 0);
        }
    }
    SlotPair pairA = {0, 0};
    SlotPair pairB = {0, 0};
    for (s32 i = 0; i < 6; i++) {
        ButtonHelpSlot *channel = &work->slots[i];
        if (channel->kind == 1) {
            pairA.first = channel->value;
        } else if (channel->kind == 2) {
            pairA.second = channel->value;
        } else if (channel->kind == 5) {
            pairB.first = channel->value;
        } else if (channel->kind == 6) {
            pairB.second = channel->value;
        }
    }
    if (pairA.first != 0 && pairA.second != 0 && pairA.first == pairA.second) {
        buttonHelpSelectSlot(5, 0, 0, 0);
        buttonHelpSelectSlot(4, 0x14, pairA.second & 0xff, 0);
    }
    if (pairB.first != 0 && pairB.second != 0 && pairB.first == pairB.second) {
        buttonHelpSelectSlot(1, 0, 0, 0);
        buttonHelpSelectSlot(0, 0x15, pairB.first & 0xff, 0);
    }
    if (from->isLayered != 0) {
        if (to->isLayered == 0) {
            g_buttonHelp.work->panelState = 1;
            buttonHelpPrepareSlots();
            return;
        }
        g_buttonHelp.work->panelState = 0;
    } else {
        g_buttonHelp.work->panelState = 1;
    }
    FUN_00183c0c();
}

} /* extern "C" */
