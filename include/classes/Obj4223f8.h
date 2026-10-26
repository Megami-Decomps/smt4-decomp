#ifndef CLASSES_OBJ4223F8_H
#define CLASSES_OBJ4223F8_H

#include "classes/Obj42247c.h"
#include <stddef.h>

/* A compendium view (vtable at 0x4223f8, named after it until its real name is known) built either
 * with defaults or with a value stored at 0xA5B4. 0xA798 bytes. */
class Obj4223f8 : public Obj42247c {
public:
    typedef void (Obj4223f8::*Handler)();
    Obj4223f8();
    Obj4223f8(u32 value);
    virtual ~Obj4223f8();
    virtual void start();
    virtual void unk0c();
    virtual void stop();
    virtual void unk14();
    virtual void render();

    /* State handler: the highlighted entry changed (refreshes cursor, help line and detail text). */
    void confirmSelection();
    void resetHandlers();
    void enterList();
    void followCursorAndDescribe();
    void updateBrowse();
    void updatePointerTransition();
    void enableKindEight();

    /* 0x5A4 */ u8 flag5A4;
    /* 0x5A5 */ u8 unk5A5[0xA5B2 - 0x5A5];
    /* 0xA5B2 */ s16 selectedIndex;
    /* 0xA5B4 */ u32 value;
    /* 0xA5B8 */ u8 flagA5B8;
    /* 0xA5B9 */ u8 unkA5B9[0xA6C0 - 0xA5B9];
    typedef s32 (Obj4223f8::*EnterHandler)();
    typedef bool (Obj4223f8::*LeaveHandler)();
    /* 0xA6C0 */ Handler handlers[9];
    /* 0xA708 */ EnterHandler enterHandlers[9];
    /* 0xA750 */ LeaveHandler leaveHandlers[9];
};

typedef char Obj4223f8Layout[
    offsetof(Obj4223f8, flag5A4) == 0x5A4 &&
    offsetof(Obj4223f8, value) == 0xA5B4 &&
    offsetof(Obj4223f8, handlers) == 0xA6C0 &&
    offsetof(Obj4223f8, enterHandlers) == 0xA708 &&
    offsetof(Obj4223f8, leaveHandlers) == 0xA750 &&
    sizeof(Obj4223f8) == 0xA798 ? 1 : -1];

#endif
