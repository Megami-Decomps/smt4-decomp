/* NON_MATCHING: code identical; retail reads GameStateA::alternateNaviMap (0x460) and naviMapPending (0x462) through a
 * g_gameState+0x400 literal. Declaring alternateNaviMap s8 gives that base and matches here, but breaks the IDENTICAL
 * naviGetActiveStateValue/naviMainSelectPair/naviRequestSelectedMap/FUN_00492b98 (u8 there), so this unit keeps its
 * DAT_005f19fc view of those bytes and only the pool word's symbol differs. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/MapSaveBlockA.h"

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
extern "C" {
extern NavigationFeedbackFlags DAT_005f19fc;
void commonBgReset(void);
void commonBgStopChildAndBeginTransition(void);
void FUN_00183e58(void);
void sysPlaySe(s32 sound);
void uiPlayGatedActionFeedback(void);

/* Refreshes map background state and chooses navigation feedback after tearing down button help. */
void FUN_0048a378(NavigationFeedbackRequest *request)
{
    MapSaveBlockA *settings = gameFlagsGetBlock();
    if (g_gameState.menuOpen != 0) {
        g_gameState.menuOpen = 0;
        if (gameFlagIsSet(0x49A) == 0) {
            commonBgStopChildAndBeginTransition();
        } else {
            commonBgReset();
        }
        if (gameFlagIsSet(12) != 0 && gameFlagIsSet(16) == 0) {
            commonBgStopChildAndBeginTransition();
        }
    }
    if (DAT_005f19fc.blocked == 0) {
        if (g_gameState.paused == 0) {
            uiPlayGatedActionFeedback();
            return;
        }
        if (request->alternate == 0) {
            FUN_00183e58();
            s32 mode = settings->naviFeedbackMode;
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
            return;
        }
        if (DAT_005f19fc.ready != 0 && FUN_00384cf4() == 0) {
            FUN_00183e58();
            sysPlaySe(0x114);
            return;
        }
        sysPlaySe(0xF5);
    }
}
}
