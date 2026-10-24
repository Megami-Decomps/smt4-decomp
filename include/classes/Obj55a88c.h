#ifndef CLASSES_OBJ55A88C_H
#define CLASSES_OBJ55A88C_H

#include "common.h"
#include "classes/Obj55ad30.h"

/* Concrete record (vtable 0x55a88c) that adds no data to Obj55ad30; its virtual slots are implemented elsewhere. */
class Obj55a88c : public Obj55ad30 {
public:
    Obj55a88c();
    Obj55a88c(const Obj55a88c &other);
    virtual void vfunc08();
    virtual void vfunc0c();
};

typedef char Obj55a88cSizeCheck[sizeof(Obj55a88c) == 0x18 ? 1 : -1];

#endif
