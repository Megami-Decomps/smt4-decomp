#include "shard/Shard0033.h"

extern "C" {

extern Obj7ECRef g_useCounter;

void ifTouchRegionRemove(void);
void buttonHelpSetText(void *target, u32 color);
void buttonHelpSetHelpState(s32 mode);
void buttonHelpSetMode(s32 mode);

/* The part of the object from 0x700: screen mode, touch regions and the pending fade. */
struct Obj7ECPanel {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s32 mode;
    /* 0x48 */ u8 unk48[6];
    /* 0x4E */ u8 state;
    /* 0x4F */ u8 unk4F[0x1D];
    /* 0x6C */ s16 touchRegions[13]; /* -1 = free */
    /* 0x86 */ s16 touchRegionCount;
    /* 0x88 */ u8 unk88[0x6C];
    /* 0xF4 */ u8 fadePending;
    /* 0xF5 */ u8 fadeOut;
    /* 0xF6 */ u8 fadeTarget[2];
};

/* Obj7EC seen from 0x700 on. */
struct Obj7ECView {
    /* 0x000 */ u8 unk000[0x700];
    /* 0x700 */ Obj7ECPanel panel;
};

/* Release every touch region, then close the overlay unless the screen is in mode 1 or 2. */
void touchMenuClose(void)
{
    Obj7ECView *object = (Obj7ECView *)g_useCounter.instance;
    Obj7ECPanel *panel = &object->panel;
    object->panel.mode = 4;
    for (s32 i = 0; i < panel->touchRegionCount; ++i) {
        object->panel.touchRegions[i] = -1;
        ifTouchRegionRemove();
    }
    if (object->panel.state == 2 || object->panel.state == 1) {
        return;
    }
    if (panel->fadePending != 0) {
        if (panel->fadeOut != 0) {
            buttonHelpSetHelpState(1);
        } else {
            buttonHelpSetText(object->panel.fadeTarget, 0xF4F4F4FF);
        }
        object->panel.fadePending = 0;
    } else {
        buttonHelpSetMode(0);
    }
}

} /* extern "C" */
