#ifndef CLASSES_OBJ55C3EC_H
#define CLASSES_OBJ55C3EC_H

#include "classes/Obj421f54.h"

/* Apocalypse's sound frame heap block list, the twin of IV's Obj421f54List: the node at +8 is the sentinel and
 * starts linked to itself. */
class Obj55c3ecList {
public:
    Obj55c3ecList();

    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ Obj421f54Node sentinel;
};

/* Apocalypse's sound frame heap (vtable at 0x55c3ec; IV's twin is Obj421f54), named after its vtable until its real
 * name is known. */
class Obj55c3ec {
public:
    Obj55c3ec();
    virtual ~Obj55c3ec();

    /* 0x04 */ Obj421f54Lock lock;
    /* 0x10 */ Obj55c3ecList list;
};

typedef char Obj55c3ecSizeCheck[sizeof(Obj55c3ecList) == 0x10 && sizeof(Obj55c3ec) == 0x20 ? 1 : -1];

#endif
