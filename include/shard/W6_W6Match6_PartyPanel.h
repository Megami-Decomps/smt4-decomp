#ifndef SHARD_W6_W6MATCH6_PARTY_PANEL_H
#define SHARD_W6_W6MATCH6_PARTY_PANEL_H
#include "common.h"

/* A unit's slot widget in the party panel (PartyPanelState/A characters[] and demons[]): its
 * placement transition, flags and the slot it shows. 0x54 bytes as allocated; fields past 0x48 are not known. */
struct PartyPanelWidget {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 empty;                /* slotPlacementSetEmpty */
    /* 0x21 */ u8 isCharacter;          /* set for the three party slots' widgets */
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 hasTag;
    /* 0x24 */ u8 flagA;
    /* 0x25 */ u8 transitionActive;
    /* 0x26 */ u8 unk26;
    /* 0x27 */ u8 transitionPending;
    /* 0x28 */ u8 marked;               /* excluded or matched by the fusion filter */
    /* 0x29 */ u8 flagB;
    /* 0x2A */ u8 unk2A[0xA];
    /* 0x34 */ s32 slot;                /* the slot shown (slotPlacementSetSlot); -1/-2 for the special rows */
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ u32 result;              /* pair40Set's first value */
    /* 0x44 */ s32 value;               /* pair40Set's second value */
    /* 0x48 */ u8 unk48[0xC];
};
typedef char PartyPanelWidgetSizeCheck[sizeof(PartyPanelWidget) == 0x54 ? 1 : -1];
struct PartyPanelEntry {
    u16 available; // 0x00
    u8 unk02[6];
};
#endif
