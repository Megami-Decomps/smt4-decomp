#ifndef CLASSES_OBJ55AFC4_H
#define CLASSES_OBJ55AFC4_H

#include "common.h"

/* The child an Obj55afc4 owns and stops. */
class Obj55afc4Child {
public:
    virtual void unk00();
    virtual void stop();
};

/* An abstract object that owns one child and stops it once (vtable at 0x55afc4; named after it
 * until its real name is known). Obj558be0 derives from it. */
class Obj55afc4 {
public:
    virtual ~Obj55afc4();
    virtual void pure0() = 0;
    virtual void pure1() = 0;
    virtual void pure2() = 0;
    void stop();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 state;    /* 3 once stopped */
    /* 0x05 */ u8 unk05[0x37];
    /* 0x3C */ Obj55afc4Child *child;
};

#endif
