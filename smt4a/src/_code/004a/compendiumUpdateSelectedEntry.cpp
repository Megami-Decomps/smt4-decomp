/* NON_MATCHING: retail keeps the shared zero in sl and the price/menu results in r9; the build swaps those registers. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "code/Code002a_Smt4a.h"

// Selection state of the animated page UI.
struct AnimatedPageSelection {
    u8 selected;
    u8 pad[3];
    s32 page;               // 0x04
};

// One list entry (0x20 bytes each): only the id halfword is read here.
struct ListEntry {
    u8 unk00[4];
    u16 id;                 // 0x04
    u8 unk06[0x1a];

    u16 getId() const { return id; }
};

// Quest/status list screen: only the members this per-frame handler touches.
struct StatusScreen {
    u8 unk00[0x14];
    u32 state;                  // 0x14
    u32 stateArg;               // 0x18
    u8 unk1c[4];
    u8 list[8];                 // 0x20: flagged value holder
    u8 unk28[0x818 - 0x28];
    u8 unk818[0x12];
    s8 choice;                  // 0x82a: selection of the touch/button helper
    u8 unk82b[0x85c - 0x82b];
    u32 process;                // 0x85c: script process
    u8 unk860;
    u8 page;                    // 0x861
    u8 unk862[2];
    ListEntry entries[1];       // 0x864 -> count lives at 0x864 as a halfword (see below)
};

extern "C" {

extern AnimatedPageSelection g_animatedPageSelection;

s32 flaggedValueHolderGetTotal(void* holder);
s32 FUN_004a8750(u32 id, u32 page, s32 arg, s32 flag, s32 more);
void panelSetTarget(s32 target, s32 arg);
void messageSetActiveMode(s32 mode);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestConfirmPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 inputConfirmPressed(void);
s32 questControlsGetCursorRow(u8* controls);
s32 gameGetMode(void);
void FUN_004d0680(StatusScreen* screen);
void entryTableResetAndInit(s32 a, s32 b, s32 c, s32 d);
s32 demonPurchaseValidate(StatusScreen* screen, u32 id);
u32 dataTable01GetRecordWithAocOverride(u32 id);
u32 demonGetRaceLabel(u32 id, s32 arg);
void libc_strcpy(char* dst, u32 src);
void scrScriptProcessStartEntry(u32 process, s32 entry);
void sendEvent100020F(void);
void sendEvent100020E(void);
void sysPlaySe(s32 id);
void messageMainSetTargetFlags(s32 flags);
void gameGlobalsSetMenuOpenFlag(s32 arg);
void screen4AEnter(StatusScreen* screen);
void uniteCreatePreviewModel(void);
void sortMenuAcquire(s32 a, s32 b);
void useCounterStart(void);
void buttonHelpSetText(s32 a, u32 color);

#define SCREEN_BYTE(screen, offset) (*(reinterpret_cast<u8*>(screen) + (offset)))
#define SCREEN_HALF(screen, offset) (*reinterpret_cast<s16*>(reinterpret_cast<u8*>(screen) + (offset)))

// Id of the highlighted entry.
static s16 currentId(StatusScreen* screen)
{
    ListEntry* entries = screen->entries;
    return entries[flaggedValueHolderGetTotal(screen->list)].getId();
}

// Per-frame handler of the quest/status list: shows the highlighted entry and reacts to
// confirm, menu and cancel.
void compendiumUpdateSelectedEntry(StatusScreen* screen)
{
    s32 select = 0;
    s32 cancel = 0;
    s16 id = currentId(screen);
    s32 price = FUN_004a8750((u16)id, screen->page, 0, (s8)SCREEN_BYTE(screen, 0x94) >= 100, 0);
    if (compendiumEntryIsRegistered((u16)id) != 0) {
        panelSetTarget(-price, 0);
    } else {
        messageSetActiveMode(1);
    }
    s32 menu = inputIsQuestMenuPressed();
    s32 confirm = inputIsQuestConfirmPressed();
    if (SCREEN_HALF(screen, 0x864) > 0) {
        select = inputConfirmPressed();
        cancel = inputIsQuestCancelPressed();
        if (select == 0) select = questControlsGetCursorRow(screen->unk818);
    }
    if (gameGetMode() != 0) {
        FUN_004d0680(screen);
        return;
    }
    if (select != 0) {
        id = currentId(screen);
        entryTableResetAndInit(0x18, FUN_004a8750((u16)id, screen->page, 0, (s8)SCREEN_BYTE(screen, 0x94) >= 100, 0), -1, 0);
        if (demonPurchaseValidate(screen, (u16)id) != 0) {
            char text[128];
            libc_strcpy(text, dataTable01GetRecordWithAocOverride((u16)id));
            scrSetStringSlot(8, text);
            libc_strcpy(text, demonGetRaceLabel((u16)id, 0));
            scrSetStringSlot(0x10, text);
            scrScriptProcessStartEntry(screen->process, SCREEN_BYTE(screen, 0xa870) == 7);
            screen->state = 3;
            screen->stateArg = 0;
        } else {
            if (SCREEN_BYTE(screen, 0xa870) == 6) {
                SCREEN_BYTE(screen, 0xa870) = 0;
                sendEvent100020F();
                return;
            }
            s32 entry = 0;
            switch (SCREEN_BYTE(screen, 0xa870)) {
            case 1: entry = 3; break;
            case 2: entry = 2; break;
            case 3: entry = 4; break;
            case 4: entry = 5; break;
            case 5: entry = 6; break;
            }
            scrScriptProcessStartEntry(screen->process, entry);
            screen->state = 6;
            screen->stateArg = 0;
            sysPlaySe(0xa0);
        }
        messageMainSetTargetFlags(1);
        gameGlobalsSetMenuOpenFlag(1);
        sendEvent100020E();
        return;
    }
    if (menu != 0) {
        screen4AEnter(screen);
        uniteCreatePreviewModel();
        return;
    }
    if (cancel != 0) {
        g_animatedPageSelection.page = -1;
        sortMenuAcquire(0xf, 0);
        useCounterAppendValue(1);
        useCounterAppendValue(2);
        useCounterAppendValue(7);
        useCounterAppendValue(3);
        useCounterStart();
        gameGlobalsSetMenuOpenFlag(1);
        screen->state = 7;
        screen->stateArg = 0;
        buttonHelpSetText(0, 0xf4f4f4ff);
        sendEvent100020E();
        return;
    }
    if (confirm != 0) {
        screen->state = 10;
        screen->stateArg = 0;
        sendEvent100020E();
    }
}

} /* extern "C" */
