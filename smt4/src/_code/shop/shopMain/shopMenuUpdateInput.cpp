#include "common.h"

struct ShopScreen;

extern "C" {

/* The selection links of one shop menu entry: where right and left move to. */
struct ShopMenuLink {
    u32 right;
    u32 left;
};

extern const ShopMenuLink DAT_0044e020[];

/* The shop screen (only the fields this state reads). */
struct ShopScreen {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 state;
    /* 0x008 */ u32 stateTimer;
    /* 0x00C */ u8 unk00c[0x39c];
    /* 0x3A8 */ u8 messageWindow[0x4bc];
    /* 0x864 */ u32 selection;
    /* 0x868 */ u8 unk868[0x154a0];
    /* 0x15D08 */ u8 unk15d08[0x44];
    /* 0x15D4C */ s16 touchRegionRight;
    /* 0x15D4E */ s16 touchRegionLeft;
};

void FUN_0022fbc0(ShopScreen *screen);
void FUN_0022fb64(ShopScreen *screen);
void FUN_0022fcb8(ShopScreen *screen, s32 flag);
void FUN_0022faf8(void);
void FUN_0022fa2c(ShopScreen *screen);
void FUN_00232848(void);
void FUN_002328b4(void);
void FUN_00233240(void *window, s32 flag);
s32 inputIsQuestRepeatLeft(void);
s32 inputIsQuestRepeatRight(void);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 ifTouchGetSelectionModeForRegion(s32 region);

// Shop menu input: move the selection left or right, confirm, or cancel.
void shopMenuUpdateInput(ShopScreen *screen)
{
    FUN_0022fbc0(screen);
    FUN_0022fb64(screen);
    if (inputIsQuestRepeatRight() || ifTouchGetSelectionModeForRegion(screen->touchRegionRight) == 6) {
        screen->selection = DAT_0044e020[screen->selection].right;
        FUN_0022fcb8(screen, 1);
        FUN_0022faf8();
        return;
    }
    if (inputIsQuestRepeatLeft() || ifTouchGetSelectionModeForRegion(screen->touchRegionLeft) == 6) {
        screen->selection = DAT_0044e020[screen->selection].left;
        FUN_0022fcb8(screen, 1);
        FUN_0022faf8();
        return;
    }
    if (inputIsQuestMenuPressed()) {
        FUN_00233240(screen->messageWindow, 1);
        FUN_00232848();
        screen->state = 0x11;
        screen->stateTimer = 0;
    } else if (inputIsQuestCancelPressed()) {
        FUN_002328b4();
        FUN_0022fa2c(screen);
    }
}

}
