/* NON_MATCHING: retail hoists screen+0x300 and screen+0x2EC into registers (extra saved regs) and shares the open-request tail; the build addresses fields directly and allocates registers differently. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"

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
        u8 locked;          // 0x30C
        u8 unk0D[0x143];
    } panel;                // 0x300
    u8 confirmHeld;         // 0x44C
    u8 cancelHeld;          // 0x44D
    u8 unk44E[0x1CA];
    s32 pulseTimer;         // 0x618
    f32 pulse;              // 0x61C
    u8 unk620[0xCC];
    s32 reserved6EC;
    s32 reserved6F0;
    f32 pulseCopy;          // 0x6F4
};

extern "C" {
s32 padButtonIsPressed(s32 button);
void eventQueueAddUnique(u32 event);
void FUN_0019de98(s32 a, u32 color);
void FUN_0023b45c(s32 value);
void FUN_002c8538(s32 value);
s32 FUN_002e1a18(s32 value);
void FUN_002f0384(s32 value);
void FUN_003343f0(s32 value);
void FUN_0033449c(s32 value);
void FUN_0038b5fc(s32 index, u32 value);
void FUN_0041e2d8(SelectScreen *screen);
void FUN_0041e450(SelectScreen *screen);
void FUN_0041e7c0(SelectScreen *screen);
void FUN_0041e9d4(SelectScreen *screen);
void FUN_0041fc24(SelectScreen *screen);
void __aeabi_memcpy4(void *dest, const void *src, u32 size);
void *gameGetPlayerData(void);
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
                FUN_002f0384(1);
                screen->opened = 1;
                FUN_003343f0(1);
            }
        }
        if (!skip && screen->panel.locked == 0 && screen->opened == 0 &&
            screen->entryFlags[screen->selected] != 0) {
            FUN_002f0384(1);
            screen->opened = 1;
            FUN_003343f0(1);
        }
    }
    screen->pulseTimer--;
    if (screen->pulseTimer < 1) {
        screen->pulseTimer = 30;
        screen->pulse = 1.0f;
        screen->pulse = screen->pulse - 0.06666667f;
    } else if (screen->pulseTimer >= 16) {
        screen->pulse = screen->pulse - 0.06666667f;
    }
    if (screen->pulseTimer < 15)
        screen->pulse = screen->pulse + 0.06666667f;
    screen->reserved6EC = 0;
    screen->reserved6F0 = 0;
    screen->pulseCopy = screen->pulse;
    FUN_0041e450(screen);
    FUN_0041e7c0(screen);
    FUN_0041fc24(screen);
    FUN_0041e2d8(screen);
    if ((objBStateAllowsAction() != 0 && padButtonIsPressed(1) != 0) || FUN_002e1a18(2) != 0) {
        eventQueueAddUnique(0x100020F);
        FUN_0033449c(0);
        FUN_0023b45c(1);
        FUN_002c8538(1);
        FUN_002f0384(0);
        screen->opened = 0;
        if (screen->entryFlags[screen->selected] == 0)
            FUN_0023b45c(0);
        __aeabi_memcpy4(gameGetPlayerData(), screen->playerCopy, 0xE);
        FUN_0038b5fc(1, screen->ids.idB);
        FUN_0038b5fc(2, screen->ids.idC);
        FUN_0038b5fc(0, screen->ids.idA);
        screen->openRequested = 1;
        FUN_0019de98(0, 0xF4F4F4FF);
        u8 previous = screen->state;
        screen->state = 5;
        screen->previousState = previous;
        screen->stateTimer = 0;
        screen->unk0C = 0;
    } else {
        if (padButtonIsPressed(0) != 0 || screen->confirmHeld != 0 || FUN_002e1a18(1) != 0) {
            FUN_0041e9d4(screen);
            return;
        }
        if (padButtonIsPressed(10) == 0 && screen->cancelHeld == 0)
            FUN_002e1a18(4);
    }
}
