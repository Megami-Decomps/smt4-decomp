#ifndef CLASSES_OBJ557ED0_H
#define CLASSES_OBJ557ED0_H

#include "common.h"

extern "C" void *asdOperatorNew(u32 bytes);

/* The object whose vtable is at 0x557ed0 (named after it until its real name is known): the
 * fountain screen's state, 0x5A0 bytes. Its constructor installs the vtable, constructs the
 * float-pair member at 0x4D8 and clears the state; slot 1 is the deleting destructor. */
class Obj557ed0 {
public:
    Obj557ed0();
    virtual ~Obj557ed0();

    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 task;                 /* the screen's process handle */
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 unk0C[7];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34[0x4A4];
    /* 0x4D8 */ u8 floatPair[0x70];      /* constructed by _ZN10FloatStateC1Ev */
    /* 0x548 */ u32 params[4];           /* copied from the caller's parameters */
    /* 0x558 */ u8 unk558[4];
    /* 0x55C */ u32 unk55C;
    /* 0x560 */ u32 unk560;
    /* 0x564 */ u8 unk564;
    /* 0x565 */ u8 unk565[3];
    /* 0x568 */ u32 unk568;
    /* 0x56C */ u32 unk56C;
    /* 0x570 */ u8 unk570;
    /* 0x571 */ u8 unk571[3];
    /* 0x574 */ u32 unk574;
    /* 0x578 */ u32 unk578;
    /* 0x57C */ u8 unk57C;
    /* 0x57D */ u8 unk57D[3];
    /* 0x580 */ u32 unk580;
    /* 0x584 */ u32 unk584;
    /* 0x588 */ u8 unk588;
    /* 0x589 */ u8 unk589[3];
    /* 0x58C */ u32 unk58C;
    /* 0x590 */ u8 unk590[0x10];
};

typedef char Obj557ed0LayoutCheck[sizeof(Obj557ed0) == 0x5A0 ? 1 : -1];

#endif
