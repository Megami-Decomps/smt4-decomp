#ifndef CLASSES_OBJ559020_H
#define CLASSES_OBJ559020_H

#include "common.h"

/* A 0x50-byte polymorphic helper object (vtable at 0x559010) that Obj559020 embeds; only its
 * destructor is called from here. */
class Obj559010 {
public:
    Obj559010();
    virtual ~Obj559010();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x4C];
};

/* The object whose vtable is at 0x559020 (named after it until its real name is known): a
 * configuration block built around an embedded Obj559010. Slots 0 and 1 are the destructors. */
class Obj559020 {
public:
    Obj559020();
    virtual ~Obj559020();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ Obj559010 base18;
    /* 0x68 */ u8 unk68[0x44];
};

#endif
