#ifndef SHARD_W6_W6MATCH7_OWNEDCOLLECTIONS_H
#define SHARD_W6_W6MATCH7_OWNEDCOLLECTIONS_H

#include "classes/AsdAllocatorObject.h"

class AllocatorOwnedCollectionEntry {
public:
    virtual void vfunc00();
    virtual void destroy();
    /* 0x04 */ AsdAllocatorObject* owner;
};

struct AllocatorOwnedCollection {
    /* 0x00 */ AsdAllocatorObject* owner;
    /* 0x04 */ AsdAllocatorObject* bufferOwner;
    /* 0x08 */ AllocatorOwnedCollectionEntry** begin;
    /* 0x0C */ AllocatorOwnedCollectionEntry** end;
};

class Obj55bc90 {
public:
    virtual ~Obj55bc90();
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

    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ AllocatorOwnedCollection* first;
    /* 0x14 */ AllocatorOwnedCollection* second;
};

#endif
