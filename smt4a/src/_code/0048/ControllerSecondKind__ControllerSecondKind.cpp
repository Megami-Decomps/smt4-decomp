/* NON_MATCHING: base-call setup and zero stores use different registers. */
#include "common.h"
struct WindowState {
    /* 0x0 */ const void * vtable;
    /* 0x4 */ u8 unk4[88];
    /* 0x5C */ s32 selection;
    /* 0x60 */ u8 unk60[53];
    /* 0x95 */ u8 active;
    /* 0x96 */ u8 unk96[2];
    /* 0x98 */ u32 first;
    /* 0x9C */ u32 second;
    /* 0xA0 */ u32 third;
    /* 0xA4 */ u32 fourth;
    /* 0xA8 */ u32 fifth;
    /* 0xAC */ u32 sixth;
};
extern "C" {extern u8 DAT_0055c848[];WindowState *_ZN9Obj55c81cC1Ej(WindowState*,u32);
/* Initializes the extended window state after its base. */
WindowState *_ZN20ControllerSecondKindC1Ev(WindowState *window){window=_ZN9Obj55c81cC1Ej(window,1);window->active=0;window->first=0;window->vtable=DAT_0055c848;window->second=0;window->third=0;window->fourth=0;window->fifth=0;window->sixth=0;window->selection=-1;return window;}}
