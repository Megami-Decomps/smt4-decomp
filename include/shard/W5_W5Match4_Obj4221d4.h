#ifndef SHARD_W5_W5MATCH4_OBJ4221D4_H
#define SHARD_W5_W5MATCH4_OBJ4221D4_H

#include "common.h"


/* Buffer-owning object identified by its retail vtable. */
class Obj4221d4 {
public:
    Obj4221d4();
    virtual ~Obj4221d4();
    static void *operator new[](u32 bytes) throw();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();

private:
    /* 0x04 */ u8 unk04[0x1c];
    /* 0x20 */ void *baseBuffer;
    /* 0x24 */ u8 unk24[0x14];
    /* 0x38 */ s32 first;
    /* 0x3c */ s32 second;
    /* 0x40 */ s32 third;
    /* 0x44 */ u8 active;
    /* 0x45 */ u8 requested;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ void *bufferB;
    /* 0x4c */ void *bufferC;
};
typedef char Obj4221d4SizeCheck[sizeof(Obj4221d4) == 0x50 ? 1 : -1];

#endif
