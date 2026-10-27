#ifndef SMT4A_CLASSES_OBJ557B38CHILD_H
#define SMT4A_CLASSES_OBJ557B38CHILD_H

#include "classes/Obj420794.h"

/* Apocalypse's names for the two screen-filter children (smt4 calls them Obj420708 / Obj420880, see
 * include/classes/Obj420708.h and Obj420880.h): the retail vtables are _ZTV9Obj557b38 and _ZTV9Obj557d28.
 * They derive from the shared child base and add no virtuals, so their vtables are external. */

/* The flat child: 0x20 bytes, a scalar that starts at 0. */
class Obj557b38 : public Obj420794Child {
public:
    Obj557b38()
    {
        value = 0.0f;
        unk04 = 0;
    }
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 value;
    /* 0x0C */ u8 unk0C[0x14];
};

/* The fading child: 0xC bytes, a scalar that starts at 1. */
class Obj557d28 : public Obj420794Child {
public:
    Obj557d28()
    {
        value = 1.0f;
        unk04 = 0;
    }
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 value;
};

#endif
