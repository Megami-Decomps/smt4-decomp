#ifndef SHARD_W6_W6MATCH1_OBJ55A5A8_H
#define SHARD_W6_W6MATCH1_OBJ55A5A8_H

#include "common.h"

class Obj55a5a8Element {
public:
    virtual ~Obj55a5a8Element();
    u32 value;
};

struct Obj55a5a8RawArray {
    u8* begin;
    u8* end;
    u8* capacity;
    ~Obj55a5a8RawArray();
};

struct Obj55a5a8ElementArray {
    Obj55a5a8Element* begin;
    Obj55a5a8Element* end;
    Obj55a5a8Element* capacity;
    ~Obj55a5a8ElementArray();
};

class Obj55a5a8 {
public:
    virtual ~Obj55a5a8();

private:
    u8 state;
    u8 unk05[3];
    Obj55a5a8RawArray first;
    u8 unk14[4];
    Obj55a5a8RawArray second;
    u8 unk24[0x28];
    Obj55a5a8ElementArray elements;
};

#endif
