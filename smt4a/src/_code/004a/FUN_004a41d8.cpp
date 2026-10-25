/* NON_MATCHING: readable rewrite from retail disassembly compiles (214 vs 209 rows); retail keeps the state byte pointer in a different register and does not spill fp */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/FUN_0031f208.h"

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
s32 FUN_002a4b28(u32 id);
void panelSetTarget(s32 target, s32 arg);
void messageSetActiveMode(s32 mode);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestConfirmPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 FUN_004d0584(void);
s32 gameGetMode(void);
void FUN_004d0680(StatusScreen* screen);
void FUN_00359974(s32 a, s32 b, s32 c, s32 d);
s32 FUN_004a34a0(StatusScreen* screen, u32 id);
u32 FUN_00180118(u32 id);
u32 FUN_0014bf3c(u32 id, s32 arg);
void libc_strcpy(char* dst, u32 src);
void scrScriptProcessStartEntry(u32 process, s32 entry);
void sendEvent100020F(void);
void sendEvent100020E(void);
void sysPlaySe(s32 id);
void messageMainSetTargetFlags(s32 flags);
void FUN_003343f0(s32 arg);
void screen4AEnter(StatusScreen* screen);
void uniteCreatePreviewModel(void);
void sortMenuAcquire(s32 a, s32 b);
void useCounterStart(void);
void FUN_0019de98(s32 a, u32 color);

#define SCREEN_BYTE(screen, offset) (*(reinterpret_cast<u8*>(screen) + (offset)))
#define SCREEN_HALF(screen, offset) (*reinterpret_cast<s16*>(reinterpret_cast<u8*>(screen) + (offset)))

// Id of the highlighted entry.
static s16 currentId(StatusScreen* screen)
{
    return reinterpret_cast<ListEntry*>(reinterpret_cast<u8*>(screen) + 0x864 + flaggedValueHolderGetTotal(screen->list) * 0x20 - 0)->id;
}

// Per-frame handler of the quest/status list: shows the highlighted entry and reacts to
// confirm, menu and cancel.
void FUN_004a41d8(StatusScreen* screen)
{
    s32 select = 0;
    s32 cancel = 0;
    u8* mode = &SCREEN_BYTE(screen, 0xa870);
    s16 id = currentId(screen);
    s32 shown = FUN_004a8750((u16)id, screen->page, 0, (s8)SCREEN_BYTE(screen, 0x94) >= 100, 0);
    if (FUN_002a4b28((u16)id) != 0) {
        panelSetTarget(-shown, 0);
    } else {
        messageSetActiveMode(1);
    }
    s32 menu = inputIsQuestMenuPressed();
    s32 confirm = inputIsQuestConfirmPressed();
    if (SCREEN_HALF(screen, 0x864) > 0) {
        select = FUN_004d0584();
        cancel = inputIsQuestCancelPressed();
        if (select == 0) select = screen->choice;
    }
    if (gameGetMode() != 0) {
        FUN_004d0680(screen);
        return;
    }
    if (select != 0) {
        id = currentId(screen);
        FUN_00359974(0x18, FUN_004a8750((u16)id, screen->page, 0, (s8)SCREEN_BYTE(screen, 0x94) >= 100, 0), -1, 0);
        if (FUN_004a34a0(screen, (u16)id) != 0) {
            char text[128];
            libc_strcpy(text, FUN_00180118((u16)id));
            FUN_003180c4(8, text);
            libc_strcpy(text, FUN_0014bf3c((u16)id, 0));
            FUN_003180c4(0x10, text);
            scrScriptProcessStartEntry(screen->process, *mode == 7);
            screen->state = 3;
            screen->stateArg = 0;
        } else {
            if (*mode == 6) {
                *mode = 0;
                sendEvent100020F();
                return;
            }
            s32 entry = 0;
            switch (*mode) {
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
        FUN_003343f0(1);
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
        FUN_0031f208(1);
        FUN_0031f208(2);
        FUN_0031f208(7);
        FUN_0031f208(3);
        useCounterStart();
        FUN_003343f0(1);
        screen->state = 7;
        screen->stateArg = 0;
        FUN_0019de98(0, 0xf4f4f4ff);
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
