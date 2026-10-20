/* script/scrScriptProcess.c: script resources. */
#ifndef SCRIPT_SCRSCRIPTPROCESS_H
#define SCRIPT_SCRSCRIPTPROCESS_H

#include "common.h"

/* A script resource node (doubly linked list). */
typedef struct ScriptResource {
    /* 0x00 */ u8 unk00[0xD4];
    /* 0xD4 */ void *bufC;                /* heap block, freed on release */
    /* 0xD8 */ u8 unkD8[0x10];
    /* 0xE8 */ void *bufA;                /* heap block, freed on release */
    /* 0xEC */ void *bufB;                /* heap block, freed on release */
    /* 0xF0 */ struct ScriptResource *prev;
    /* 0xF4 */ struct ScriptResource *next;
} ScriptResource;

typedef struct ScriptResourceList {
    /* 0x00 */ s32 count;
    /* 0x04 */ ScriptResource *head;
    /* 0x08 */ ScriptResource *tail;
} ScriptResourceList;

#endif
