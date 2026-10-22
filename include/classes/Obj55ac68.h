#ifndef CLASSES_OBJ55AC68_H
#define CLASSES_OBJ55AC68_H

#include "classes/Obj5596ac.h"
#include "classes/Obj55b104.h"
#include "classes/Obj55aff4Vector.h"

/* Shared base constructs the string, word values, buffer and string vector in order. */
class Obj55ad84 {
public:
    Obj55ad84()
        : ready(0), first(3, WordVector()), second(3, WordVector()),
          sharedState(0, 0), strings(0)
    {
    }
    virtual ~Obj55ad84() {}
protected:
    /* 0x04 */ u8 ready;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 state;
    /* 0x0C */ Obj55aff4 name;
    /* 0x14 */ Obj5596ac first;
    /* 0x28 */ Obj5596ac second;
    /* 0x3C */ u16 timeout;
    /* 0x3E */ u8 unk3e[2];
    /* 0x40 */ Obj55b104 sharedState;
    /* 0x60 */ Obj55aff4Vector strings;
};

/* The state owner whose complete constructor is at 0x43387c. */
class Obj55ac68 : public Obj55ad84 {
public:
    Obj55ac68();
    virtual ~Obj55ac68();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void vfunc24();
    virtual void vfunc28();
    virtual void vfunc2c();
    virtual void vfunc30();
    virtual void vfunc34();
    virtual void vfunc38();
    virtual void vfunc3c();
    /* 0x6C */ u32 result;
    /* 0x70 */ u16 counter;
    /* 0x72 */ u8 pending;
};

#endif
