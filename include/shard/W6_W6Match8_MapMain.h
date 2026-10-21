#ifndef SHARD_W6_W6MATCH8_MAP_MAIN_H
#define SHARD_W6_W6MATCH8_MAP_MAIN_H

#include "common.h"

struct MapTintNode;
struct MapScriptProcess;

struct MapMainState {
    u8 unk00[0x40];
    u8 tintInitialized; /* 0x40 */
    u8 unk41[0x27];
    u32 eventId;        /* 0x68 */
    char entryName[0x24]; /* 0x6c */
    void *script;       /* 0x90 */
    void *messages;     /* 0x94 */
    MapScriptProcess *process; /* 0x98 */
    u32 scriptState;    /* 0x9c */
    u8 unka0[0x30];
    MapTintNode *node;  /* 0xd0 */
};

#endif
