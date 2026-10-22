#ifndef CLASSES_OBJ55C81C_H
#define CLASSES_OBJ55C81C_H
#include "common.h"

class Obj55c81cChild {
public:
    virtual ~Obj55c81cChild();
    virtual void vfunc08();
    virtual void update();
};
class Obj55c81c {
public:
    virtual ~Obj55c81c();
    virtual void vfunc08();
    virtual void update();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 flags;
    /* 0x0D */ u8 unk0d[0x4F];
    /* 0x5C */ s32 frames;
    /* 0x60 */ u8 unk60[0x14];
    /* 0x74 */ Obj55c81cChild *child;
    /* 0x78 */ u8 unk78[0x13];
    /* 0x8B */ u8 mode;
    /* 0x8C */ u8 unk8c[4];
    /* 0x90 */ u8 state;
};
#endif
