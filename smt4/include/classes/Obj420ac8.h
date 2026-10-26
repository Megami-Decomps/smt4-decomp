#ifndef CLASSES_OBJ557F74_H
#define CLASSES_OBJ557F74_H

#include "common.h"

/* The object whose vtable is at 0x557f74 (named after it until its real name is known): a
 * two-word object with a virtual destructor (slots 0/1) and a setup method in slot 2. */
class Obj420ac8 {
public:
    Obj420ac8() : unk04(0) {}
    virtual ~Obj420ac8();
    virtual void slot2(u32 first, u32 second, u32 mode);
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
};

#endif
