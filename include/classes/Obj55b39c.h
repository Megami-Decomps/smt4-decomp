#ifndef CLASSES_OBJ55B39C_H
#define CLASSES_OBJ55B39C_H

#include "common.h"
#include <stddef.h>

/* The three words an event holder clears before it installs its vtable. */
struct Obj55b39cState {
    Obj55b39cState() : unk00(0), unk04(0), unk08(0) {}
    u32 unk00;
    u32 unk04;
    u32 unk08;
};

/* A module's event holder (vtable at 0x55b39c; named after it until its real name is known): its only
 * virtual signals the event at +0x10 and its destructor does nothing. */
class Obj55b39c : public Obj55b39cState {
public:
    Obj55b39c() : event(0) {}
    ~Obj55b39c();
    virtual void signal();

    /* 0x04 */ /* Obj55b39cState */
    /* 0x10 */ u32 event;
};

typedef char Obj55b39cLayoutCheck[
    sizeof(Obj55b39c) == 0x14 && offsetof(Obj55b39c, unk00) == 4 && offsetof(Obj55b39c, event) == 0x10 ? 1 : -1];

#endif
