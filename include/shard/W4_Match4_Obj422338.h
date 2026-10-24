#ifndef SHARD_W4_MATCH4_OBJ422338_H
#define SHARD_W4_MATCH4_OBJ422338_H

#include "common.h"

extern "C" void *asdOperatorNew(u32 bytes);

/* The base of Obj422338 (vtable at 0x422314 + 8; named after it until its real name is known). */
class Obj422314 {
public:
    Obj422314(s32 arg);
    virtual ~Obj422314();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ s32 arg;
    /* 0x08 */ u8 unk08[0x50];
    /* 0x58 */ s32 slot;
    /* 0x5C */ u8 unk5C[0x18];
};

/* An Obj422314 with six more words of state (vtable at 0x422338 + 8). */
class Obj422338 : public Obj422314 {
public:
    Obj422338();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    virtual ~Obj422338();

private:
    /* 0x74 */ u8 flag;
    /* 0x75 */ u8 unk75[3];
    /* 0x78 */ u32 words[6];
    /* 0x90 */ u8 unk90[0xc]; /* not touched by the constructor */
};

typedef char Obj422338SizeCheck[sizeof(Obj422338) == 0x9c ? 1 : -1];

#endif
