/* NON_MATCHING: Background-reset and alternate-feedback cold blocks are placed differently from retail. */
#include "map/mapDepart.h"
#include "shard/FUN_00384cf4.h"

struct NavigationFeedbackRequest {
    u8 unk00[0xC];
    u8 alternate;
};
struct NavigationFeedbackFlags {
    u8 unk00[0x60];
    u8 blocked;
    u8 unk61;
    u8 ready;
};
struct NavigationFeedbackMode {
    u8 unk0000[0x1514];
    s32 mode;
};
extern "C" {
NavigationFeedbackMode *gameFlagsGetBlock(void);
s32 gameFlagIsSet(u32 flag);
void commonBgReset(void);
void FUN_003b61ec(void);
void FUN_00183e58(void);
void sysPlaySe(s32 sound);
void uiPlayGatedActionFeedback(void);
extern GameStateA g_gameState;
extern NavigationFeedbackFlags DAT_005f19fc;

/* Refreshes map background state and chooses navigation feedback after tearing down button help. */
void FUN_0048a378(NavigationFeedbackRequest *request)
{
    NavigationFeedbackMode *settings = gameFlagsGetBlock();
    if (g_gameState.mapFlags.unk295 != 0) {
        g_gameState.mapFlags.unk295 = 0;
        if (gameFlagIsSet(0x49A) != 0) {
            commonBgReset();
        } else {
            FUN_003b61ec();
        }
        if (gameFlagIsSet(12) != 0 && gameFlagIsSet(16) == 0) {
            FUN_003b61ec();
        }
    }
    if (DAT_005f19fc.blocked == 0) {
        if (g_gameState.controllerFlags.primary == 0) {
            uiPlayGatedActionFeedback();
            return;
        }
        if (request->alternate != 0) {
            if (DAT_005f19fc.ready != 0 && FUN_00384cf4() == 0) {
                FUN_00183e58();
                sysPlaySe(0x114);
                return;
            }
            sysPlaySe(0xF5);
            return;
        }
        FUN_00183e58();
        s32 mode = settings->mode;
        if (mode == 0) {
            FUN_00183e58();
            sysPlaySe(0x10A);
            return;
        }
        if (mode == 1 || mode == 2) {
            FUN_00183e58();
            sysPlaySe(0xF6);
            return;
        }
    }
}
}
