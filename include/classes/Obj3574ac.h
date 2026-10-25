#ifndef CLASSES_OBJ3574AC_H
#define CLASSES_OBJ3574AC_H

#include "common.h"
#include <stddef.h>

/* A handle-owning record (named after its destructor at 0x3574ac, which closes the handle, until its real
 * name is known): four words, a flag, the handle word and a second flag, all cleared by the constructor. */
class Obj3574ac {
public:
    Obj3574ac() : unk00(0), unk04(0), unk08(0), unk0c(0), flagA(0), handle(0), flagB(0) {}
    ~Obj3574ac();

    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 flagA;
    /* 0x14 */ u32 handle;
    /* 0x18 */ u8 flagB;
};

typedef char Obj3574acLayoutCheck[
    sizeof(Obj3574ac) == 0x1c && offsetof(Obj3574ac, handle) == 0x14 && offsetof(Obj3574ac, flagB) == 0x18 ? 1 : -1];

#endif
