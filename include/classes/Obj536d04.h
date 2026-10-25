#ifndef CLASSES_OBJ536D04_H
#define CLASSES_OBJ536D04_H

#include "common.h"
#include <stddef.h>

/* The two words a state holder clears before it installs its vtable. */
struct Obj536d04State {
    Obj536d04State() : unk00(0), unk04(0) {}
    u32 unk00;
    u32 unk04;
};

/* A module's state holder (vtable at 0x536d04; named after it until its real name is known): its
 * destructor does nothing. */
class Obj536d04 : public Obj536d04State {
public:
    Obj536d04() : unk0c(0) {}
    ~Obj536d04();
    virtual void unsupported();

    /* 0x04 */ /* Obj536d04State */
    /* 0x0C */ u32 unk0c;
};

typedef char Obj536d04LayoutCheck[
    sizeof(Obj536d04) == 0x10 && offsetof(Obj536d04, unk00) == 4 && offsetof(Obj536d04, unk0c) == 0xc ? 1 : -1];

#endif
