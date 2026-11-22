#ifndef CLASSES_OBJ5597FC_H
#define CLASSES_OBJ5597FC_H

#include "shard/W6_W6Match1_Obj55a5a8.h"

/* Final class constructed by the 0x432b10 unit, after its vector-owning base. */
class Obj5597fc : public Obj55a5a8 {
public:
    Obj5597fc();
    virtual ~Obj5597fc();
    virtual void vfunc14();
    virtual void vfunc18() = 0;
    virtual void vfunc1c() = 0;
    virtual void vfunc20() = 0;
    /* 0x6C */ u8 ready;
    /* 0x6D */ u8 unk6d[3];
    /* 0x70 */ u32 result;
    /* 0x74 */ u8 pending;
};

#endif
