#ifndef CLASSES_ALLOCATED_SELECTION_H
#define CLASSES_ALLOCATED_SELECTION_H

#include "classes/Obj422540.h"

/* A nonvirtual state base is initialized before the concrete object's vtable. */
struct AllocatedSelectionState {
    AllocatedSelectionState() : index(-1) {}
    /* 0x00 */ u32 kind;
    /* 0x04 */ u32 size;
    /* 0x08 */ OwnerAllocator *allocator;
    /* 0x0C */ void *storage;
    /* 0x10 */ s32 index;
};

class Obj55c954 : public AllocatedSelectionState {
public:
    Obj55c954(OwnerAllocator *owner, void *value)
    {
        allocator = owner;
        kind = 2;
        size = 6;
        storage = value;
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
    Obj55c978(OwnerAllocator *owner, void *value)
    {
        allocator = owner;
        kind = 1;
        size = 12;
        storage = value;
    }
    virtual ~Obj55c978();
    virtual void unk08();
    virtual void unk0c();
    virtual void unk10();
    virtual void unk14();
    virtual void vfunc18();
    /* 0x18 */ u8 unk18[0xc];
};

/* Kind four of the same pool family as IV's Obj4224f8. */
class Obj55c99c : public Obj422540 {
public:
    Obj55c99c(OwnerAllocator *owner, void *value) : Obj422540(owner, value)
    {
        kind = 4;
        size = 2;
    }
    virtual ~Obj55c99c();
    /* 0x18 */ u8 unk18[4];
};

class Obj55c9c0 : public Obj422540 {
public:
    Obj55c9c0(OwnerAllocator *owner, void *value)
        : Obj422540(owner, value)
    {
        kind = 3;
        unk24 = 6;
        unk25 = 0;
        unk26 = 0;
        unk28 = 0;
        unk2a = 0;
        unk2c = 0;
        size = 13;
    }
    virtual ~Obj55c9c0();
    /* 0x18 */ u8 unk18[0xc];
    /* 0x24 */ u8 unk24;
    /* 0x25 */ u8 unk25;
    /* 0x26 */ u16 unk26;
    /* 0x28 */ u16 unk28;
    /* 0x2A */ u16 unk2a;
    /* 0x2C */ u16 unk2c;
};

typedef void *(*SelectionObjectCreate)(OwnerAllocator *allocator, void *storage);

extern "C" {
void *FUN_004acdb4(OwnerAllocator *allocator, void *value);
void *FUN_004acea0(OwnerAllocator *allocator, void *value);
void *selectionCreateKindFour(OwnerAllocator *allocator, void *value);
void *FUN_004ad310(OwnerAllocator *allocator, void *value);
} /* extern "C" */

#endif
