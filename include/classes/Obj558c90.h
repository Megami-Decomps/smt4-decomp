#ifndef CLASSES_OBJ558C90_H
#define CLASSES_OBJ558C90_H
#include "common.h"

/* Context-backed shared-reference dispatcher. */
class Obj558c90 {
public:
    virtual ~Obj558c90();
    virtual void vfunc08();
    virtual s32 vfunc0c(u32 key, u32 arg2, u32 arg3);
    virtual s32 vfunc10(u32 key, u32 arg2, u32 arg3);
    virtual s32 vfunc14(u32 key, u32 arg2, u32 arg3);
    virtual void vfunc18();
    virtual void vfunc1c();
    /* 0x04 */ u32 unk04;
    /* 0x08 */ void *reference;
};
#endif
