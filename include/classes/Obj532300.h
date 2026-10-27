#ifndef CLASSES_OBJ532300_H
#define CLASSES_OBJ532300_H

#include "common.h"

/* The map navigation panel: its state handlers are the member-function pointers listed in the
 * table at 0x532300 (named after it until the real name is known), kept in 17 slots at +0x13F8. */
class Obj532300 {
public:
    typedef void (Obj532300::*Handler)();

    /* Clears the handler slots, then installs the state handlers. */
    void resetHandlers();

    void FUN_0048e408();
    void uiAdvanceConditionalScreenSprite();
    void FUN_00487124();
    void FUN_0048bd2c();
    void FUN_0048b8a4();
    void FUN_0048ce38();
    void FUN_0048d1c8();
    void FUN_0048d358();
    void FUN_0048d11c();
    void FUN_0048a4c0();
    void selectionNotificationAdvanceEntryAnimations();
    void FUN_00490898();
    void FUN_0048bad0();
    void FUN_0048c1c0();

protected:
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ s32 step;
    /* 0x0008 */ s32 state;
    /* 0x000C */ u8 unk000C[4];
    /* 0x0010 */ u32 flags;
    /* 0x0014 */ u8 unk0014[0x13E4];
    /* 0x13F8 */ Handler handlers[17];
};

#endif
