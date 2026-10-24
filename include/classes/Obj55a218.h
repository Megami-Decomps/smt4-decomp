#ifndef CLASSES_OBJ55A218_H
#define CLASSES_OBJ55A218_H

#include "common.h"

/* The shared-reference holder (vtable at 0x55ae24, named after it until its real name is known)
 * that Obj55a218 derives from; its destructor is FUN_002eb7c0. */
class Obj55ae24 {
public:
    virtual ~Obj55ae24();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x3C];
};

/* The system table's flag block (g_systemTable). */
struct Obj55a218SystemTable {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 handlesShared;   /* nonzero: the handle belongs to someone else */
    /* 0x02 */ u8 unk02[0xE];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ f32 unk14;
};

extern "C" Obj55a218SystemTable g_systemTable;
extern "C" void FUN_002f674e(u32 handle);

/* The object whose vtable is at 0x55a218 (named after it until its real name is known): a holder
 * of one handle that it releases when destroyed, unless the system says the handle is shared.
 * Slot 0 is the destructor; the vtable is stored by FUN_00119d20 and the destructor. */
class Obj55a218 : public Obj55ae24 {
public:
    virtual ~Obj55a218();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void vfunc24();

    /* Public for the retained complete-object ABI wrapper. */
    /* 0x40 */ u32 handle;
};

#endif
