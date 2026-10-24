#ifndef CLASSES_OBJ55A508_H
#define CLASSES_OBJ55A508_H

#include "common.h"
#include "classes/Obj55ac48.h"

/* Concrete record (vtable 0x55a508) that adds no data to Obj55ac48; its virtual slots are implemented elsewhere. */
class Obj55a508 : public Obj55ac48 {
public:
    Obj55a508();
    Obj55a508(const Obj55a508 &other);
    virtual void vfunc08();
    virtual void vfunc0c();
};

typedef char Obj55a508SizeCheck[sizeof(Obj55a508) == 0x20 ? 1 : -1];

#endif
