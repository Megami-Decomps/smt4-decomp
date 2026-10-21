#ifndef SHARD_W6_W6MATCH2_HELP_RESOURCES_H
#define SHARD_W6_W6MATCH2_HELP_RESOURCES_H

#include "common.h"

struct ScriptProcess;
struct HelpResources {
    u32 state;        // 0x00
    u8 unk04[8];      // 0x04
    void* first;      // 0x0c
    void* second;     // 0x10
    ScriptProcess* script; // 0x14
};

extern "C" {
void asdMemFree(void* memory);
void scrScriptProcessDestroy(ScriptProcess* script);
}

#endif
