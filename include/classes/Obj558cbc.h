#ifndef CLASSES_OBJ558CBC_H
#define CLASSES_OBJ558CBC_H

#include "classes/Obj55b104.h"

struct Obj558cbcResult { u32 words[3]; };

class Obj558cbcSession {
public:
    virtual ~Obj558cbcSession();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void notify(u16 value);
    virtual void finish();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void vfunc24();
    virtual void vfunc28();
    virtual void vfunc2c();
    virtual void vfunc30();
    virtual void vfunc34();
    virtual void vfunc38();
    virtual void vfunc3c();
    virtual void vfunc40();
    virtual void vfunc44();
    virtual void vfunc48();
    virtual void vfunc4c();
    virtual void vfunc50();
    virtual void vfunc54();
    virtual void vfunc58();
    virtual void vfunc5c();
    virtual Obj558cbcResult close();
};

class Obj558cbc : public Obj5593b8 {
public:
    virtual ~Obj558cbc();
    /* 0x0C */ Obj558cbcSession *session;
    /* 0x10 */ Obj558cbcSession *child10;
    /* 0x14 */ Obj558cbcSession *child14;
    /* 0x18 */ Obj558cbcSession *child18;
    /* 0x1C */ u8 active;
    /* 0x1D */ u8 unk1d[3];
    /* 0x20 */ Obj558cbcSession *listener;
    /* 0x24 */ u16 unk24;
    /* 0x26 */ u16 token;
};

#endif
