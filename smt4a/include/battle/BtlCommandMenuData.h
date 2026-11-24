/* Apocalypse: the battle command menu's data block (0x573b88, .data): two list selections and the 64-bit
 * masks the menu tests against the battle's state flags (stateFlags64) and marker masks. Each user had a
 * view of its own; the offsets are the ones they read:
 *   0x04/0x08: btlCommandMenuSetupLists; 0x20: FUN_00231cdc, FUN_003363a8, btlMenuResolveHighlightedCommand;
 *   0x28: FUN_0020d3d4, FUN_002cc9e0; 0x40: btlCommandMenuApplySelection, btlCommandMenuSetupLists;
 *   0x48: btlMenuResolveHighlightedCommand. Users that test a mask word by word read the Words views.
 * FUN_0021d13c (a raw draft) still tests a byte at 0x00. */
#ifndef SMT4A_BATTLE_BTLCOMMANDMENUDATA_H
#define SMT4A_BATTLE_BTLCOMMANDMENUDATA_H

#include "common.h"
#include <stddef.h>

struct BtlCommandMenuData {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 firstSelection;  /* base of the selection btlCommandMenuSetupLists gives command 2's list */
    /* 0x08 */ s32 secondSelection; /* the selection it gives the party list */
    /* 0x0C */ u8 unk0C[0x14];
    union {
        /* 0x20 */ u64 stateBlocked;         /* state flags that block the menu */
        /* 0x20 */ u32 stateBlockedWords[2];
    };
    union {
        /* 0x28 */ u64 stateMask28;          /* state flags the debug list and the command lookup test */
        /* 0x28 */ u32 stateMask28Words[2];
    };
    /* 0x30 */ u8 unk30[0x10];
    /* 0x40 */ u64 listMarker;      /* the marker (markerMasks) that opens command 2's list */
    union {
        /* 0x48 */ u64 mask48;               /* tested by the highlighted command's lookup */
        /* 0x48 */ u32 mask48Words[2];
    };
};

typedef char BtlCommandMenuDataOffsets[
    offsetof(BtlCommandMenuData, firstSelection) == 0x04 && offsetof(BtlCommandMenuData, stateBlocked) == 0x20 &&
    offsetof(BtlCommandMenuData, stateMask28) == 0x28 && offsetof(BtlCommandMenuData, listMarker) == 0x40 &&
    offsetof(BtlCommandMenuData, mask48) == 0x48 && sizeof(BtlCommandMenuData) == 0x50 ? 1 : -1];

extern "C" BtlCommandMenuData g_btlCommandMenuData;

#endif
