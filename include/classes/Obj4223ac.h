#ifndef OBJ4223AC_H
#define OBJ4223AC_H

#include "classes/ObjBase3c2ef0.h"

/* The parameter block handed to Obj4223ac::vfunc08. */
struct Obj4223acParam {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 type;   /* 9 selects the second set of table entries */
};

/* The object whose vtable is at 0x4223ac (named after it until its real name is known); the
 * vtable is stored by FUN_003a5e30. A window like Obj4221a4: it shares ObjBase3c2ef0::vfunc0c with
 * it. Its destructor (D0) only runs the base's. */
class Obj4223ac : public ObjBase3c2ef0 {
public:
    virtual ~Obj4223ac();
    virtual void vfunc08(void *param);   /* an Obj4223acParam * */
    virtual void vfunc10(u32 arg);
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
};

#endif
