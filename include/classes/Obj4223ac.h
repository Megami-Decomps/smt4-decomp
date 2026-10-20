#ifndef OBJ4223AC_H
#define OBJ4223AC_H

#include "common.h"

/* The parameter block handed to Obj4223ac::vfunc08. */
struct Obj4223acParam {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 type;   /* 9 selects the second set of table entries */
};

/* The object whose vtable is at 0x4223ac (named after it until its real name is known); the
 * vtable is stored by FUN_003a5e30. Slot 0 is the deleting destructor. */
class Obj4223ac {
public:
    virtual ~Obj4223ac();
    virtual void vfunc08(Obj4223acParam *param);
    virtual void vfunc0c();   /* FUN_003c2ef0, shared with the vtable at 0x4221a4 */
    virtual void vfunc10();
};

#endif
