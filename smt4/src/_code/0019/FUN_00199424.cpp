/* NON_MATCHING: page-entry count blocks match, but retail cross-jumps the page-0 tail into the other page's `add r1,#1` (bne back) while the build keeps it inline, the first slot-table read orders base/index swapped (page vs table+0x9107), and the page-0 loop counter lands in r2/r3 swapped. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/SaveSlotTableIV.h"

namespace {
/* A list box widget: only used through its address. */
struct ListBox {
    u8 unk00[0x64];
};

/* A scroll owner (0x64 bytes each, one per page). */
struct ScrollOwner {
    u8 unk00[0x64];
};

/* The party menu's work block (only the fields this setup touches). */
struct PartyMenu {
    /* 0x0000 */ u8 unk0000[0x305c];
    /* 0x305c */ s32 page;                /* 0: the first page, which also offers the capture entry */
    /* 0x3060 */ u8 unk3060[0xc];
    /* 0x306c */ u32 owner;
    /* 0x3070 */ u8 unk3070[0x18];
    /* 0x3088 */ ScrollOwner scrollOwners[2];
    /* 0x3150 */ u8 unk3150[0xc8];
    /* 0x3218 */ ListBox pageBox;
    /* 0x327c */ ListBox headerBox;
    /* 0x32e0 */ ListBox skillBox;
    /* 0x3344 */ u8 unk3344[0xc8];
    /* 0x340c */ ListBox *activeBox;
    /* 0x3410 */ u8 unk3410[0xc];
    /* 0x341c */ u16 pages[3][8];         /* per page: the entries on offer, 0 = empty */
    /* 0x344c */ u8 unk344c[0x34];
    /* 0x3480 */ u16 usable[60];          /* the usable ids */
};

/* The player record: two ids at +2 and +4. */
struct PlayerData {
    u8 unk00[2];
    s16 first;
    u16 second;
};

/* A unit record of the slot table. */
struct UnitRecord;
}

extern "C" {
struct PartyMenuListState {
    /* 0x00 */ s8 unk00[8];
    /* 0x08 */ s32 captureBase;
    /* 0x0c */ s32 headerBase;
};
extern PartyMenuListState g_partyMenuListState;
u32 FUN_003bf1e4(void);
void FUN_0028e9ec(PartyMenu *menu);
void partyCaptureEligibleSkills(PartyMenu *menu);
s32 gameFlagIsSet(u32 flag);
PlayerData *gameGetPlayerData(void);
void FUN_0029f848(ListBox *box, s32 count, s32 a, s32 b, s32 c, s32 d);
void FUN_0029eb5c(ListBox *box, s32 value);
s32 flagValueIsPositive(u32 id);
s32 FUN_0028e9a0(u32 id);
UnitRecord *gameGetUnitRecord(s32 index);
s32 FUN_00394d90(u32 id, UnitRecord *unit);
s16 btlMainStateGetPartyCaptureId(BtlMainState *state);
void FUN_002b7bca(void *array, s32 count, s32 elementSize, s32 (*compare)(const void *, const void *));
s32 FUN_0021960c(const void *a, const void *b);
void scrollOwnerSelectIndex(ScrollOwner *owner, s32 index);
s32 FUN_0023dcb8(void);

/* Whether the capture entry can be offered on the first page. */
static s32 captureEntryAvailable(void)
{
    if (gameFlagIsSet(0x410) != 0) {
        PlayerData *player = gameGetPlayerData();
        return player->first != 0 && player->second != 0;
    }
    return 0;
}

/* Builds the party menu's lists: the page and header boxes sized for the current battle state, the usable
   ids for the current member, and selects the first entry of the current page. */
void FUN_00199424(PartyMenu *menu)
{
    menu->owner = FUN_003bf1e4();
    FUN_0028e9ec(menu);
    partyCaptureEligibleSkills(menu);
    if ((btlGetMainState()->editorControl.flags & 0x40) != 0) {
        if (menu->page == 0 && captureEntryAvailable()) {
            FUN_0029f848(&menu->pageBox, 0x191, 6, 1, 1, 1);
            FUN_0029eb5c(&menu->pageBox, g_partyMenuListState.captureBase + 2);
        } else {
            FUN_0029f848(&menu->pageBox, 400, 6, 1, 1, 1);
            FUN_0029eb5c(&menu->pageBox, g_partyMenuListState.captureBase + 1);
        }
    } else {
        s32 total;
        if (menu->page != 0) {
            total = 1;
            for (s32 i = 0; i < 8; i++) {
                if (menu->pages[menu->page][i] != 0) {
                    total++;
                }
            }
        } else {
            total = 2;
            if (!captureEntryAvailable()) {
                total = 1;
            }
            for (s32 i = 0; i < 8; i++) {
                if (menu->pages[0][i] != 0) {
                    total++;
                }
            }
        }
        FUN_0029f848(&menu->pageBox, total, 6, 1, 0, 1);
    }
    if ((btlGetMainState()->editorControl.flags & 0x40) != 0) {
        FUN_0029f848(&menu->headerBox, btlMainStateGetPartyCaptureId(btlGetMainState()), 6, 1, 1, 1);
        FUN_0029eb5c(&menu->headerBox, g_partyMenuListState.headerBase);
    } else {
        FUN_0029f848(&menu->headerBox, 1, 6, 1, 0, 1);
    }
    memClear(menu->usable, 0x78);
    s32 usableCount = 0;
    for (u32 id = 1; id <= 0x3c; id++) {
        if (flagValueIsPositive(id) != 0 && FUN_0028e9a0(id) != 0) {
            if (menu->page != 0) {
                if (gameGetSlotTable()->active[menu->page - 1] >= 0) {
                    UnitRecord *unit = gameGetUnitRecord(gameGetSlotTable()->active[menu->page - 1]);
                    if (unit != NULL && FUN_00394d90(id, unit) != 0) {
                        menu->usable[usableCount] = (s16)id;
                        usableCount++;
                    }
                }
            } else {
                menu->usable[usableCount] = (s16)id;
                usableCount++;
            }
        }
    }
    FUN_0029f848(&menu->skillBox, usableCount, 6, 1, 0, 1);
    FUN_002b7bca(menu->usable, usableCount, 2, FUN_0021960c);
    scrollOwnerSelectIndex(&menu->scrollOwners[menu->page], 0);
    if (FUN_0023dcb8() != 0) {
        scrollOwnerSelectIndex(&menu->scrollOwners[0], 1);
    }
    menu->activeBox = &menu->pageBox;
}

} /* extern "C" */
