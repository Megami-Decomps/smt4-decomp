#ifndef SHARD_W6_W6MATCH1_OBJ55A5A8_H
#define SHARD_W6_W6MATCH1_OBJ55A5A8_H

#include "classes/Obj55aff4Vector.h"
#include "classes/ZeroWordPair.h"

extern "C" void *rt_malloc(u32 bytes);

struct Obj55a5a8RawArray {
    Obj55a5a8RawArray() : begin(NULL), end(NULL), capacity(NULL) {}
    Obj55a5a8RawArray(u32 count) : begin(NULL), end(NULL), capacity(NULL)
    {
        begin = static_cast<u32 *>(rt_malloc(count * sizeof(u32)));
        end = begin;
        capacity = begin + count;
    }
    ~Obj55a5a8RawArray() { asdOperatorDeleteArray(begin); }
    /* 0x00 */ u32 *begin;
    /* 0x04 */ u32 *end;
    /* 0x08 */ u32 *capacity;
};

/* The vector-owning base constructed inline by Obj5597fc. */
class Obj55a5a8 {
public:
    Obj55a5a8() : state(1), first(32), second(32), elements(0) {}
    virtual ~Obj55a5a8();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();

protected:
    /* 0x04 */ u8 state;
    /* 0x05 */ u8 enabled;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ Obj55a5a8RawArray first;
    /* 0x14 */ u8 firstFlag;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ Obj55a5a8RawArray second;
    /* 0x24 */ u16 kind;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ ZeroWordPair firstPair;
    /* 0x30 */ ZeroWordPair secondPair;
    /* 0x38 */ ZeroWordPair thirdPair;
    /* 0x40 */ ZeroWordPair fourthPair;
    /* 0x48 */ u32 unk48;
    /* 0x4C */ Obj55aff4Vector elements;
};

#endif
