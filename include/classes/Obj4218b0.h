#ifndef CLASSES_OBJ4218B0_H
#define CLASSES_OBJ4218B0_H

#include "common.h"
#include "classes/Obj55bccc.h" /* Obj55bcccArray */

/* A record of five arrays (vtable at 0x4218b0; named after it until its real name is known): SMT IV's
 * Obj55bccc, with the same layout and the same constructor and destructor. */
class Obj4218b0 {
public:
    Obj4218b0(u32 second, u32 third, u32 first);
    virtual ~Obj4218b0();

    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ Obj55bcccArray array0C;
    /* 0x1C */ u32 third;
    /* 0x20 */ Obj55bcccArray array20;
    /* 0x30 */ Obj55bcccArray array30;
    /* 0x40 */ Obj55bcccArray array40;
    /* 0x50 */ Obj55bcccArray array50;
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u8 unk64;
};

typedef char Obj4218b0SizeCheck[sizeof(Obj4218b0) == 0x68 ? 1 : -1];

#endif
