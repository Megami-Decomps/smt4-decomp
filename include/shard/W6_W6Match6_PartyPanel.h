#ifndef SHARD_W6_W6MATCH6_PARTY_PANEL_H
#define SHARD_W6_W6MATCH6_PARTY_PANEL_H
#include "common.h"
#include "ui/ScreenPoint.h"

/* A unit's slot widget in the party panel (PartyPanelState/A characters[] and demons[]): its
 * placement transition, flags and the slot it shows. 0x54 bytes as allocated; fields past 0x48 are not known. */
struct PartyPanelWidget {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 ailmentScroll;       /* frames the ailment icon strip has shown its current icon */
    /* 0x1C */ s32 ailmentCursor;       /* which of the unit's ailments the strip shows */
    /* 0x20 */ u8 empty;                /* slotPlacementSetEmpty */
    /* 0x21 */ u8 isCharacter;          /* set for the three party slots' widgets */
    /* 0x22 */ u8 largeCard;            /* drawn as the large card of the selected row */
    /* 0x23 */ u8 hasTag;
    /* 0x24 */ u8 flagA;
    /* 0x25 */ u8 transitionActive;
    /* 0x26 */ u8 unk26;
    /* 0x27 */ u8 transitionPending;
    /* 0x28 */ u8 marked;               /* excluded or matched by the fusion filter */
    /* 0x29 */ u8 flagB;
    /* 0x2A */ u8 unk2A[2];
    /* 0x2C */ ScreenPoint origin;      /* added to the position the widget is drawn at (read as one pair) */
    /* 0x34 */ s32 slot;                /* the slot shown (slotPlacementSetSlot); -1/-2 for the special rows */
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ u32 result;              /* pair40Set's first value */
    /* 0x44 */ s32 value;               /* pair40Set's second value */
    /* 0x48 */ u8 tinted;               /* draws the tint overlay in the colour of tintKind/tintLevel */
    /* 0x49 */ u8 unk49[3];
    /* 0x4C */ s32 tintKind;
    /* 0x50 */ s32 tintLevel;
};
typedef char PartyPanelWidgetSizeCheck[sizeof(PartyPanelWidget) == 0x54 ? 1 : -1];
typedef char PartyPanelWidgetOffsetsCheck[
    __INTADDR__(&((PartyPanelWidget *)0)->ailmentCursor) == 0x1C && __INTADDR__(&((PartyPanelWidget *)0)->origin) == 0x2C &&
    __INTADDR__(&((PartyPanelWidget *)0)->slot) == 0x34 && __INTADDR__(&((PartyPanelWidget *)0)->result) == 0x40 &&
    __INTADDR__(&((PartyPanelWidget *)0)->tintKind) == 0x4C ? 1 : -1];
struct PartyPanelEntry {
    u16 available; // 0x00
    u8 unk02[6];
};
#endif
