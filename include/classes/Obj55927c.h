#ifndef OBJ55927C_H
#define OBJ55927C_H

#include "common.h"

/* The argument of Obj55927c::vfunc10: a header word, then the payload. */
struct Obj55927cArg {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 payload[1];
};

/* The object whose vtable is at 0x55927c (named after it until its real name is known); the vtable
 * is stored by FUN_002f2fe8. The two slots before vfunc08 are the destructors'. */
class Obj55927c {
public:
    virtual ~Obj55927c();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10(Obj55927cArg *arg);   /* _ZN9Obj55927c7vfunc10EP12Obj55927cArg */
};

#endif
