#ifndef CLASSES_OBJ55A178_H
#define CLASSES_OBJ55A178_H

#include "common.h"

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
