#include "common.h"

struct StatusDownState {
    /* 0x000 */ u8 unk000[0x598];
    /* 0x598 */ s16 cursorIndex;
};

struct StatusDownRecord {
    /* 0x00 */ u8 unk00[0xB3];
    /* 0xB3 */ u8 flags;
};

extern "C" {
extern StatusDownState *g_statusDown;
u8 FUN_002c7e3c(void);
u8 FUN_002c7e54(void);
u16 *FUN_002c7e24(void);
StatusDownRecord *FUN_00184310(u16 id);
u32 FUN_00334044(void);
u32 fieldStateAllowsAction(void);

// Pick the help message for the status-down screen: `kind` selects the row, the game state refines it.
u32 statusDownGetHelpMessage(s32 kind)
{
    u32 message = 0;
    StatusDownState *state = g_statusDown;
    if (state != NULL) {
        s32 inBattle = 0;
        u8 mode = FUN_002c7e3c();
        if (mode == 14 || mode == 7) {
            inBattle = 1;
        }
        if (kind == 1) {
            if (inBattle != 0) {
                if ((FUN_00184310(*FUN_002c7e24())->flags & 2) == 0) {
                    message = 49;
                } else {
                    message = 241;
                }
            } else if (FUN_002c7e3c() == 4) {
                message = 241;
            } else if (FUN_002c7e54() == 13) {
                message = 281;
            } else if (FUN_00334044() == 2) {
                message = 42;
                if (fieldStateAllowsAction() != 0) {
                    message = 251;
                }
            } else if (state->cursorIndex < 0) {
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
            } else if (FUN_002c7e3c() == 9 || FUN_002c7e3c() == 10 || FUN_002c7e3c() == 12 ||
                       FUN_002c7e3c() == 8) {
                message = 96;
            } else {
                message = 43;
            }
        } else if (kind == 4) {
            if (FUN_002c7e3c() == 9 || FUN_002c7e3c() == 10 || FUN_002c7e3c() == 12 || FUN_002c7e3c() == 8) {
                message = 97;
            } else {
                message = 44;
            }
        } else if (kind == 5) {
            if (inBattle != 0) {
                message = 51;
            } else if (FUN_002c7e3c() == 9 || FUN_002c7e3c() == 10 || FUN_002c7e3c() == 12 ||
                       FUN_002c7e3c() == 8) {
                message = 98;
            } else if (FUN_002c7e54() == 13) {
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
