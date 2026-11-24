#ifndef CLASSES_OBJ42CD08_H
#define CLASSES_OBJ42CD08_H

#include "nn/os/SimpleLock.h"
#include <stddef.h>

/* A LightEvent that starts cleared; its out-of-line destructor does nothing. */
class Obj42cd08 {
public:
    Obj42cd08() : state(0) {}
    ~Obj42cd08();

    /* LightEvent::Signal reloads the state between its two tests with no intervening call or store.
     * Signal and Wait update the same word with ldrex/strex. */
    /* 0x00 */ volatile s32 state;
    /* 0x04 */ nn::os::SimpleLock lock;
};

typedef char Obj42cd08LayoutCheck[sizeof(Obj42cd08) == 8 && offsetof(Obj42cd08, lock) == 4 ? 1 : -1];

#endif
