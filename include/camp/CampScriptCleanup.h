#ifndef CAMP_CAMP_SCRIPT_CLEANUP_H
#define CAMP_CAMP_SCRIPT_CLEANUP_H
#include "common.h"
#include <stddef.h>

struct CampScriptCleanup {
    /* 0x000 */ u8 unk000[0x90];
    /* 0x090 */ u32 textureNode;
    /* 0x094 */ u8 unk094[0xCD8];
    /* 0xD6C */ void *firstMessages;
    /* 0xD70 */ void *firstScript;
    /* 0xD74 */ void *firstProcess;
    /* 0xD78 */ u8 unkD78[0x1C];
    /* 0xD94 */ void *secondMessages;
    /* 0xD98 */ void *secondScript;
    /* 0xD9C */ void *secondProcess;
    /* 0xDA0 */ u8 unkDA0[0xC];
    /* 0xDAC */ u8 keepShared;
    /* 0xDAD */ u8 unkDAD[0xAB];
    /* 0xE58 */ u8 ownsList;
    /* 0xE59 */ u8 unkE59[3];
    /* 0xE5C */ u32 list;
    /* 0xE60 */ void *buffers[10];
};
typedef char CampScriptCleanupOffsets[
    offsetof(CampScriptCleanup, textureNode) == 0x90 &&
    offsetof(CampScriptCleanup, firstProcess) == 0xD74 &&
    offsetof(CampScriptCleanup, secondProcess) == 0xD9C &&
    offsetof(CampScriptCleanup, keepShared) == 0xDAC &&
    offsetof(CampScriptCleanup, ownsList) == 0xE58 &&
    offsetof(CampScriptCleanup, buffers) == 0xE60 ? 1 : -1];
#endif
