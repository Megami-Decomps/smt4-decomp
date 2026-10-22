#ifndef CLASSES_OBJ55A254_H
#define CLASSES_OBJ55A254_H

#include "shard/W4_Match4_Obj559ecc.h"

class Obj55a254 {
public:
    virtual ~Obj55a254();
    virtual Obj55a254 *clone(); /* +0x08 */
    virtual Obj55aff4 getTypeName(); /* +0x0c */
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void copyTo(Obj55a254 *) const; /* +0x1c */
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 flag;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ Obj55aff4 name;
};

#endif
