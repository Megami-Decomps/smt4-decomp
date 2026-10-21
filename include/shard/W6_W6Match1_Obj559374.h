#ifndef SHARD_W6_W6MATCH1_OBJ559374_H
#define SHARD_W6_W6MATCH1_OBJ559374_H

#include "shard/W6_W6Match2_OnlineString.h"

struct Obj559374Implementation;

class Obj559374 {
public:
    virtual ~Obj559374();

    OnlineStringValue name; // 0x04
    Obj559374Implementation* implementation; // 0x0c
    u32 registration; // 0x10
    u8 unk14[8];
    u8 registered; // 0x1c
};

#endif
