#ifndef CLASSES_OBJ526238_H
#define CLASSES_OBJ526238_H

#include "common.h"

/* An object the owner deletes through its virtual destructor. */
class Obj526238Child {
public:
    virtual ~Obj526238Child();
};

/* A scene whose step functions are listed in the table at 0x526238 (named after it until its real
 * name is known): the table holds member-function pointers, not a vtable. Each step reads and
 * moves the scene's state and substate. */
class Obj526238 {
public:
    /* Leaves the scene's current step when the add-on content is busy: back to state 3, dropping
     * the child it was driving. */
    void leaveWhenAocFree();

protected:
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ u8 unk0C[0x1FC];
    /* 0x208 */ Obj526238Child *child;
};

#endif
