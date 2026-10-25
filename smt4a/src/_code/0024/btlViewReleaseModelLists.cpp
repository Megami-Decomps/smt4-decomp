#include "battle/btlView.h"
#include "gamedata/GameFlags.h"
#include "map/MapSelection.h"

extern "C" {
extern BattleViewState g_battleViewState;

s32 gameFlagIsSet(u32 flag);

struct GameFlagBlock {
    /* 0x0000 */ u8 unk0000[0x16A0];
    /* 0x16A0 */ s32 unk16A0;
};
GameFlagBlock *gameFlagsGetBlock(void);
}

extern "C" {
void btlViewReleaseModelLists(void)
{
    GameFlagBlock *flags = gameFlagsGetBlock();
    if (g_mapSelection.id == 0x20 && g_mapSelection.kind == 2) {
        if (gameFlagIsSet(0x4C9) != 0) {
            return;
        }
    } else if (gameFlagIsSet(0x4D0) == 0) {
        return;
    }
    BattleViewState *view = &g_battleViewState;
    if (flags->unk16A0 != 0) {
        gameFlagSetValue(0x4D0, 0, 1);
    }
    if (view->attachments.primary[0] != NULL) {
        delete view->attachments.primary[0];
        view->attachments.primary[0] = NULL;
    }
    if (view->attachments.primary[1] != NULL) {
        delete view->attachments.primary[1];
        view->attachments.primary[1] = NULL;
    }
    if (view->attachments.primary[2] != NULL) {
        delete view->attachments.primary[2];
        view->attachments.primary[2] = NULL;
    }
    if (view->children[0] != NULL) {
        delete view->children[0];
        view->children[0] = NULL;
    }
    if (view->children[1] != NULL) {
        delete view->children[1];
        view->children[1] = NULL;
    }
    if (view->children[2] != NULL) {
        delete view->children[2];
        view->children[2] = NULL;
    }
}

}
