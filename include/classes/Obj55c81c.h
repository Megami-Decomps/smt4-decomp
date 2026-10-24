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
    Obj55c81c(u32 owner);
    virtual ~Obj55c81c();
    virtual void vfunc08();
    virtual void update();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 owner;
    /* 0x0C */ u8 flags;
    /* 0x10 */ u32 unk10[4];
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ f32 unk2c[3];
    /* 0x38 */ u8 unk38[12];
    /* 0x44 */ f32 unk44[3];
    /* 0x50 */ f32 scale[3];
    /* 0x5C */ s32 frames;
    /* 0x60 */ u8 unk60[0xc];
    /* 0x6C */ u32 unk6c;
    /* 0x70 */ u8 unk70[4];
    /* 0x74 */ Obj55c81cChild *child;
    /* 0x78 */ u32 unk78;
    /* 0x7C */ u32 unk7c;
    /* 0x80 */ u8 unk80[0xb];
    /* 0x8B */ u8 mode;
    /* 0x8C */ u8 unk8c[4];
    /* 0x90 */ u8 state;
    /* 0x91 */ u8 unk91[3];
    /* 0x94 */ u8 unk94;
};

typedef char Obj55c81cSizeCheck[sizeof(Obj55c81c) == 0x98 ? 1 : -1];

#endif
