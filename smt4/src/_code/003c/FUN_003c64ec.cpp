/* NON_MATCHING: typed rewrite of the battle debug menu controller (1175 vs 1168 rows). Retail shares the flag-toggle stores between cases, computes the flag word address after the item query instead of before it, passes the list-box item in r1 and keeps one more saved register free. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "shard/W6_W6Match8_BattleDebug.h"

/* The battle state, as far as the debug menu touches it. */
struct DebugBattle {
    /* 0x0000 */ u8 unk0000[0x5c];
    /* 0x005C */ u32 job;
    /* 0x0060 */ u8 unk0060[8];
    /* 0x0068 */ u32 nextState;
    /* 0x006C */ u8 unk006c[0x54];
    /* 0x00C0 */ s32 groupA;
    /* 0x00C4 */ s32 groupB;
    /* 0x00C8 */ u8 unk00c8[0x74];
    /* 0x013C */ s32 value13c;
    /* 0x0140 */ s32 value140;
    /* 0x0144 */ u8 unk0144[8];
    /* 0x014C */ u8 value14c;
    /* 0x014D */ u8 unk014d[0x1d4b];
    /* 0x1E98 */ struct DebugActionTint *actions;
    /* 0x1E9C */ u8 unk1e9c[0x3cc];
    /* 0x2268 */ u32 talkValue;
    /* 0x226C */ u8 unk226c[0xcbc];
    /* 0x2F28 */ s32 guestSelection;
    /* 0x2F2C */ u8 unk2f2c[0x1574];
    /* 0x44A0 */ u32 flags44a0;
    /* 0x44A4 */ u8 unk44a4[4];
    union {
        /* 0x44A8 */ u64 flags;
        struct {
            u32 low;
            u32 high;
        } word;
    };
};

/* An action record, as far as the tint colours go (0x114 bytes each). */
struct DebugActionTint {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 status;
    /* 0x54 */ u8 unk54[0x10];
    /* 0x64 */ u32 tintA;
    /* 0x68 */ u32 tintB;
    /* 0x6C */ u32 tintC;
    /* 0x70 */ u8 unk70[0xA4];
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

#define DEBUG_STATE_DONE 0x1a

extern "C" {
extern const AsdListBoxEntry DAT_004357c8[2];
extern const AsdListBoxEntry DAT_00434e28[13];
extern const AsdListBoxEntry DAT_00434fc8[15];
extern const AsdListBoxEntry DAT_004353a8[5];
extern const AsdListBoxEntry DAT_00435788[2];
extern const AsdListBoxEntry btlDebugMenuEntries[11];
extern const char btlDebugMenuTitle[];
extern u32 DAT_00435dc0;
extern u32 DAT_00435dd8;
extern u32 DAT_00439ce8;
extern u8 DAT_00439ce0;
extern u8 DAT_00439ce1;
extern u8 DAT_00439ce2;
extern u8 DAT_00439ce3;
extern u32 DAT_00439cf0;
extern u32 DAT_00439cf4;
extern u32 DAT_00439cf8;
extern u16 DAT_00439a50[12];

s32 asdListBoxGetSelectedItemId(u32 listBox);
u32 *asdListBoxGetItemValuePtr(u32 listBox, u32 id);
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry *entries, s32 count);
void asdListBoxSetByteValue(u32 listBox, s32 value);
void asdListBoxSetItemMode2(u32 listBox, u32 id, u32 value);
void asdListBoxSetItemMode3(u32 listBox, u32 id, u32 value, u32 minimum, u32 maximum, u8 option);
void jobSetText(u32 job, const char *text);
u32 jobIsValid(u32 handle);
u32 jobStop(u32 handle, u16 delay);
void FUN_0024ef90(u32 handle);
s32 padIsButtonPressed(s32 button);
s32 dataTable03Sub0GetCount(void);
s32 dataTable22GetCount(void);
void *dataTableGet(s32 table, s32 index);
void *dataTableGetEntries(void *section);
u32 dataTableGetCount(void *section);

void FUN_003c3360(DebugMenu *menu, DebugBattle *battle);
void FUN_003c33c8(DebugMenu *menu, DebugBattle *battle);
void FUN_003c39fc(DebugMenu *menu, DebugBattle *battle);
void FUN_003c40ac(DebugMenu *menu, DebugBattle *battle);
void FUN_003c4524(DebugMenu *menu, DebugBattle *battle);
void FUN_003c49bc(DebugMenu *menu);
void FUN_003c4ac4(DebugMenu *menu, DebugBattle *battle);
void FUN_003c4f38(DebugMenu *menu);
void FUN_003c56d8(DebugMenu *menu, DebugBattle *battle);
void FUN_003c5eb0(DebugMenu *menu, DebugBattle *battle);
void FUN_003c5ffc(DebugMenu *menu, DebugBattle *battle, u32 item);
void btlCameraDebugApplyMenuItem(DebugMenu *menu, DebugBattle *battle, u32 item);
void btlDebugCreateUnitMenu(DebugMenu *menu, DebugBattle *battle);
void btlDebugCreateStageMenu(DebugMenu *menu, DebugBattle *battle);
void btlDebugCreatePanelMenu(DebugMenu *menu, DebugBattle *battle);
void talkCtrlDebugMenuBuild(DebugMenu *menu, DebugBattle *battle);
void btlDebugCreateAttackCameraMenu(DebugMenu *menu, DebugBattle *battle);

/* Closes the menu's list box. */
static __inline void closeList(DebugMenu *menu)
{
    if (jobIsValid(menu->listBox) != 0) {
        FUN_0024ef90(menu->listBox);
        jobStop(menu->listBox, 0);
    }
}

/* Opens a list box with the given rows under the battle's debug job. */
static __inline void openList(DebugMenu *menu, DebugBattle *battle, const AsdListBoxEntry *entries, s32 count,
                              const char *title)
{
    menu->listBox = asdListBoxCreateDefault(battle->job, 0x73, 0, 0);
    asdListBoxAddItems(menu->listBox, entries, count);
    asdListBoxSetByteValue(menu->listBox, 1);
    jobSetText(menu->listBox, title);
}

/* Runs one step of the debug menu. Returns -1 once the menu is finished, otherwise 0. */
u32 FUN_003c64ec(DebugMenu *menu, DebugBattle *battle)
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
            u32 value = *asdListBoxGetItemValuePtr(menu->listBox, item);
            if (g_btlDebugState.category != 0) {
                asdListBoxSetItemMode3(menu->listBox, 0, value, 0, dataTable03Sub0GetCount() - 1, 0);
                battle->groupA = -1;
                battle->groupB = value;
            } else {
                asdListBoxSetItemMode3(menu->listBox, 0, value, 0, dataTable22GetCount() - 1, 0);
                battle->groupB = -1;
                battle->groupA = value;
            }
            g_btlDebugState.selectedId = value;
            break;
        }
        case 1:
            g_btlDebugState.category = listBoxItemHasOwner(menu->listBox, item);
            break;
        case 2:
            DAT_00435dc0 = *asdListBoxGetItemValuePtr(menu->listBox, item);
            break;
        case 3:
            DAT_00435dd8 = *asdListBoxGetItemValuePtr(menu->listBox, item);
            break;
        case 4:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->word.low |= 0x4000;
            else
                battle->word.low &= ~0x4000u;
            break;
        case 5:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->word.low |= 0x8000;
            else
                battle->word.low &= ~0x8000u;
            break;
        case 6:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->word.low |= 0x10000;
            else
                battle->word.low &= ~0x10000u;
            break;
        case 7:
            battle->value13c = *asdListBoxGetItemValuePtr(menu->listBox, item);
            break;
        case 8:
            battle->value140 = *asdListBoxGetItemValuePtr(menu->listBox, item);
            break;
        case 9:
            battle->value14c = *asdListBoxGetItemValuePtr(menu->listBox, item);
            break;
        case 10: {
            u32 value = *asdListBoxGetItemValuePtr(menu->listBox, item);
            void *section = dataTableGet(0x1c, 2);
            dataTableGetEntries(section);
            asdListBoxSetItemMode3(menu->listBox, 10, value, 0, dataTableGetCount(section), 0);
            u32 id = value & 0xffff;
            if (id != 0) {
                dataTableGet(0x1c, 2);
                u16 *record = reinterpret_cast<u16 *>(reinterpret_cast<u8 *>(dataTableGetEntries(section)) + id * 0x10 - 0x10);
                if (record != NULL)
                    g_btlDebugState.selection = *record;
                else
                    g_btlDebugState.selection = 0;
            } else {
                g_btlDebugState.selection = 0;
            }
            battle->guestSelection = g_btlDebugState.selection;
            break;
        }
        case 11:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->word.low |= 0x20000000;
            else
                battle->word.low &= ~0x20000000u;
            break;
        case 12:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->word.high |= 0x20;
            else
                battle->word.high &= ~0x20u;
            break;
        case 13:
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->word.low |= 0x100000;
            else
                battle->word.low &= ~0x100000u;
            break;
        case 14:
            if (listBoxItemHasOwner(menu->listBox, item) != 0) {
                battle->word.low |= 0x80000000;
            } else {
                battle->word.low &= 0x7fffffff;
                battle->word.high = 0;
            }
            break;
        }
        if (padIsButtonPressed(0) != 0) {
            FUN_003c3360(menu, battle);
            next = DEBUG_STATE_DONE;
        } else {
            if (padIsButtonPressed(1) == 0)
                return 0;
            next = DEBUG_STATE_DONE;
            battle->nextState = 0x16;
        }
        break;
    }
    case 2: {
        u32 item = asdListBoxGetSelectedItemId(menu->listBox);
        asdListBoxGetItemValuePtr(menu->listBox, item);
        switch (item) {
        case 0:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 9;
            }
            break;
        case 1:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->confirmed = 1;
                menu->state = 3;
            }
            break;
        case 2:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 7;
            }
            break;
        case 3:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 0xb;
            }
            break;
        case 4:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 0xd;
            }
            break;
        case 5:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 0xf;
            }
            break;
        case 6:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x11;
            }
            break;
        case 7:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x13;
            }
            break;
        case 8:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x15;
            }
            break;
        case 9:
            if (padIsButtonPressed(0) != 0) {
                closeList(menu);
                menu->state = 0x17;
            }
            break;
        case 10:
            if (padIsButtonPressed(0) != 0) {
                menu->state = DEBUG_STATE_DONE;
            }
            break;
        }
        if (padIsButtonPressed(1) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    }
    case 3:
        if (menu->confirmed == 1)
            openList(menu, battle, DAT_004357c8, 2, "btl Camera Menu");
        next = 4;
        break;
    case 4: {
        u32 pending = 0;
        s32 selected = asdListBoxGetSelectedItemId(menu->listBox);
        if (menu->confirmed == 1) {
            menu->cameraKind = selected;
            pending = 5;
        }
        if (padIsButtonPressed(0) != 0) {
            closeList(menu);
            menu->state = pending;
            return 0;
        }
        if (padIsButtonPressed(1) == 0)
            return 0;
        closeList(menu);
        next = 0x19;
        break;
    }
    case 5:
        if (menu->cameraKind != 0) {
            if (menu->cameraKind != 1)
                return 0;
            FUN_003c5eb0(menu, battle);
        } else {
            btlDebugCreateAttackCameraMenu(menu, battle);
        }
        next = 6;
        break;
    case 6: {
        u32 item = asdListBoxGetSelectedItemId(menu->listBox);
        if (menu->cameraKind != 0) {
            if (menu->cameraKind == 1)
                btlCameraDebugApplyMenuItem(menu, battle, item);
        } else {
            FUN_003c5ffc(menu, battle, item);
        }
        if (padIsButtonPressed(0) == 0) {
            if (padIsButtonPressed(1) == 0)
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
            DAT_00439ce8 = *asdListBoxGetItemValuePtr(menu->listBox, 0);
            break;
        case 1:
            DAT_00439cf8 = *asdListBoxGetItemValuePtr(menu->listBox, 1) * 0x1000000 + (DAT_00439cf8 & 0xff0000) +
                           (DAT_00439cf8 & 0xff00) + 0xff;
            do {
                DebugActionTint *action = &battle->actions[index];
                if ((action->status & 1) != 0 && (action->status & 2) != 0) {
                    action->tintA = DAT_00439cf8;
                    action->tintB = DAT_00439cf8;
                    action->tintC = DAT_00439cf8;
                }
                ++index;
            } while (index < 0x6d);
            break;
        case 2:
            DAT_00439cf8 = (DAT_00439cf8 & 0xff000000) + *asdListBoxGetItemValuePtr(menu->listBox, 2) * 0x10000 +
                           (DAT_00439cf8 & 0xff00) + 0xff;
            do {
                DebugActionTint *action = &battle->actions[index];
                if ((action->status & 1) != 0 && (action->status & 2) != 0) {
                    action->tintA = DAT_00439cf8;
                    action->tintB = DAT_00439cf8;
                    action->tintC = DAT_00439cf8;
                }
                ++index;
            } while (index < 0x6d);
            break;
        case 3:
            DAT_00439cf8 = (DAT_00439cf8 & 0xff000000) + (DAT_00439cf8 & 0xff0000) +
                           *asdListBoxGetItemValuePtr(menu->listBox, 3) * 0x100 + 0xff;
            do {
                DebugActionTint *action = &battle->actions[index];
                if ((action->status & 1) != 0 && (action->status & 2) != 0) {
                    action->tintA = DAT_00439cf8;
                    action->tintB = DAT_00439cf8;
                    action->tintC = DAT_00439cf8;
                }
                ++index;
            } while (index < 0x6d);
            break;
        case 4:
            DAT_00439ce0 = *asdListBoxGetItemValuePtr(menu->listBox, 4);
            break;
        case 5:
            DAT_00439ce1 = *asdListBoxGetItemValuePtr(menu->listBox, 5);
            break;
        case 6:
            DAT_00439ce2 = *asdListBoxGetItemValuePtr(menu->listBox, 6);
            break;
        case 7:
            DAT_00439ce3 = *asdListBoxGetItemValuePtr(menu->listBox, 7);
            break;
        case 8:
            DAT_00439cf0 = *asdListBoxGetItemValuePtr(menu->listBox, 8);
            break;
        case 9:
            DAT_00439cf4 = *reinterpret_cast<u32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(menu->listBox), 9));
            break;
        case 10:
            DAT_00439a50[0] = *asdListBoxGetItemValuePtr(menu->listBox, 10);
            break;
        case 11:
            DAT_00439a50[2] = *asdListBoxGetItemValuePtr(menu->listBox, 11);
            break;
        case 12:
            DAT_00439a50[1] = *asdListBoxGetItemValuePtr(menu->listBox, 12);
            break;
        case 13:
            DAT_00439a50[3] = *asdListBoxGetItemValuePtr(menu->listBox, 13);
            break;
        case 14:
            DAT_00439a50[4] = *asdListBoxGetItemValuePtr(menu->listBox, 14);
            break;
        case 15:
            DAT_00439a50[6] = *asdListBoxGetItemValuePtr(menu->listBox, 15);
            break;
        case 16:
            DAT_00439a50[5] = *asdListBoxGetItemValuePtr(menu->listBox, 16);
            break;
        case 17:
            DAT_00439a50[7] = *asdListBoxGetItemValuePtr(menu->listBox, 17);
            break;
        case 18:
            DAT_00439a50[8] = *asdListBoxGetItemValuePtr(menu->listBox, 18);
            break;
        case 19:
            DAT_00439a50[10] = *asdListBoxGetItemValuePtr(menu->listBox, 19);
            break;
        case 20:
            DAT_00439a50[9] = *asdListBoxGetItemValuePtr(menu->listBox, 20);
            break;
        case 21:
            DAT_00439a50[11] = *asdListBoxGetItemValuePtr(menu->listBox, 21);
            break;
        }
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    }
    case 9:
        FUN_003c39fc(menu, battle);
        next = 10;
        break;
    case 10:
        FUN_003c40ac(menu, battle);
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0xb:
        openList(menu, battle, DAT_00434e28, 13, "btl Param Menu");
        asdListBoxSetItemMode3(menu->listBox, 0, 0xffffffff, 0xffffffff, 0x6c, 0);
        menu->entryIndex = -1;
        next = 0xc;
        break;
    case 0xc:
        FUN_003c4ac4(menu, battle);
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0xd:
        openList(menu, battle, DAT_00434fc8, 15, "btl Bad Menu");
        asdListBoxSetItemMode3(menu->listBox, 0, 0xffffffff, 0xffffffff, 0x6c, 0);
        menu->onlyAllies = 0;
        menu->onlyEnemies = 0;
        menu->includeParty = 0;
        menu->entryIndex = -1;
        next = 0xe;
        menu->mask = 0;
        break;
    case 0xe:
        FUN_003c33c8(menu, battle);
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0xf:
        btlDebugCreateStageMenu(menu, battle);
        next = 0x10;
        break;
    case 0x10:
        FUN_003c4f38(menu);
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x11:
        openList(menu, battle, DAT_004353a8, 5, "btl Talk Menu");
        asdListBoxSetItemMode2(menu->listBox, 0, (battle->word.low & 0x1000) >> 12);
        asdListBoxSetItemMode2(menu->listBox, 1, (battle->word.low & 0x2000) >> 13);
        asdListBoxSetItemMode3(menu->listBox, 2, battle->talkValue, 0, 600, 0);
        asdListBoxSetItemMode2(menu->listBox, 3, (battle->flags44a0 & 0x40000) >> 18);
        asdListBoxSetItemMode2(menu->listBox, 4, (battle->word.low & 0x200000) >> 21);
        next = 0x12;
        break;
    case 0x12:
        FUN_003c4524(menu, battle);
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x13:
        btlDebugCreatePanelMenu(menu, battle);
        next = 0x14;
        break;
    case 0x14:
        FUN_003c49bc(menu);
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x15:
        talkCtrlDebugMenuBuild(menu, battle);
        next = 0x16;
        break;
    case 0x16:
        FUN_003c56d8(menu, battle);
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    case 0x17:
        openList(menu, battle, DAT_00435788, 2, "btl Result Menu");
        asdListBoxSetItemMode2(menu->listBox, 0, (battle->flags & 0x800000000ULL) != 0);
        asdListBoxSetItemMode2(menu->listBox, 1, (battle->flags & 0x1000000000ULL) != 0);
        next = 0x18;
        break;
    case 0x18: {
        s32 item = asdListBoxGetSelectedItemId(menu->listBox);
        if (item != 0) {
            if (item == 1)
                if (listBoxItemHasOwner(menu->listBox, 1) != 0)
                battle->word.high |= 0x10;
            else
                battle->word.high &= ~0x10u;
        } else {
            if (listBoxItemHasOwner(menu->listBox, item) != 0)
                battle->word.high |= 8;
            else
                battle->word.high &= ~8u;
        }
        if (padIsButtonPressed(0) == 0)
            return 0;
        next = DEBUG_STATE_DONE;
        break;
    }
    case 0x19:
        openList(menu, battle, btlDebugMenuEntries, 11, btlDebugMenuTitle);
        next = 0;
        break;
    case DEBUG_STATE_DONE:
        return 0xffffffff;
    default:
        return 0;
    }
    menu->state = next;
    return 0;
}
}
