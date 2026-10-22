#ifndef CLASSES_OBJ421874_H
#define CLASSES_OBJ421874_H

#include "shard/W6_W6Match7_OwnedCollections.h"

/* IV's owner of two allocator-backed collections (vtable at 0x421874). */
class Obj421874 {
public:
    virtual ~Obj421874();
    virtual void vfunc08();
    virtual void vfunc0C() = 0;
    virtual void vfunc10() = 0;
    virtual void vfunc14() = 0;
    virtual void vfunc18() = 0;
    virtual void vfunc1C() = 0;
    virtual void vfunc20() = 0;
    virtual void vfunc24() = 0;
    virtual void vfunc28() = 0;
    virtual void vfunc2C() = 0;
    virtual void vfunc30() = 0;

    /* 0x04 */ u8 unk04[0xc];
    /* 0x10 */ AllocatorOwnedCollection *first;
    /* 0x14 */ AllocatorOwnedCollection *second;
};

#endif
