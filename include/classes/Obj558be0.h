#ifndef CLASSES_OBJ558BE0_H
#define CLASSES_OBJ558BE0_H

#include "classes/Obj55afc4.h"
#include "classes/Obj5586e0.h"

class Obj558be0 : public Obj55afc4 {
public:
    virtual ~Obj558be0();
    virtual void vfunc08();
    virtual void vfunc0c(u32);
    virtual s32 vfunc10();
    virtual bool vfunc14(void *, u32);

    /* 0x040 */ u8 unk040[4];
    /* 0x044 */ u32 childA;
    /* 0x048 */ u32 childB;
    /* 0x04c */ u8 unk04c[4];
    /* 0x050 */ u8 ready;
    /* 0x051 */ u8 initialized;
    /* 0x052 */ u8 unk052[0xce];
    /* 0x120 */ Obj5586e0 third;
};

#endif
