#ifndef CLASSES_ALLOCATED_SELECTION_H
#define CLASSES_ALLOCATED_SELECTION_H

#include "common.h"

class SelectionObjectAllocator {
public:
    virtual void *allocate(u32 bytes) = 0;
};

/* A nonvirtual state base is initialized before the concrete object's vtable. */
struct AllocatedSelectionState {
    AllocatedSelectionState() : index(-1) {}
    /* 0x00 */ u32 active;
    /* 0x04 */ u32 kind;
    /* 0x08 */ SelectionObjectAllocator *owner;
    /* 0x0C */ u32 parameter;
    /* 0x10 */ s32 index;
};

class Obj55c954 : public AllocatedSelectionState {
public:
    Obj55c954(SelectionObjectAllocator *allocator, u32 value)
    {
        active = 2;
        kind = 6;
        owner = allocator;
        parameter = value;
    }
    virtual ~Obj55c954();
    virtual void unk08();
    virtual void unk0c();
    virtual void unk10();
    virtual void unk14();
    virtual void vfunc18();
    /* 0x18 */ u8 unk18[0xc];
};

class Obj55c978 : public AllocatedSelectionState {
public:
    Obj55c978(SelectionObjectAllocator *allocator, u32 value)
    {
        active = 1;
        kind = 12;
        owner = allocator;
        parameter = value;
    }
    virtual ~Obj55c978();
    virtual void unk08();
    virtual void unk0c();
    virtual void unk10();
    virtual void unk14();
    virtual void vfunc18();
    /* 0x18 */ u8 unk18[0xc];
};

class Obj55c99c : public AllocatedSelectionState {
public:
    Obj55c99c(SelectionObjectAllocator *allocator, u32 value)
    {
        active = 4;
        kind = 2;
        owner = allocator;
        parameter = value;
    }
    virtual ~Obj55c99c();
    virtual void unk08();
    virtual void unk0c();
    virtual void unk10();
    virtual void unk14();
    virtual void vfunc18();
    /* 0x18 */ u8 unk18[4];
};

inline void *operator new(u32, void *storage) { return storage; }

#endif
