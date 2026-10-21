#ifndef SHARD_W6_W6MATCH8_AOCQUESTRETURN_H
#define SHARD_W6_W6MATCH8_AOCQUESTRETURN_H

#include "classes/Obj526238.h"
#include "shard/Shard0032.h"

// Corresponding scene-step fields have the same layout in both games.
struct AocQuestReturnView {
    u32 flags;
    s32 state;
    s32 substate;
    u8 unk00c[0x1fc];
    Obj526238Child *child;
    u8 unk20c[4];
    u8 contentCode;
    u8 unk211[0xf];
    u32 argument;
    u8 unk224[0x12c];
    void *script;
    void *messages;
    ScriptState *process;
};

#endif
