#include "gamedata/NkmBaseRecordA.h"
#include "status/StatusDownA.h"


extern "C" {
u8 gameGlobalsGetFieldState(void);
u8 gameGlobalsGetSceneState(void);
u16 *gameGlobalsGetBlock1390(void);
u32 FUN_00334044(void);
u32 fieldStateAllowsAction(void);

// Pick the help message for the status-down screen: `kind` selects the row, the game state refines it.
u32 statusDownGetHelpMessage(s32 kind)
{
    u32 message = 0;
    StatusDownStateA *state = g_statusDown;
    if (state != NULL) {
        s32 inBattle = 0;
        u8 mode = gameGlobalsGetFieldState();
        if (mode == 14 || mode == 7) {
            inBattle = 1;
        }
        if (kind == 1) {
            if (inBattle != 0) {
                if ((nkmBaseGetRecord(*gameGlobalsGetBlock1390())->extraFlags & 2) == 0) {
                    message = 49;
                } else {
                    message = 241;
                }
            } else if (gameGlobalsGetFieldState() == 4) {
                message = 241;
            } else if (gameGlobalsGetSceneState() == 13) {
                message = 281;
            } else if (FUN_00334044() == 2) {
                message = 42;
                if (fieldStateAllowsAction() != 0) {
                    message = 251;
                }
            } else if ((s16)state->selectedEntry < 0) {
                message = 31;
                if (fieldStateAllowsAction() != 0) {
                    message = 249;
                }
            } else {
                message = 41;
                if (fieldStateAllowsAction() != 0) {
                    message = 250;
                }
            }
        } else if (kind == 2) {
            message = 32;
        } else if (kind == 3) {
            if (inBattle != 0) {
                message = 50;
            } else if (gameGlobalsGetFieldState() == 9 || gameGlobalsGetFieldState() == 10 || gameGlobalsGetFieldState() == 12 ||
                       gameGlobalsGetFieldState() == 8) {
                message = 96;
            } else {
                message = 43;
            }
        } else if (kind == 4) {
            if (gameGlobalsGetFieldState() == 9 || gameGlobalsGetFieldState() == 10 || gameGlobalsGetFieldState() == 12 || gameGlobalsGetFieldState() == 8) {
                message = 97;
            } else {
                message = 44;
            }
        } else if (kind == 5) {
            if (inBattle != 0) {
                message = 51;
            } else if (gameGlobalsGetFieldState() == 9 || gameGlobalsGetFieldState() == 10 || gameGlobalsGetFieldState() == 12 ||
                       gameGlobalsGetFieldState() == 8) {
                message = 98;
            } else if (gameGlobalsGetSceneState() == 13) {
                message = 282;
            } else {
                message = 45;
            }
        } else if (kind == 6) {
            message = 264;
        }
    }
    return message;
}

}
