#ifndef CLASSES_OBJ536044_H
#define CLASSES_OBJ536044_H

#include "common.h"

/* A scene whose step functions are listed in the table at 0x536044 (named after it until its real
 * name is known): the table holds member-function pointers, not a vtable. */
class Obj536044 {
public:
    typedef void (Obj536044::*Handler)();
    typedef s32 (Obj536044::*ExitHandler)();

    /* Clears both handler banks, then installs the state handlers. */
    void resetHandlers();

    /* After the transition (screenFadeIsBusy) is over: marks the scene changed (flags 0x102), remembers
     * the current state and moves to state 3. */
    void enterState3();

    /* Moves to state 5 once scrRunOpcodesStub reports 2 for the scene's controller. */
    void waitController();

    void FUN_0049569c();
    void FUN_00494a34();
    void FUN_00498ac0();
    void FUN_004995b0();
    void FUN_00494740();
    void FUN_0049bd20();
    void itemMenuHandleSelectionInput();
    void FUN_00499fdc();
    void FUN_0049a2b4();
    void FUN_0049b00c();
    void shopUpdateCharonRequestTransition();
    void FUN_00497044();
    void FUN_004969a8();
    void panelUpdatePageExitTransition();
    void FUN_00497290();
    void FUN_00498594();
    void FUN_00495584();

protected:
    /* Remembers the current state, enters `next` and restarts the substate. */
    void changeState(s32 next)
    {
        previousState = state;
        state = next;
        substate = 0;
    }

    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 previousState;
    /* 0x14 */ u8 unk14[0x10];
    /* 0x24 */ Handler states[22];
    /* 0xD4 */ ExitHandler exitStates[22];
    /* 0x184 */ u8 unk184[8];
    /* 0x18C */ void *controller;
};

#endif
