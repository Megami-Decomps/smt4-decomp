/* NON_MATCHING: cold blocks now match; retail copies the g_gameState literal with `add r6, r0, #0` (r0 stays the address for the first test) and keeps the request in r4 / settings in r5, ours loads the literal straight into r4. */
#include "map/mapDepart.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"

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
    NavigationFeedbackMode *settings = reinterpret_cast<NavigationFeedbackMode *>(gameFlagsGetBlock());
    if ((&g_gameState)->mapFlags.unk295 != 0) {
        (&g_gameState)->mapFlags.unk295 = 0;
        if (gameFlagIsSet(0x49A) == 0) {
            FUN_003b61ec();
        } else {
            commonBgReset();
        }
        if (gameFlagIsSet(12) != 0 && gameFlagIsSet(16) == 0) {
            FUN_003b61ec();
        }
    }
    if (DAT_005f19fc.blocked == 0) {
        if ((&g_gameState)->controllerFlags.primary == 0) {
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
