/* Declarations for the party status panel's slot drawing (smt4a 0x4b2e50..0x4b5db8). */
#ifndef CODE_CODE004B_H
#define CODE_CODE004B_H

#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The panel's per-slot cycling state. */
struct CyclingPanel {
    /* 0x0000 */ u8 unk0000[0x7E6C];
    /* 0x7E6C */ s32 timer[24];
    /* 0x7ECC */ s32 cursor[24];
};

/* What the panel's draw functions share between calls: the layout entry of the level digits (which the
 * gauge and the icon are placed against) and the text colour last set. */
struct PanelDrawState {
    /* 0x00 */ TextureTableEntryIV *levelEntry;
    /* 0x04 */ u32 color;
};

extern "C" {
extern PanelDrawState DAT_00588c4c; /* 0x588c4c */

/* Draws the icon of slot `slot`'s current entry; with several entries it cycles through them with a short fade. */
void partyPanelDrawAilmentIcon(CyclingPanel *panel, s32 slot, s32 x, s32 y);
}

#endif
