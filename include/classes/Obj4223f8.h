#ifndef CLASSES_OBJ4223F8_H
#define CLASSES_OBJ4223F8_H

#include "classes/Obj42247c.h"

/* A compendium view (vtable at 0x4223f8, named after it until its real name is known) built either
 * with defaults or with a value stored at 0xA5B4. 0xA798 bytes. */
class Obj4223f8 : public Obj42247c {
public:
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

    /* 0x5A4 */ u8 flag5A4;
    /* 0x5A5 */ u8 unk5A5[0xA5B2 - 0x5A5];
    /* 0xA5B2 */ s16 selectedIndex;
    /* 0xA5B4 */ u32 value;
    /* 0xA5B8 */ u8 flagA5B8;
    /* 0xA5B9 */ u8 unkA5B9[0xA798 - 0xA5B9];
};

#endif
