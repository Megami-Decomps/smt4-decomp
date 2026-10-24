#ifndef CLASSES_OBJ421F54_H
#define CLASSES_OBJ421F54_H

#include "common.h"

struct Obj421f54Node {
    Obj421f54Node *next;
    Obj421f54Node *prev;
};

/* The list the sound heap keeps its blocks in; the node at +8 is the sentinel and starts linked to itself. */
class Obj421f54List {
public:
    Obj421f54List();

    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ Obj421f54Node sentinel;
};

/* A nn::os::CriticalSection (12 bytes) before Initialize() has run. */
struct Obj421f54Lock {
    Obj421f54Lock() : unk00(0), unk04(0), unk08(-1) {}
    u32 unk00;
    u32 unk04;
    s32 unk08;
};

/* A sound frame heap (vtable at 0x421f54; named after it until its real name is known). */
class Obj421f54 {
public:
    Obj421f54();
    virtual ~Obj421f54();

    /* 0x04 */ Obj421f54Lock lock;
    /* 0x10 */ Obj421f54List list;
};

typedef char Obj421f54SizeCheck[sizeof(Obj421f54) == 0x20 ? 1 : -1];

#endif
