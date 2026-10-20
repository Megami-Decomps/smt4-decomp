#ifndef CLASSES_OBJ5333C0_H
#define CLASSES_OBJ5333C0_H

#include "common.h"

/* A scene whose step functions are listed in the table at 0x5333c0 (named after it until its real
 * name is known): the table holds member-function pointers, not a vtable. */
class Obj5333c0 {
public:
    /* Once the transition (FUN_002802c8) is over, moves to state 5 when the mode byte is 1,
     * otherwise to state 4. */
    void chooseNextState();

protected:
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ u8 unk0C[5];
    /* 0x11 */ u8 mode;
};

#endif
