/* NON_MATCHING: AocMenu state machine matches instruction for instruction (inline operator new, out-of-line ctor/dtor, delete); armcc loads screen->menu before the state-3 store where retail loads it after. */
#include "classes/AocMenu.h"

/* The add-on content screen's work: a small state machine around the AocMenu it owns. */
struct AocMenuScreen {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 closing;
    /* 0x19 */ u8 skipSequence;
    /* 0x1A */ u8 state;
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ AocMenu *menu;
};

extern "C" {
extern AocMenuScreen *g_sceneResourceWork;
void campCommonBgAcquire(void);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void FUN_003a7644(AocMenu *menu);
void FUN_0047c36c(AocMenu *menu);
void FUN_003d54f8(s32 channel, s32 value);
void soundChannelStopAll(s32 mask);
void asdSequenceRequest(s32 id, u8 *request, s32 flag);
void aocMainShutdown(void);
void campButtonHelpRelease(void);
void helpTexturesRelease(void);
void campCommonBgRelease(void);

/* Opens the menu (state 0), waits until it is up (1), then closes it (2); returns -1 once done (3). */
u32 FUN_0024b5ac(void)
{
    AocMenuScreen *screen = g_sceneResourceWork;

    switch (screen->state) {
    case 0:
        campCommonBgAcquire();
        campButtonHelpLoad();
        campButtonHelpAcquire();
        screen->menu = new AocMenu;
        FUN_003a7644(screen->menu);
        screen->state = 1;
        break;
    case 1:
        FUN_0047c36c(screen->menu);
        if ((screen->menu->flags & 1) != 0) {
            screen->state = 2;
        }
        break;
    case 2:
        if (screen->skipSequence != 0) {
            FUN_003d54f8(0, 1);
            FUN_003d54f8(1, 1);
            soundChannelStopAll(0xF);
        } else {
            u8 request = 1;
            asdSequenceRequest(1, &request, 1);
        }
        screen->state = 3;
        screen->closing = 1;
        if (screen->menu != NULL) {
            aocMainShutdown();
            if (screen->menu != NULL) {
                delete screen->menu;
                screen->menu = NULL;
            }
        }
        campButtonHelpRelease();
        helpTexturesRelease();
        campCommonBgRelease();
        break;
    case 3:
        return 0xFFFFFFFF;
    }
    return 0;
}

} /* extern "C" */
