#ifndef SYS_OBJECTPOOL_H
#define SYS_OBJECTPOOL_H

#include "common.h"

class PoolObject {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void vfunc0C();
    virtual void vfunc10();
    /* 0x04 */ s32 kind;
    /* 0x08 */ u8 flags;
    /* 0x09 */ u8 unk09[3];
};

struct ObjectPool {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ u32 count;
    /* 0x14 */ u32 primaryCount;
    /* 0x18 */ PoolObject *objects[32];
};

class PoolObjectA {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void vfunc0C();
    virtual void vfunc10();
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 kind;
    /* 0x0C */ u8 flags;
    /* 0x0D */ u8 unk0D[3];
};
struct ObjectPoolA {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ u32 count;
    /* 0x14 */ u32 primaryCount;
    /* 0x18 */ PoolObjectA* objects[32];
};

#endif
