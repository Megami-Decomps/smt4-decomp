#ifndef OBJ55922C_H
#define OBJ55922C_H

#include "common.h"

/* The object whose vtable is at 0x55922c (named after it until its real name is known); the vtable
 * is stored by FUN_002f4fd8 (its destructor, which resets the pointer) and FUN_002fd1e8. */
class Obj55922c {
public:
    virtual ~Obj55922c();
    void reset(void *ptr);

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ void *ptr;
};

#endif
