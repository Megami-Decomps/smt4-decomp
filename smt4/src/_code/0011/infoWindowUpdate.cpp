/* NON_MATCHING: timed-close state constants use r1/r0 instead of retail's r2/r1. */
#include "ui/PartyPanelState.h"
extern "C" PartyPanelState *g_partyPanel;

struct InfoWindowUpdateState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ s32 frames;
    /* 0x10 */ s32 closeDelay;
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 firstX;
    /* 0x1C */ s32 secondX;
    /* 0x20 */ u8 unk20[2];
    /* 0x22 */ u8 scrollEnabled;
    /* 0x23 */ u8 timed;
    /* 0x24 */ u8 unk24[0x20];
    /* 0x44 */ TimerSlot transition;
    /* 0xD0 */ TimerSlot slide;
};

extern "C" InfoWindowUpdateState *g_infoWin;
extern "C" s32 FUN_002bf818(TimerSlot *timer);
extern "C" void timerStart(TimerSlot *timer, s32 animation, s32 flags);
extern "C" void FUN_002b8ee0(TimerSlot *timer, s32 value);
extern "C" s32 vec2GetXInt(TimerSlot *timer);

/* Advance opening, scrolling and timed closing of the information window. */
extern "C" s32 infoWindowUpdate(u32 job)
{
    InfoWindowUpdateState *window = g_infoWin;
    switch (window->state) {
    case 1:
        if (FUN_002bf818(&window->transition)) {
            if (window->timed) {
                window->state = 4;
            } else {
                window->state = 2;
                timerStart(&window->slide, 2, 0);
            }
            window->frames = 0;
        }
        break;
    case 2:
        FUN_002b8ee0(&window->slide, 0);
        window->firstX = vec2GetXInt(&window->slide);
        if (window->firstX <= 0) {
            window->firstX = 0;
            window->state = 3;
            window->frames = 0;
        }
        window->secondX = window->firstX + window->width + 42;
        break;
    case 3:
        if (window->frames > 30 && window->scrollEnabled) {
            --window->firstX;
            if (window->firstX < -window->width)
                window->firstX = window->secondX + window->width + 42;
            --window->secondX;
            if (window->secondX < -window->width)
                window->secondX = window->firstX + window->width + 42;
        }
        break;
    case 4:
        if (window->closeDelay >= 0 && window->frames > window->closeDelay) {
            window->state = 5;
            window->closeDelay = 30;
            timerStart(&window->transition, 1, 0);
        }
        break;
    case 5:
        if (FUN_002bf818(&window->transition)) {
            window->timed = 0;
            window->state = 0;
            window->frames = 0;
        }
        break;
    }
    ++window->frames;
    return 0;
}
