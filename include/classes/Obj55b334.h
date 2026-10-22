#ifndef CLASSES_OBJ55B334_H
#define CLASSES_OBJ55B334_H

#include "common.h"

class Obj55af5c {
public:
    virtual ~Obj55af5c();
    /* 0x004 */ u8 unk004[0x114];
};
class Obj55b334Child {
public:
    virtual ~Obj55b334Child();
};
class Obj55b334 : public Obj55af5c {
public:
    virtual ~Obj55b334();
    /* 0x118 */ Obj55b334Child *child;
};

#endif
