#ifndef CLASSES_OBJ536044_H
#define CLASSES_OBJ536044_H

#include "common.h"

/* A scene whose step functions are listed in the table at 0x536044 (named after it until its real
 * name is known): the table holds member-function pointers, not a vtable. */
class Obj536044 {
public:
    /* After the transition (screenFadeIsBusy) is over: marks the scene changed (flags 0x102), remembers
     * the current state and moves to state 3. */
    void enterState3();

    /* Moves to state 5 once scrRunOpcodesStub reports 2 for the scene's controller. */
    void waitController();

protected:
    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 previousState;
    /* 0x14 */ u8 unk14[0x178];
    /* 0x18C */ void *controller;
};

#endif
