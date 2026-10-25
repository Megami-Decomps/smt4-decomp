/* NON_MATCHING: close: all five stat arms and calls match; built hoists the isUnit|variant OR above the early checks (retail tests isUnit and variant separately, then ORs in place after the record check) */
#include "gamedata/PlayerInitialization.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* A copy of a battle-unit record kept by the panel (0x604 bytes); only the two stat arrays are named. */
struct UnitPreview {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u16 stats[5];
    /* 0x00E */ u8 unk00E[4];
    /* 0x012 */ u16 baseStats[5];
    /* 0x01C */ u8 unk01C[0x5E8];
};

/* The party panel as this function sees it: the selected item and the preview copies. */
struct PreviewPanel {
    /* 0x0000 */ u8 unk0000[0x36];
    /* 0x0036 */ u16 item;
    /* 0x0038 */ u8 unk0038[0x1128];
    /* 0x1160 */ PlayerInitialRecordIV player;
    /* 0x11EC */ UnitPreview unit;
};
typedef char PreviewPanelLayout[offsetof(PreviewPanel, player) == 0x1160 && offsetof(PreviewPanel, unit) == 0x11EC &&
    sizeof(UnitPreview) == 0x604 ? 1 : -1];

/* An item record of data table 8, section 1. */
struct ItemRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 kind;
    /* 0x62 */ u8 unk62[0xC];
    /* 0x6E */ u8 flags;
};

extern "C" {

extern PreviewPanel *g_partyPanel;

ItemRecord *dataTable08Sub1GetRecord(u32 id);
void *gameGetUnitRecord(s32 id);
void *gameGetPlayerData(void);
void __aeabi_memcpy4(void *dest, const void *src, u32 size);
void FUN_0029c4e4(UnitPreview *unit, s32 arg);
void FUN_0029a0cc(PlayerInitialRecordIV *player);

/* Shows an item's stat boost preview: copies the player's (or a unit's) record into the panel, adds 3 to the stat
 * the item raises (in both its base and its current value) and refreshes the panel. */
void FUN_0026cba4(s32 id, s32 isUnit, s32 variant)
{
    PreviewPanel *panel = g_partyPanel;
    u32 item = panel->item;
    ItemRecord *record;

    if (item == 0 || (id < 0 && !(isUnit == 0 && variant == 0))) {
        return;
    }
    record = dataTable08Sub1GetRecord(item);
    if ((record->flags & 2) == 0) {
        FUN_0029c4c8(0);
        return;
    }
    isUnit |= variant;
    if (isUnit != 0) {
        __aeabi_memcpy4(&panel->unit, gameGetUnitRecord(id), 0x604);
    } else {
        __aeabi_memcpy4(&panel->player, gameGetPlayerData(), 0x8C);
    }
    switch (record->kind) {
    case 0x1F:
        if (isUnit != 0) {
            panel->unit.stats[0] += 3;
            panel->unit.baseStats[0] += 3;
        } else {
            panel->player.baseStats.stats[0] += 3;
            panel->player.stats[0] += 3;
        }
        break;
    case 0x20:
        if (isUnit != 0) {
            panel->unit.stats[2] += 3;
            panel->unit.baseStats[2] += 3;
        } else {
            panel->player.baseStats.stats[2] += 3;
            panel->player.stats[2] += 3;
        }
        break;
    case 0x21:
        if (isUnit != 0) {
            panel->unit.stats[1] += 3;
            panel->unit.baseStats[1] += 3;
        } else {
            panel->player.baseStats.stats[1] += 3;
            panel->player.stats[1] += 3;
        }
        break;
    case 0x22:
        if (isUnit != 0) {
            panel->unit.stats[3] += 3;
            panel->unit.baseStats[3] += 3;
        } else {
            panel->player.baseStats.stats[3] += 3;
            panel->player.stats[3] += 3;
        }
        break;
    case 0x23:
        if (isUnit != 0) {
            panel->unit.stats[4] += 3;
            panel->unit.baseStats[4] += 3;
        } else {
            panel->player.baseStats.stats[4] += 3;
            panel->player.stats[4] += 3;
        }
        break;
    }
    FUN_0029c4c8(1);
    if (isUnit != 0) {
        FUN_0029c4e4(&panel->unit, 0);
    } else {
        FUN_0029a0cc(&panel->player);
    }
}

} /* extern "C" */
