/* NON_MATCHING: typed rewrite of the battle debug menu controller, the smt4a variant of FUN_003c64ec with extra Sake/Face/Reserve pages (1520 vs 1602 rows); retail shares the flag-toggle stores between cases and computes the flag word address after the item query. */
#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

/* An action record, as far as the tint colours go (0x1D0 bytes each). */
struct DebugActionTint {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 status;
    /* 0x54 */ u8 unk54[0x18];
    /* 0x6C */ u32 tintA;
    /* 0x70 */ u32 tintB;
    /* 0x74 */ u32 tintC;
    /* 0x78 */ u8 unk78[0x158];
};

/* The battle state, as far as the debug menu touches it. */
struct DebugBattle {
    /* 0x0000 */ u8 unk0000[0x80];
    /* 0x0080 */ u32 job;
    /* 0x0084 */ u8 unk0084[8];
    /* 0x008C */ u32 nextState;
    /* 0x0090 */ u8 unk0090[0x1c];
    /* 0x00AC */ u32 valueAc;
    /* 0x00B0 */ u8 unk00b0[0x3c];
    /* 0x00EC */ s32 groupA;
    /* 0x00F0 */ s32 groupB;
    /* 0x00F4 */ u8 unk00f4[0x84];
    /* 0x0178 */ s32 value178;
    /* 0x017C */ s32 value17c;
    /* 0x0180 */ u8 unk0180[8];
    /* 0x0188 */ u8 value188;
    /* 0x0189 */ u8 unk0189[0x1d4b];
    /* 0x1ED4 */ DebugActionTint *actions;
    /* 0x1ED8 */ u8 unk1ed8[0x26d0];
    /* 0x45A8 */ u64 flags;
};

/* The debug menu being run: its state number, the open list box and the data the sub menus edit. */
struct DebugMenu {
    /* 0x00 */ u32 state;
    /* 0x04 */ s32 menuMode;
    /* 0x08 */ u32 confirmed;
    /* 0x0C */ u32 cameraKind;
    /* 0x10 */ u32 listBox;
    /* 0x14 */ u8 onlyAllies;
    /* 0x15 */ u8 onlyEnemies;
    /* 0x16 */ u8 includeParty;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u32 mask;
    /* 0x1C */ s32 entryIndex;
};

/* The debug globals: the shared prefix, then a table of 64-bit flag masks. */
struct DebugGlobals {
    BattleDebugGlobals prefix;
    u8 unk0C[0x34];
    u64 masks[48];
};

#define DEBUG_STATE_DONE 0x20

extern "C" {
extern DebugGlobals DAT_005715f8;
extern const AsdListBoxEntry DAT_005731c0[3];
extern const AsdListBoxEntry DAT_00572340[20];
extern const AsdListBoxEntry DAT_005725c0[18];
extern const AsdListBoxEntry DAT_00572e80[2];
extern const AsdListBoxEntry DAT_00572ec0[5];
extern const AsdListBoxEntry DAT_005730a0[9];
extern const AsdListBoxEntry DAT_00571980[14];
extern u32 DAT_00573970;
extern f32 DAT_00573974;
extern u32 DAT_00573b80;
extern u8 DAT_00573bd8;
extern u8 DAT_00573bd9;
extern u8 DAT_00573bda;
extern u8 DAT_00573bdb;
extern u32 DAT_00573bdc;
extern f32 DAT_00573be0;
extern f32 DAT_00573c00;
extern u16 DAT_0057a664[12];
extern u8 g_battleEffectSettings;
extern u8 DAT_0057aa01;
extern u8 DAT_0057aa02;
extern u8 DAT_0057aa03;
extern s8 DAT_0057aa04;
extern u32 DAT_0057aa0c;
extern u32 DAT_0057aa14;
extern f32 DAT_0057aa18;
extern u32 DAT_0057aa1c;
extern f32 DAT_0057aa20;
extern f32 DAT_0057aa24;
extern f32 DAT_0057aa28;
extern f32 DAT_0057aa2c;

s32 asdListBoxGetSelectedItemId(u32 listBox);
u32 *asdListBoxGetIntValuePtr(u32 listBox, u32 id);
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry *entries, s32 count);
void asdListBoxSetByteValue(u32 listBox, s32 value);
void asdListBoxSetIntItem(u32 listBox, u32 id, u32 value, u32 minimum, u32 maximum, u8 option);
void asdListBoxSetToggleItem(u32 listBox, u32 id, s32 on);
void asdListBoxSetFloatItem(u32 listBox, u32 id, s32 minimum, s32 maximum, f32 value);
void jobSetText(u32 job, const char *text);
u32 jobIsValid(u32 handle);
u32 jobStop(u32 handle, u16 delay);
void FUN_003592dc(u32 handle);
s32 padButtonIsPressed(s32 button);
s32 dataTable22GetCount(void);
s32 dataTable3Type0Count(void);
void FUN_003ed238(DebugBattle *battle, u32 mask);

void btlDebugNormalizeMarkerFlags(DebugMenu *menu, DebugBattle *battle);
void FUN_004d1470(DebugMenu *menu, DebugBattle *battle);
void FUN_004d1af8(DebugMenu *menu, DebugBattle *battle);
void FUN_004d2124(DebugMenu *menu, DebugBattle *battle);
void FUN_004d290c(DebugMenu *menu, DebugBattle *battle);
void FUN_004d3360(DebugMenu *menu, DebugBattle *battle);
void FUN_004d3950(DebugMenu *menu, DebugBattle *battle);
void FUN_004d3c94(DebugMenu *menu, DebugBattle *battle);
void FUN_004d3df0(DebugMenu *menu, DebugBattle *battle);
void FUN_004d463c(DebugMenu *menu);
void FUN_004d5290(DebugMenu *menu, DebugBattle *battle);
void FUN_004d542c(DebugMenu *menu, DebugBattle *battle, u32 item);
void FUN_004d5578(DebugMenu *menu, DebugBattle *battle);
void FUN_004d5be4(DebugMenu *menu, DebugBattle *battle, u32 item);
void btlCameraDebugApplyMenuItem(DebugMenu *menu, DebugBattle *battle, u32 item);
void btlDebugCreatePanelMenu(DebugMenu *menu, DebugBattle *battle);
void btlDebugCreateUnitMenu(DebugMenu *menu, DebugBattle *battle);
void btlDebugOpenCameraUpDownMenu(DebugMenu *menu, DebugBattle *battle);
void btlReserveEditorOpenList(DebugMenu *menu, DebugBattle *battle);
void debugOptionPageApplySelected(DebugMenu *menu, DebugBattle *battle);
void placementEditorSync(DebugMenu *menu, DebugBattle *battle);
void talkCtrlDebugMenuBuild(DebugMenu *menu, DebugBattle *battle);

/* Closes the menu's list box. */
static __inline void closeList(DebugMenu *menu)
{
    if (jobIsValid(menu->listBox) != 0) {
        FUN_003592dc(menu->listBox);
        jobStop(menu->listBox, 0);
    }
}

/* Opens a list box with the given rows under the battle's debug job (closing the previous one first). */
static __inline void openList(DebugMenu *menu, DebugBattle *battle, const AsdListBoxEntry *entries, s32 count,
                              const char *title)
{
    closeList(menu);
    menu->listBox = asdListBoxCreateDefaultFlags(battle->job, 0x75, 0, 0);
    asdListBoxAddItems(menu->listBox, entries, count);
    asdListBoxSetByteValue(menu->listBox, 1);
    jobSetText(menu->listBox, title);
}

/* Runs one step of the debug menu. Returns -1 once the menu is finished, otherwise 0. */
u32 FUN_004d6104(DebugMenu *menu, DebugBattle *battle)
{
    u32 next;
    s32 index = 0;
    switch (menu->state) {
    case 0:
        if (menu->menuMode == 0)
            next = 1;
        else
            next = 2;
        break;
    case 1: {
        u32 item = asdListBoxGetSelectedItemId(menu->listBox);
        switch (item) {
        case 0: {
            u32 value = *asdListBoxGetIntValuePtr(menu->listBox, item);
            if (DAT_005715f8.prefix.category != 0) {
                asdListBoxSetIntItem(menu->listBox, 0, value, 0, dataTable3Type0Count() - 1, 0);
                battle->groupA = -1;
                battle->groupB = value;
            } else {
                asdListBoxSetIntItem(menu->listBox, 0, value, 0, dataTable22GetCount() - 1, 0);
                battle->groupB = -1;
                battle->groupA = value;
            }
            DAT_005715f8.prefix.selectedId = value;
            break;
        }
        case 1:
            DAT_005715f8.prefix.category = listBoxItemHasOwner(menu->listBox, item);
            break;
        case 2:
            DAT_00573970 = *asdListBoxGetIntValuePtr(menu->listBox, item);
            break;
        case 3:
            DAT_00573b80 = *asdListBoxGetIntValuePtr(menu->listBox, item);
            break;
        case 4:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[13];
            else
                battle->flags &= ~DAT_005715f8.masks[13];
            break;
        case 5:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[14];
            else
                battle->flags &= ~DAT_005715f8.masks[14];
            break;
        case 6:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[15];
            else
                battle->flags &= ~DAT_005715f8.masks[15];
            break;
        case 7:
            battle->value178 = *asdListBoxGetIntValuePtr(menu->listBox, item);
            break;
        case 8:
            battle->value17c = *asdListBoxGetIntValuePtr(menu->listBox, item);
            break;
        case 9:
            battle->value188 = *asdListBoxGetIntValuePtr(menu->listBox, item);
            break;
        case 10:
            battle->valueAc = *asdListBoxGetIntValuePtr(menu->listBox, item);
            break;
        case 11:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[27];
            else
                battle->flags &= ~DAT_005715f8.masks[27];
            break;
        case 12:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[35];
            else
                battle->flags &= ~DAT_005715f8.masks[35];
            break;
        case 13:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[37];
            else
                battle->flags &= ~DAT_005715f8.masks[37];
            break;
        case 14:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[18];
            else
                battle->flags &= ~DAT_005715f8.masks[18];
            break;
        case 15:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[29];
            else
                battle->flags &= ~DAT_005715f8.masks[29];
            break;
        }
        if (padButtonIsPressed(0) != 0) {
            btlDebugNormalizeMarkerFlags(menu, battle);
            next = DEBUG_STATE_DONE;
        } else {
            if (padButtonIsPressed(1) == 0)
                return 0;
            next = DEBUG_STATE_DONE;
            battle->nextState = 0x1e;
        }
        break;
    }
    case 2: {
        u32 item = asdListBoxGetSelectedItemId(menu->listBox);
        asdListBoxGetIntValuePtr(menu->listBox, item);
        switch (item) {
        case 0:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 9;
            }
            break;
        case 1:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->confirmed = 1;
                menu->state = 3;
            }
            break;
        case 2:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x7;
            }
            break;
        case 3:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0xb;
            }
            break;
        case 4:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0xd;
            }
            break;
        case 5:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0xf;
            }
            break;
        case 6:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x11;
            }
            break;
        case 7:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x13;
            }
            break;
        case 8:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x15;
            }
            break;
        case 9:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x17;
            }
            break;
        case 10:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x19;
            }
            break;
        case 11:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x1b;
            }
            break;
        case 12:
            if (padButtonIsPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x1d;
            }
            break;
        case 13:
            if (padButtonIsPressed(0) != 0)
                menu->state = DEBUG_STATE_DONE;
            break;
        }
        if (padButtonIsPressed(1) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    }
    case 3:
        if (menu->confirmed == 1)
            openList(menu, battle, DAT_005731c0, 3, "btl Camera Menu");
        next = 4;
        break;
    case 4: {
        u32 pending = 0;
        s32 selected = asdListBoxGetSelectedItemId(menu->listBox);
        if (menu->confirmed == 1) {
            menu->cameraKind = selected;
            pending = 5;
        }
        if (padButtonIsPressed(0) != 0) {
            closeList(menu);
            menu->state = pending;
            return 0;
        }
        if (padButtonIsPressed(1) == 0)
            return 0;
        closeList(menu);
        next = 0x1f;
        break;
    }
    case 5:
        if (menu->cameraKind != 0) {
            if (menu->cameraKind != 1) {
                if (menu->cameraKind != 2)
                    return 0;
                btlDebugOpenCameraUpDownMenu(menu, battle);
            } else {
                FUN_004d5578(menu, battle);
            }
            next = 6;
        } else {
            FUN_004d5290(menu, battle);
            next = 6;
        }
        break;
    case 6: {
        u32 item = asdListBoxGetSelectedItemId(menu->listBox);
        if (menu->cameraKind != 0) {
            if (menu->cameraKind != 1) {
                if (menu->cameraKind == 2)
                    btlCameraDebugApplyMenuItem(menu, battle, item);
            } else {
                FUN_004d5be4(menu, battle, item);
            }
        } else {
            FUN_004d542c(menu, battle, item);
        }
        if (padButtonIsPressed(0) == 0) {
            if (padButtonIsPressed(1) == 0)
                return 0;
            closeList(menu);
            next = 3;
            break;
        }
        next = DEBUG_STATE_DONE;
        break;
    }
    case 7:
        btlDebugCreateUnitMenu(menu, battle);
        next = 8;
        break;
    case 8: {
        u32 item = asdListBoxGetSelectedItemId(menu->listBox);
        switch (item) {
        case 0:
            DAT_00573974 = *asdListBoxGetFloatValuePtr(menu->listBox, item);
            FUN_003ed238(battle, 0x400);
            break;
        case 1:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[39];
            else
                battle->flags &= ~DAT_005715f8.masks[39];
            break;
        case 2:
            DAT_0057aa0c = *asdListBoxGetIntValuePtr(menu->listBox, 2);
            break;
        case 3:
            DAT_0057aa1c = *asdListBoxGetIntValuePtr(menu->listBox, 3) * 0x1000000 + (DAT_0057aa1c & 0xff0000) + (DAT_0057aa1c & 0xff00) + 0xff;
            do {
                DebugActionTint *action = &battle->actions[index];
                if ((action->status & 1) != 0 && (action->status & 2) != 0) {
                    action->tintA = DAT_0057aa1c;
                    action->tintB = DAT_0057aa1c;
                    action->tintC = DAT_0057aa1c;
                }
                ++index;
            } while (index < 0x6d);
            break;
        case 4:
            DAT_0057aa1c = (DAT_0057aa1c & 0xff000000) + *asdListBoxGetIntValuePtr(menu->listBox, 4) * 0x10000 + (DAT_0057aa1c & 0xff00) + 0xff;
            do {
                DebugActionTint *action = &battle->actions[index];
                if ((action->status & 1) != 0 && (action->status & 2) != 0) {
                    action->tintA = DAT_0057aa1c;
                    action->tintB = DAT_0057aa1c;
                    action->tintC = DAT_0057aa1c;
                }
                ++index;
            } while (index < 0x6d);
            break;
        case 5:
            DAT_0057aa1c = (DAT_0057aa1c & 0xff000000) + (DAT_0057aa1c & 0xff0000) + *asdListBoxGetIntValuePtr(menu->listBox, 5) * 0x100 + 0xff;
            do {
                DebugActionTint *action = &battle->actions[index];
                if ((action->status & 1) != 0 && (action->status & 2) != 0) {
                    action->tintA = DAT_0057aa1c;
                    action->tintB = DAT_0057aa1c;
                    action->tintC = DAT_0057aa1c;
                }
                ++index;
            } while (index < 0x6d);
            break;
        case 6:
            g_battleEffectSettings = *asdListBoxGetIntValuePtr(menu->listBox, 6);
            break;
        case 7:
            DAT_0057aa01 = *asdListBoxGetIntValuePtr(menu->listBox, 7);
            break;
        case 8:
            DAT_0057aa02 = *asdListBoxGetIntValuePtr(menu->listBox, 8);
            break;
        case 9:
            DAT_0057aa03 = *asdListBoxGetIntValuePtr(menu->listBox, 9);
            break;
        case 10:
            DAT_0057aa14 = *asdListBoxGetIntValuePtr(menu->listBox, 10);
            break;
        case 11:
            DAT_0057aa18 = *asdListBoxGetFloatValuePtr(menu->listBox, 11);
            break;
        case 12:
            DAT_0057a664[0] = *asdListBoxGetIntValuePtr(menu->listBox, 12);
            break;
        case 13:
            DAT_0057a664[2] = *asdListBoxGetIntValuePtr(menu->listBox, 13);
            break;
        case 14:
            DAT_0057a664[1] = *asdListBoxGetIntValuePtr(menu->listBox, 14);
            break;
        case 15:
            DAT_0057a664[3] = *asdListBoxGetIntValuePtr(menu->listBox, 15);
            break;
        case 16:
            DAT_0057a664[4] = *asdListBoxGetIntValuePtr(menu->listBox, 16);
            break;
        case 17:
            DAT_0057a664[6] = *asdListBoxGetIntValuePtr(menu->listBox, 17);
            break;
        case 18:
            DAT_0057a664[5] = *asdListBoxGetIntValuePtr(menu->listBox, 18);
            break;
        case 19:
            DAT_0057a664[7] = *asdListBoxGetIntValuePtr(menu->listBox, 19);
            break;
        case 20:
            DAT_0057a664[8] = *asdListBoxGetIntValuePtr(menu->listBox, 20);
            break;
        case 21:
            DAT_0057a664[10] = *asdListBoxGetIntValuePtr(menu->listBox, 21);
            break;
        case 22:
            DAT_0057a664[9] = *asdListBoxGetIntValuePtr(menu->listBox, 22);
            break;
        case 23:
            DAT_0057a664[11] = *asdListBoxGetIntValuePtr(menu->listBox, 23);
            break;
        }
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    }
    case 9:
        FUN_004d1af8(menu, battle);
        next = 10;
        break;
    case 10:
        FUN_004d290c(menu, battle);
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0xb:
        openList(menu, battle, DAT_00572340, 20, "btl Param Menu");
        asdListBoxSetIntItem(menu->listBox, 0, 0xffffffff, 0xffffffff, 0x6c, 0);
        menu->entryIndex = -1;
        next = 0xc;
        break;
    case 0xc:
        FUN_004d3df0(menu, battle);
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0xd:
        openList(menu, battle, DAT_005725c0, 18, "btl Bad Menu");
        asdListBoxSetIntItem(menu->listBox, 0, 0xffffffff, 0xffffffff, 0x6c, 0);
        menu->onlyAllies = 0;
        menu->onlyEnemies = 0;
        menu->includeParty = 0;
        menu->entryIndex = -1;
        next = 0xe;
        menu->mask = 0;
        break;
    case 0xe:
        FUN_004d1470(menu, battle);
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0xf:
        FUN_004d3950(menu, battle);
        next = 0x10;
        break;
    case 0x10:
        FUN_004d463c(menu);
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x11:
        FUN_004d2124(menu, battle);
        next = 0x12;
        break;
    case 0x12:
        FUN_004d3360(menu, battle);
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x13:
        btlDebugCreatePanelMenu(menu, battle);
        next = 0x14;
        break;
    case 0x14: {
        u32 item = asdListBoxGetSelectedItemId(menu->listBox);
        switch (item) {
        case 0:
            DAT_00573bd8 = *asdListBoxGetIntValuePtr(menu->listBox, 0);
            break;
        case 1:
            DAT_00573bd9 = *asdListBoxGetIntValuePtr(menu->listBox, 1);
            break;
        case 2:
            DAT_00573bda = *asdListBoxGetIntValuePtr(menu->listBox, 2);
            break;
        case 3:
            DAT_00573bdb = *asdListBoxGetIntValuePtr(menu->listBox, 3);
            break;
        case 4:
            DAT_00573bdc = *asdListBoxGetIntValuePtr(menu->listBox, 4);
            break;
        case 5:
            DAT_00573be0 = *asdListBoxGetFloatValuePtr(menu->listBox, 5);
            break;
        case 6:
            DAT_00573c00 = *asdListBoxGetFloatValuePtr(menu->listBox, 6);
            break;
        }
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    }
    case 0x15:
        talkCtrlDebugMenuBuild(menu, battle);
        next = 0x16;
        break;
    case 0x16:
        debugOptionPageApplySelected(menu, battle);
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x17:
        openList(menu, battle, DAT_00572e80, 2, "btl Result Menu");
        asdListBoxSetToggleItem(menu->listBox, 0, (battle->flags & DAT_005715f8.masks[33]) != 0);
        asdListBoxSetToggleItem(menu->listBox, 1, (battle->flags & DAT_005715f8.masks[34]) != 0);
        next = 0x18;
        break;
    case 0x18: {
        s32 item = asdListBoxGetSelectedItemId(menu->listBox);
        if (item != 0) {
            if (item == 1) {
                if (listBoxItemHasOwner(menu->listBox, item) != 0)
                    battle->flags |= DAT_005715f8.masks[34];
                else
                    battle->flags &= ~DAT_005715f8.masks[34];
            }
        } else {
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->flags |= DAT_005715f8.masks[33];
            else
                battle->flags &= ~DAT_005715f8.masks[33];
        }
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    }
    case 0x19:
        openList(menu, battle, DAT_00572ec0, 5, "btl Sake Menu");
        asdListBoxSetFloatItem(menu->listBox, 0, 0, 10, DAT_0057aa20);
        asdListBoxSetFloatItem(menu->listBox, 1, 0, 1, DAT_0057aa24);
        asdListBoxSetFloatItem(menu->listBox, 2, 0, 1, DAT_0057aa28);
        asdListBoxSetFloatItem(menu->listBox, 3, -1, 0, DAT_0057aa2c);
        asdListBoxSetToggleItem(menu->listBox, 4, DAT_0057aa04);
        next = 0x1a;
        break;
    case 0x1a: {
        u32 item = asdListBoxGetSelectedItemId(menu->listBox);
        switch (item) {
        case 0:
            DAT_0057aa20 = *asdListBoxGetFloatValuePtr(menu->listBox, item);
            break;
        case 1:
            DAT_0057aa24 = *asdListBoxGetFloatValuePtr(menu->listBox, item);
            break;
        case 2:
            DAT_0057aa28 = *asdListBoxGetFloatValuePtr(menu->listBox, item);
            break;
        case 3:
            DAT_0057aa2c = *asdListBoxGetFloatValuePtr(menu->listBox, item);
            break;
        case 4:
            DAT_0057aa04 = listBoxItemHasOwner(menu->listBox, item);
            break;
        }
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    }
    case 0x1b:
        btlReserveEditorOpenList(menu, battle);
        next = 0x1c;
        break;
    case 0x1c:
        FUN_004d3c94(menu, battle);
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x1d:
        openList(menu, battle, DAT_005730a0, 9, "btl Face Menu");
        asdListBoxSetIntItem(menu->listBox, 0, 0, 0, 3, 0);
        next = 0x1e;
        menu->entryIndex = 0;
        break;
    case 0x1e:
        placementEditorSync(menu, battle);
        if (padButtonIsPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x1f:
        openList(menu, battle, DAT_00571980, 14, "btl Debug Menu");
        menu->state = 0;
        return 0;
    case DEBUG_STATE_DONE:
        return 0xffffffff;
    default:
        return 0;
    }
    menu->state = next;
    return 0;
}
}
