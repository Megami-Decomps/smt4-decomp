#ifndef CLASSES_OBJ55C8D0_H
#define CLASSES_OBJ55C8D0_H

#include "classes/Obj55c920.h"

/* Bible view with handler tables and an optional preselected value. */
class Obj55c8d0 : public Obj55c920 {
public:
    Obj55c8d0();
    Obj55c8d0(u32 value);
    virtual void start();
    virtual void unk0c();
    virtual void stop();
    virtual void unk14();
    virtual void render(); /* +0x18 */
    void resetHandlers();

    typedef void (Obj55c8d0::*Handler)();
    typedef s32 (Obj55c8d0::*EnterHandler)();
    typedef bool (Obj55c8d0::*LeaveHandler)();
    void FUN_004a4c74();
    void FUN_004a4d70();
    void FUN_004a677c();
    void itemListMenuWaitUseCounter();
    void FUN_004a4658();
    void FUN_004a527c();
    void enableKindEight();

    /* 0x0860 */ u8 hasValue;
    /* 0x0861 */ u8 unk861[0xa013];
    /* 0xA874 */ u32 value;
    /* 0xA878 */ u8 pending;
    /* 0xA879 */ u8 unkA879[0xA980 - 0xA879];
    /* 0xA980 */ Handler handlers[9];
    /* 0xA9C8 */ EnterHandler enterHandlers[9];
    /* 0xAA10 */ LeaveHandler leaveHandlers[9];
};

#endif
