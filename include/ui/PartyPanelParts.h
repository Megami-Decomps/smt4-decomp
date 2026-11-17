/* Pieces both games' party panels share (ui/PartyPanelState.h, ui/PartyPanelStateA.h). */
#ifndef UI_PARTYPANELPARTS_H
#define UI_PARTYPANELPARTS_H
#include "common.h"
#include "ui/TimerSlot.h"

/* The panel's animated sprites (PartyPanelState::sprites, PartyPanelStateA::sprites). */
enum {
    PARTY_PANEL_SPRITE_PAGE = 2,        /* the page-flip animation */
    PARTY_PANEL_SPRITE_HIGHLIGHT = 3,   /* its speed animates the selection marker */
    PARTY_PANEL_SPRITE_MEMBERS = 4,     /* four member sprites */
    PARTY_PANEL_SPRITE_LAYOUT = 8,      /* the layout (alternate grid) indicator */
    PARTY_PANEL_SPRITE_IMAGE = 16       /* Apocalypse only */
};

/* The touch regions the panel registered (0xFFFF for none). */
struct PartyPanelTouchRegions {
    /* 0x00 */ u16 characters[4];
    /* 0x08 */ u16 demons[24];
    /* 0x38 */ u16 previousPage;
    /* 0x3A */ u16 nextPage;
    /* 0x3C */ s32 count;
};

typedef char PartyPanelTouchRegionsSizeCheck[sizeof(PartyPanelTouchRegions) == 0x40 ? 1 : -1];

#endif
