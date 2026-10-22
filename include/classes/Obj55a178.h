#ifndef CLASSES_OBJ55A178_H
#define CLASSES_OBJ55A178_H

#include "common.h"

/* Online-state object; the target and retained reference are separate links. */
class Obj55a178 {
public:
    virtual ~Obj55a178();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual s32 vfunc18();
    virtual s32 vfunc1c();
    virtual u32 vfunc20();
    virtual bool vfunc24();
    virtual u32 vfunc28();
    virtual bool vfunc2c();
    virtual s32 acceptsEvent(u32) const;
    virtual s32 isActive() const;
    virtual u16 getState() const;
    virtual void vfunc3c();
    virtual void vfunc40();
    virtual void vfunc44();
    virtual void vfunc48();
    virtual void vfunc4c();
    virtual void vfunc50();
    virtual Obj55a178 *create();
    virtual void setTarget(void *);

    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u16 state;
    /* 0x16 */ u8 unk16[0x12];
    /* 0x28 */ void *target;
    /* 0x2c */ u32 flags;
    /* 0x30 */ u8 unk30[0x10];
    /* 0x40 */ void *reference;
};

/* These callbacks are reused by the online state-machine vtables. */
struct Obj55a178TableView;
struct Obj55a178DispatchTable {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ s32 (*invoke14)(Obj55a178TableView *object);
    /* 0x18 */ void *unk18[8];
    /* 0x38 */ s32 (*invoke38)(Obj55a178TableView *object);
};
struct Obj55a178TableView {
    /* 0x00 */ const Obj55a178DispatchTable *vtable;
};
struct Obj55a178StateView {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 state;
};

struct Obj55a178ClassifierView {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 state;
    /* 0x16 */ u16 unk16;
    /* 0x18 */ u32 flags;
};

#endif
