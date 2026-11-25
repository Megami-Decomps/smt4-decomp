/* NON_MATCHING: 4 lines: the pulse timer's reset to 30 goes through r1 in retail, r0 here. 0x6EC is the screen's
 * SaveLoadTransitionValues, set through saveLoadUiSetTransitionValues as the other save/load screens do (one stm
 * of both zero words and the pulse). The screen is SaveLoadControllerA (FUN_0041e9d4 takes it), whose shared
 * layout stops at 0x450. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code002c.h"
#include "shard/Shard004A.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SavedUnitSelection.h"
#include "shard/SaveSlotHeaderWork.h"

/* The selection screen work (accessed fields). */
struct SelectScreen {
    u8 unk00[7];
    u8 state;               // 0x07
    s32 stateTimer;         // 0x08
    u8 unk0C;               // 0x0C
    u8 previousState;       // 0x0D
    u8 unk0E[0x1A];
    union {
        u8 playerCopy[0xE]; // 0x28: copied into the player data
        struct {
            u8 unk28[6];
            u16 idA;        // 0x2E
            u16 idB;        // 0x30
            u16 idC;        // 0x32
            u8 unk34[2];
        } ids;
    };
    u8 unk36[0x26];
    u8 openRequested;       // 0x5C
    u8 unk5D[0xB];
    u8 opened;              // 0x68
    u8 unk69[0x283];
    u8 entryFlags[12];      // 0x2EC
    s32 selected;           // 0x2F8
    u8 unk2FC[4];
    struct {
        u8 unk00[0xC];
        s8 locked;          // 0x30C
        u8 unk0D[0x13F];
    } panel;                // 0x300
    s8 confirmHeld;         // 0x44C
    s8 cancelHeld;          // 0x44D
    u8 unk44E[0x1CA];
    s32 pulseTimer;         // 0x618
    f32 pulse;              // 0x61C
    u8 unk620[0xCC];
    SaveLoadTransitionValues transition; // 0x6EC: its values cleared, its progress following the pulse
};

extern "C" {
s32 padButtonIsPressed(s32 button);
void eventQueueAddUnique(u32 event);
void buttonHelpSetText(s32 a, u32 color);
void FUN_0023b45c(s32 value);
s32 buttonHelpIsActionActive(s32 value);
void statusCameraRestore(s32 value);
void FUN_0033449c(s32 value);
void statusModelPreviewOutfitPart(s32 index, u32 value);
void saveLoadApplySelectedPlayerRecord(SelectScreen *screen);
void FUN_0041e450(SelectScreen *screen);
void FUN_0041e7c0(SelectScreen *screen);
void FUN_0041e9d4(SelectScreen *screen);
void __aeabi_memcpy4(void *dest, const void *src, u32 size);
}

/* Moves the screen to `state`, remembering the one it leaves (FUN_0041e9d4 makes the same transition). */
static __inline void selectScreenChangeState(SelectScreen *screen, u8 state)
{
    u8 previous = screen->state;
    screen->state = state;
    screen->previousState = previous;
    screen->stateTimer = 0;
    screen->unk0C = 0;
}

extern "C" void FUN_0041f22c(SelectScreen *screen)
{
    if (objBStateAllowsAction() != 0) {
        bool skip = false;
        if (screen->openRequested != 0) {
            screen->openRequested = 0;
            if (screen->panel.locked != 0) {
                skip = true;
            } else {
                statusCameraRestore(1);
                screen->opened = 1;
                gameGlobalsSetMenuOpenFlag(1);
            }
        }
        if (!skip && screen->panel.locked == 0 && 0 == screen->opened &&
            screen->entryFlags[screen->selected] != 0) {
            statusCameraRestore(1);
            screen->opened = 1;
            gameGlobalsSetMenuOpenFlag(1);
        }
    }
    screen->pulseTimer--;
    if (screen->pulseTimer <= 0) {
        screen->pulseTimer = 30;
        screen->pulse = 1.0f;
    }
    if (screen->pulseTimer > 15)
        screen->pulse = screen->pulse - 0.06666667f;
    if (screen->pulseTimer < 15)
        screen->pulse = screen->pulse + 0.06666667f;
    saveLoadUiSetTransitionValues(&screen->transition, 0, screen->pulse);
    FUN_0041e450(screen);
    FUN_0041e7c0(screen);
    saveLoadRefreshHighlightedPlayerPreview((SavedUnitSelection *)screen);
    saveLoadApplySelectedPlayerRecord(screen);
    if ((objBStateAllowsAction() != 0 && padButtonIsPressed(1) != 0) || buttonHelpIsActionActive(2) != 0) {
        eventQueueAddUnique(0x100020F);
        FUN_0033449c(0);
        FUN_0023b45c(1);
        gameGlobalsSetOverlayActive(1);
        statusCameraRestore(0);
        screen->opened = 0;
        if (screen->entryFlags[screen->selected] == 0)
            FUN_0023b45c(0);
        __aeabi_memcpy4(gameGetPlayerData(), screen->playerCopy, 0xE);
        statusModelPreviewOutfitPart(1, screen->ids.idB);
        statusModelPreviewOutfitPart(2, screen->ids.idC);
        statusModelPreviewOutfitPart(0, screen->ids.idA);
        screen->openRequested = 1;
        buttonHelpSetText(0, 0xF4F4F4FF);
        selectScreenChangeState(screen, 5);
    } else {
        if (padButtonIsPressed(0) != 0 || screen->confirmHeld != 0 || buttonHelpIsActionActive(1) != 0) {
            FUN_0041e9d4(screen);
            return;
        }
        if (padButtonIsPressed(10) == 0 && screen->cancelHeld == 0)
            buttonHelpIsActionActive(4);
    }
}
