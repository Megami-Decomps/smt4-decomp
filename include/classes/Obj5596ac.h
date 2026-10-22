#ifndef CLASSES_OBJ5596AC_H
#define CLASSES_OBJ5596AC_H

#include "classes/WordVector.h"

/* Base word value owns the vector and initializes its active state. */
class Obj55a4b8 {
public:
    Obj55a4b8() : active(0), words(0) {}
    virtual ~Obj55a4b8() {}
protected:
    /* 0x04 */ u8 active;
    /* 0x05 */ u8 kind;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ WordVector words;
};

/* Typed word value adds its kind and copies the supplied vector contents. */
class Obj5596ac : public Obj55a4b8 {
public:
    Obj5596ac(u8 kind, const WordVector &values);
    Obj5596ac &operator=(const Obj5596ac &other);
    virtual ~Obj5596ac() {}
};

#endif
