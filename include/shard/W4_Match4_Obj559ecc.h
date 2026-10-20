#ifndef SHARD_W4_MATCH4_OBJ559ECC_H
#define SHARD_W4_MATCH4_OBJ559ECC_H

#include "common.h"

/* Holds a string (vtable at 0x55aff4; named after it until its real name is known). */
class Obj55aff4 {
public:
    Obj55aff4();
    virtual ~Obj55aff4();

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 text;
};

/* An object holding two Obj55aff4 (vtable at 0x559ecc; named after it until its real name is known). */
class Obj559ecc {
public:
    Obj559ecc();
    virtual ~Obj559ecc();

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 flag;
    /* 0x08 */ Obj55aff4 first;
    /* 0x10 */ Obj55aff4 second;
};

#endif
